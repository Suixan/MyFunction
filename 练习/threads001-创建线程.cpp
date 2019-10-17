#include <iostream>
#include <pthread.h>
using namespace std;

#define NUM_THREADS 5

void* say_hello(void* args)
{
	cout << "hello" << endl;
	return 0;
}

int main()
{
	pthread_t tids[NUM_THREADS];
	int i = 0;
	for(; i < NUM_THREADS; i++)
	{
		int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
		if(0 == ret)
		{
			cout << "pthread_create error: error_code=" << ret << endl;
		}

	}
	/*
	int index[NUM_THREADS];
	
	int rc = 0;
	int i = 0;
	for(; i < NUM_THREADS; i++)
	{
		cout << "main() : 创建线程, " << i << endl;
		index[i] = i;
	
	}
*/
	pthread_exit(NULL);
	return 0;
}