#include <iostream>
#include <pthread.h>
#include <cstdlib>
using namespace std;

#define NUM_THREADS 5

struct thread_data
{
	int thread_id;
	char *message;
};

void* say_hello(void* args)
{
	struct thread_data *ptdata;
	
	ptdata = (struct thread_data *)args;
	
	cout << "Thread ID : " << ptdata->thread_id;
    cout << " Message : " << ptdata->message << endl;
	pthread_exit(NULL);
	
}

int main()
{
	pthread_t tids[NUM_THREADS];
	struct thread_data td[NUM_THREADS];
	int i = 0;
	
	for(; i < NUM_THREADS; i++)
	{
		cout << "main() : 创建线程, " << i << endl;
		td[i].thread_id = i;
		td[i].message = (char *)"this is message";
		
		int ret = pthread_create(&tids[i], NULL, say_hello, (void *)&td[i]);
		if(ret != 0)
		{
			cout << "pthread_create error: error_code=" << ret << endl;
			exit(-1);
		}

	}

	pthread_exit(NULL);
	return 0;
}