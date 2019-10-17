#include <iostream>
#include <pthread.h>
#include <cstdlib>
#include <unistd.h>
using namespace std;

#define NUM_THREADS 5


void* wait(void* args)
{
	int i = 0;
	
	i = *((int*)args);
	
	sleep(1);
	
	cout << "Sleeping in thread " << endl;
    cout << "Thread with id : " << i << "  ...exiting " << endl;
	
	
	pthread_exit(NULL);
	
}

int main()
{
	pthread_t tids[NUM_THREADS];
	
	int rc = 0;
	int i = 0;
	
	pthread_attr_t attr;
	void *status;
	
	pthread_attr_init(&attr);
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);
	
	for(; i < NUM_THREADS; i++)
	{
		cout << "main() : 创建线程, " << i << endl;

		int ret = pthread_create(&tids[i], NULL, wait, (void *)&i);
		if(ret != 0)
		{
			cout << "pthread_create error: error_code=" << ret << endl;
			exit(-1);
		}

	}

	pthread_attr_destroy(&attr);
	
	for(i = 0; i < NUM_THREADS; i++)
	{
		rc = pthread_join(tids[i], &status);
		if(rc)
		{
			cout << "Error:unable to join," << endl;
			exit(-1);			
		}
		cout << "Main: completed thread id :" << i ;
        cout << "  exiting with status :" << status << endl;

	}	

	cout << "Main: program exiting." << endl;

	pthread_exit(NULL);
	return 0;
}


























