#include <iostream>
#include <pthread.h>
using namespace std;

#define NUM_THREADS 5

void* say_hello(void* args)
{
	int i = *((int *)args);
	
	cout << "Hello Runoob! 线程 ID, " << i << endl;
	pthread_exit(NULL);
	
}

int main()
{
	pthread_t tids[NUM_THREADS];
	int i = 0;
	int j[5] = {0};
	for(; i < NUM_THREADS; i++)
	{
		cout << "main() : 创建线程, " << i << endl;
		j[i] = i;
		int ret = pthread_create(&tids[i], NULL, say_hello, (void *)&j[i]);
		if(ret != 0)
		{
			cout << "pthread_create error: error_code=" << ret << endl;
			exit(-1);
		}

	}

	pthread_exit(NULL);
	return 0;
}