/*
//����ˣ�Server)��
#include<winsock2.h>
#include<stdio.h>
#pragma comment(lib,"ws2_32.lib")
void main()
{
    WSADATA wsaData;
    SOCKET sockServer;
    SOCKADDR_IN addrServer;
    SOCKET sockClient;
    SOCKADDR_IN addrClient;
    WSAStartup(MAKEWORD(2,2),&wsaData);
    sockServer=socket(AF_INET,SOCK_STREAM,0);
    addrServer.sin_addr.S_un.S_addr=htonl(INADDR_ANY);//INADDR_ANY��ʾ�κ�IP
    addrServer.sin_family=AF_INET;
    addrServer.sin_port=htons(6000);//�󶨶˿�6000
    bind(sockServer,(SOCKADDR*)&addrServer,sizeof(SOCKADDR));
     
    //Listen������
    listen(sockServer,5);//5Ϊ�ȴ�������Ŀ
    printf("������������:\n������...\n");
    int len=sizeof(SOCKADDR);
    char sendBuf[100];//�������ͻ��˵��ַ���
    char recvBuf[100];//���ܿͻ��˷��ص��ַ���
     
    //���������̣�ֱ���пͻ�����������Ϊֹ
    sockClient=accept(sockServer,(SOCKADDR*)&addrClient,&len);
    //���ղ���ӡ�ͻ�������
    recv(sockClient,recvBuf,100,0);
    printf("%s\n",recvBuf);
     
    //�ر�socket
    closesocket(sockClient);
    WSACleanup();
}


//�ͻ��� (Client)��
#include<winsock2.h>
#include<stdio.h>
#pragma comment(lib,"ws2_32.lib")
void main()
{
    WSADATA wsaData;
    SOCKET sockClient;//�ͻ���Socket
    SOCKADDR_IN addrServer;//����˵�ַ
    WSAStartup(MAKEWORD(2,2),&wsaData);
    //�½��ͻ���socket
    sockClient=socket(AF_INET,SOCK_STREAM,0);
    //����Ҫ���ӵķ���˵�ַ
    addrServer.sin_addr.S_un.S_addr=inet_addr("127.0.0.1");//Ŀ��IP(127.0.0.1�ǻ��͵�ַ)
    addrServer.sin_family=AF_INET;
    addrServer.sin_port=htons(6000);//���Ӷ˿�6000
    //���ӵ������
    connect(sockClient,(SOCKADDR*)&addrServer,sizeof(SOCKADDR));
    //��������
    char message[20]="HelloSocket!";
    send(sockClient,message,strlen(message)+1,0);
    //�ر�socket
    closesocket(sockClient);
    WSACleanup();
}
*/