/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define threshold 1000000000 //ʱ�䳬��2Сʱ
//#define threshold 10000 //ʱ����1s

#define threshold 50000
typedef struct st
{
	int *pint;
	struct st *front;
	struct st *next;
}sst;

static int count = 0;//ͳ�����飨32�����ݿ飩�ĸ���

static sst *head = (sst*)malloc(sizeof(sst));
static sst *rear = head;

//��β����   δ����
void add_to_rear_link(int *p)
{
	sst *node = (sst*)malloc(sizeof(sst));
	node->next  = NULL;
	
	rear->next  = node;
	node->front = rear;
	
	rear = node;

	count++;
}

//���׼���
void add_to_head_link(int *p)
{
	sst *node = (sst*)malloc(sizeof(sst));
	node->next = head;
	node->front = NULL;

	head->front = node;

	head = node;

	count++;

}


//�ҵ�Ӧ����node
sst* find_link(int *p)
{
	sst *node = head;
	while(node != rear)
	{
		if(node->pint == p)
		{
			//ɾ���ڵ�
			return node;
		}
		node = node->next;
	}

	//����ڵ�
	return NULL;
}

//ɾ��ָ���ڵ�
int delete_node_link(sst *node)
{
	node->front->next = node->next;

	free(node);
	node = NULL;

	count--;
	return 0;
}

//ɾ��ĩβ�ڵ�
int delete_node_from_rear()
{
	sst *node = rear->front;

	node->next = NULL;

	free(rear);

	rear = node;

	count--;
	return 0;
}

//��������ָ�������ڵ��ʱ
void test01()
{
	int i = 0;
	while(i++ < (threshold + 2))
	{	
		sst *pnode = find_link(&i);

		if(pnode != NULL)
		{
			delete_node_link(pnode);
		}

		add_to_head_link(&i);	
	}

	//GRD��Դ����count
	if(count >= threshold)
	{
		clock_t start = 0;
		clock_t end = 0;
		start = clock();

		while(count >= (threshold / 2) )
		{
			delete_node_from_rear();
		}

		end = clock();

		double TheTimes=(double)(end-start)/CLOCKS_PER_SEC;
		printf("%f�롣\n",TheTimes);
	}
}

//��������ڵ�ﵽһ��������������û�в�������̺�ʱ
void test02()
{
	int i = 0;
	clock_t start = 0;
	clock_t end = 0;

	start = clock();
	while(i++ < threshold)
	{	
		sst *pnode = find_link(&i);

		if(pnode != NULL)
		{
			delete_node_link(pnode);
		}

		add_to_head_link(&i);	
	}
	end = clock();

	double TheTimes=(double)(end-start)/CLOCKS_PER_SEC;
	printf("������û�в�������̺�ʱ: %f�롣\n",TheTimes);

	//GRD��Դ����count
	if(count >= threshold)
	{	
		while(count >= (threshold / 2) )
		{
			delete_node_from_rear();
		}
	}
}

//�ԱȲ�������ڵ�ﵽһ��������������û�в�������̺�ʱ �� ����һ�������ڵ��ʱ
void test03()
{
	int i = 0;
	clock_t start = 0;
	clock_t end = 0;
	clock_t start1 = 0;
	clock_t end1= 0;

	start = clock();
	while(i++ < threshold)
	{	
		sst *pnode = find_link(&i);

		if(pnode != NULL)
		{
			delete_node_link(pnode);
		}

		add_to_head_link(&i);	
	}
	end = clock();

	double TheTimes=(double)(end-start)/CLOCKS_PER_SEC;
	printf("������û�в�������̺�ʱ: %f�롣\n",TheTimes);

	//GRD��Դ����count
	if(count >= threshold)
	{
		start1 = clock();	
		while(count >= (threshold / 2) )
		{
			delete_node_from_rear();
		}
		end1 = clock();

		double TheTimes=(double)(end1-start1)/CLOCKS_PER_SEC;
		printf("����һ�������ڵ��ʱ: %f�롣\n",TheTimes);
	}
}

int main()
{

	test03();








	
	int i = 0;
	scanf("%d", &i);
	
	sst *pnode = find_link(&i);

	if(pnode != head)
	{
		if(pnode != NULL)
		{
			delete_node_link(pnode);
		}


		add_to_head_link(&i);
	}

	//GRD��Դ����count
	if(count >= threshold)
	{
		clock_t start = 0;
		clock_t end = 0;
		start = clock();

		while(count >= (threshold / 2) )
		{
			delete_node_from_rear();
		}

		end = clock();

		double TheTimes=(double)(end-start)/CLOCKS_PER_SEC;
		printf("%f�롣\n",TheTimes);
	}
	
	return 0;
}
*/