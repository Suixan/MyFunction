#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#ifndef WIN32
#include <pthread.h>
#endif
#include <stdbool.h>


int main()
{
	{
		pthread_t tcp_recv_id;
		int ret = pthread_create(&tcp_recv_id, NULL, tcp_connection_recv, NULL);
		if(-1 == ret)
		{
			printf("pthread_create error\n");
		}

	}

	char ip[32] = "192.168.0.148";

	int ret = tcp_connection_check(ip);
	if(1 == ret)
	{
		printf("not error node\n");

	}
	else
	{
		printf("error node\n");

	}
	return 0;
}

int tcp_connection_check(char * ip_addr)
{

	int ret = 0;
	int result = 0;
	int sockfd = 0;
	struct sockaddr_in addr;

	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if(-1 == sockfd)
	{
		elog(WARNING, "init socket error\n");
		return -1;
	}

	addr.sin_family = AF_INET;
	addr.sin_port   = htons(NET_TCP_PORT);
	addr.sin_addr.s_addr = inet_addr(ip_addr);


	ret = connect(sockfd, (struct sockaddr *)&addr, sizeof(struct sockaddr_in));

	if(-1 == ret)
	{
		close(sockfd);
		sockfd = -1;

		//失败
		result = 0;
	}
	else if(ret >= 0)
	{
		//成功
		result = 1;
	}

	return result;

}

void* tcp_connection_recv(void * arg)
{
	while(1)
	{
		int on = 0;
		int ret = 0;
		int sockfd = 0;
		int connfd = 0;
		struct sockaddr_in addr;
		struct sockaddr_in cliaddr;
		fd_set fd;
		fd_set tmpfd;
		socklen_t addrlen;

		sockfd = socket(AF_INET, SOCK_STREAM, 0);
		if(-1 == sockfd)
		{
			elog(WARNING, "init socket error\n");
			continue;
		}

		addr.sin_family = AF_INET;
		addr.sin_port   = htons(NET_TCP_PORT);
		addr.sin_addr.s_addr = htonl(INADDR_ANY);

		ret = setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &on, sizeof(on));
		if(ret < 0)
		{
			elog(ERROR, "setsockopt error\n");
			continue;
		}

		ret = bind(sockfd, (struct sockaddr *)&addr, sizeof(struct sockaddr));		
		if(-1 == ret)
		{
			elog(ERROR, "setsockopt error\n");
			continue;
		}

		ret = listen(sockfd, NODE_NUM);
		if(-1 == ret)
		{
			elog(ERROR, "listen error\n");
			continue;
		}


		FD_ZERO(&fd);
		FD_SET(sockfd, &fd);

		while(1)
		{
			tmpfd = fd;
			ret = select(FD_SETSIZE, &tmpfd, NULL, NULL, NULL);
			if(ret < 0)
			{
				elog(ERROR, "select error\n");
				continue;
			}

			for(int ifd = 0; ifd < FD_SETSIZE; ifd++)
			{
				if(FD_ISSET(ifd, &tmpfd))
				{
					if(ifd == sockfd)
					{
						addrlen = sizeof(cliaddr);
						connfd = accept(sockfd, (struct sockaddr *)&cliaddr, &addrlen);

						if(connfd < 0)
						{
							elog(ERROR, "accept error\n");
							continue;
						}
					}

				}
			}

		}


	}

}

