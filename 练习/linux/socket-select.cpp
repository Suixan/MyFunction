#include <stdio.h>

int main()
{
	struct sockaddr_in seraddr, cliaddr;
	int listenfd, connfd, port, fd1, m;
	fd_set readfds, tmpfds;
	socklen_t addrlen;
	char buf[4096];

	if( (listenfd = socket(AF_INET, SOCK_STREAM, 0)) < 0 )
	{

		perror("socket error");
		exit(-1);
	}

	memset(&seraddr, 0, sizeof(seraddr));
	seraddr.sin_family = AF_INET;
	seraddr.sin_port = htons(port);
	seraddr.sin_addr.s_addr = htonl(INADDR_ANY);

	if( (bind(listenfd, (struct sockaddr*)&seraddr, sizeof(seraddr)) ) < 0)
	{		
		perror("bind error");
		exit(-1);
	}	

	if( (connfd = listen(listenfd, 50)) < 0)
	{
		perror("listen error");
		exit(-1);		
	}

	FD_ZERO(&readfds);
	FD_SET(listenfd, &readfds);

	while(1)
	{
		int nread;
		int n;
		if(select(FD_SETSIZE, &tmpfds, NULL, NULL, NULL) < 0)
		{
			perror("select error");
			exit(-1);			
		}
		for (int fd1 = 0; fd1 < FD_SETSIZE; ++fd1)
		{
			if(FD_ISSET(fd1, &tmpfds))
			{
				if(fd1 == listenfd)
				{
					addrlen = sizeof(cliaddr);
					connfd = accept(listenfd, (struct sockaddr*)&cliaddr, sizeof(addrlen));
					FD_SET(connfd, &readfds);
				}
				else
				{
					ioctl(fd1, FIONREAD, &nread);
					if(0 == nread)
					{
						close(fd1);
						FD_CLR(fd1, &nread);
					}
					else
					{
						int i;
						char *p = NULL;
						char *q = NULL;
						n = read(fd1, buf, nread);
						buf[n] = 0;
						p = buf;

						if(strncmp(p, "-get", 4) == 0)
						{
							q = p + 5;
							printf("客户下载文件>%s\n", q);
							if ((fd2 = open(q, O_RDONLY)) < 0)
							{
								perror("打开文件错误\n");
							}

							while((m = read(fd2, buf, 4096)) > 0)
							{
								printf("%s\n", buf);
								write(connfd, buf, m);
							}
							bzero(buf, sizeof(buf));
							close(fd1);
							close(fd2);
							FD_CLR(fd1, &readfds);
						}
						if(strncmp(p, "-up", 3) == 0)
						{
	 						q = p + 4;
	 						printf("客户上传文件%s\n", buf + 4);
	 						if((fd2 = open(q, O_CREAT | O_WRONLY | O_APPEND, 0666)) < 0)
	 						{
	 							printf("打开文件写入失败\n");
	 						}

	 						while((m = read(connfd, buf, 128)) > 0)
	 						{
	 							printf("%s\n", buf);
	 							write(fd2, buf, m);
	 						}
	 						bzero(buf, sizeof(buf));
	 						close(fd1);
	 						close(fd2);
	 						FD_CLR(fd1, &readfds);
						}
						if(strncmp(p, "-ls", 3) == 0)
						{
							q = p + 4;
							printf("客户查看文件……\n");
							if ((dr = opendir(q)) == NULL)
							{
								printf("打开目录失败\n");
							}
							while ((file = readdir(dr)) != NULL)
							{
								printf("%s  \n", file->d_name);
								write(connfd, file->d_name, sizeof(file->d_name));
							}
							close(fd1);
							close(connfd);
							closedir(dr);
							FD_CLR(fd1, &readfds);
						}

						printf("从客户收取的信息:%s\n", buf);
					}
				}	
			}
			
		}


	}
	exit(0);
}