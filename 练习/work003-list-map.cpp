/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <list>
#include <map>
//#include <unistd.h>

#define threshold 1000000

using namespace std;

static list<int> lst_sst;

static map<int, list<int>::iterator> map_sst;//<链表中的值，值对应结点的迭代器>。

static int count = 0;//统计数组（32个数据块）的个数


//队尾加入   未引用
void add_to_rear_link(int *p)
{
	int *node = (int*)malloc(sizeof(int));
	
	lst_sst.push_back(*node);

	count++;
}

//队首加入
void add_to_head_link(int *p)
{
	lst_sst.push_front(*p);

	map_sst.insert(map<int, list<int>::iterator>::value_type(*p, lst_sst.begin()));

	count++;

}


//找到应返回node
list<int>::iterator find_link(int *p)
{
	list<int>::iterator iter_lst = lst_sst.end();

	map<int, list<int>::iterator>::iterator iter_map = map_sst.find(*p);


	if(iter_map != map_sst.end())
	{
		iter_lst = iter_map->second;
	}

	//加入节点
	return iter_lst;
}

//删除指定节点
void delete_node_link(list<int>::iterator iter)
{
	lst_sst.erase(iter);

	map_sst.erase(*iter);

	count--;
}

//删除末尾节点
void delete_node_from_rear()
{
	if(!lst_sst.empty())
	{
		//删除map中元素
		int node = lst_sst.back();
		map_sst.erase(node);


		lst_sst.pop_back();
	}

	count--;

}
void print_st()
{

	printf("count: %d\n", count);

	list<int>::iterator iter = lst_sst.begin();
	while(iter != lst_sst.end())
	{
		printf("list iter: %d ", *iter);

		iter++;
	}

}

void test01();
void test02();
void test03();
void test04();

int main()
{

	test03();

	return 0;
}

//测试清理指定数量节点耗时
void test01()
{
	int i = 0;
	while(i++ < (threshold + 2))
	{	
		list<int>::iterator iter = find_link(&i);

		if(iter != lst_sst.begin())
		{
			if(iter != lst_sst.end())
			{
				delete_node_link(iter);
			}
			

			add_to_head_link(&i);
		}	
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
		list<int>::iterator iter = find_link(&i);

		if(iter != lst_sst.begin())
		{
			if(iter != lst_sst.end())
			{
				delete_node_link(iter);
			}


			add_to_head_link(&i);
		}	
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
	clock_t start2 = 0;
	time_t time1 = 0;
	time_t time2 = 0;

	start = clock();
	while(i++ < threshold)
	{	
		if( (threshold - 1) == i)
		{
			time1 = time(NULL);
			start2 = clock();
			printf("i = %d\n", i);
			usleep(4);
			
		}
		list<int>::iterator iter = find_link(&i);

		time2 = time(NULL);
		if(iter != lst_sst.end())//iter等于lst_sst.end()说明没找到，不等于说明找到了。
		{
			delete_node_link(iter);
		}

		add_to_head_link(&i);	
	}

	end = clock();

	double TheTimes=(double)(end-start)/CLOCKS_PER_SEC;
	double TheTimes1=(double)(end-start2)/CLOCKS_PER_SEC;
	printf("查找若没有并插入过程耗时: %f秒。\n",TheTimes);
	printf("查找%d条数据过程耗时: %f秒。\n",threshold, TheTimes1);
	printf("查找%d条数据过程耗时:%6.3f秒。\n",threshold, difftime(time2, time1));


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

void test04()
{
	int i = 0;
	scanf("%d", &i);
	
	list<int>::iterator iter = find_link(&i);

	if(iter != lst_sst.begin())
	{
		if(iter != lst_sst.end())
		{
			delete_node_link(iter);
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
*/
















