/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define threshold 1000000000 //时间超过2小时
//#define threshold 10000 //时间间隔1s

#define threshold 50000
typedef struct st
{
	int *pint;
	struct st *front;
	struct st *next;
}sst;

static int count = 0;//统计数组（32个数据块）的个数

static sst *head = (sst*)malloc(sizeof(sst));
static sst *rear = head;

//队尾加入   未引用
void add_to_rear_link(int *p)
{
	sst *node = (sst*)malloc(sizeof(sst));
	node->next  = NULL;
	
	rear->next  = node;
	node->front = rear;
	
	rear = node;

	count++;
}

//队首加入
void add_to_head_link(int *p)
{
	sst *node = (sst*)malloc(sizeof(sst));
	node->next = head;
	node->front = NULL;

	head->front = node;

	head = node;

	count++;

}


//找到应返回node
sst* find_link(int *p)
{
	sst *node = head;
	while(node != rear)
	{
		if(node->pint == p)
		{
			//删除节点
			return node;
		}
		node = node->next;
	}

	//加入节点
	return NULL;
}

//删除指定节点
int delete_node_link(sst *node)
{
	node->front->next = node->next;

	free(node);
	node = NULL;

	count--;
	return 0;
}

//删除末尾节点
int delete_node_from_rear()
{
	sst *node = rear->front;

	node->next = NULL;

	free(rear);

	rear = node;

	count--;
	return 0;
}

//测试清理指定数量节点耗时
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

	//GRD资源清理，count
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
		printf("%f秒。\n",TheTimes);
	}
}

//测试链表节点达到一定数量，查找若没有并插入过程耗时
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
	printf("查找若没有并插入过程耗时: %f秒。\n",TheTimes);

	//GRD资源清理，count
	if(count >= threshold)
	{	
		while(count >= (threshold / 2) )
		{
			delete_node_from_rear();
		}
	}
}

//对比测试链表节点达到一定数量，查找若没有并插入过程耗时 和 清理一半数量节点耗时
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
	printf("查找若没有并插入过程耗时: %f秒。\n",TheTimes);

	//GRD资源清理，count
	if(count >= threshold)
	{
		start1 = clock();	
		while(count >= (threshold / 2) )
		{
			delete_node_from_rear();
		}
		end1 = clock();

		double TheTimes=(double)(end1-start1)/CLOCKS_PER_SEC;
		printf("清理一半数量节点耗时: %f秒。\n",TheTimes);
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

	//GRD资源清理，count
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
		printf("%f秒。\n",TheTimes);
	}
	
	return 0;
}
*/