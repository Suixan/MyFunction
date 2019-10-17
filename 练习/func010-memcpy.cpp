/*
#include <stdio.h>
#include <iostream>
#include <assert.h>

using namespace std;

void* memcpy(void *dest, void *src, size_t n)
{
	assert((dest != NULL) && (src != NULL));
	char* dest_t = (char*)dest;
	char* src_t = (char*)src;

	while(n-- > 0)
	{
		*(dest_t++) = *(src_t++);
	}
	return dest;
}

int main()
{
	int a[5] = {1, 2, 3};
	int *b = new int[3];

	void *c = memcpy(b, a, 3 * sizeof(int));
	for(int i = 0; i < 3; i++)
	{
		cout << b[i] << endl;
	}

	int *temp = (int *)c;
	cout << endl;
	cout << *temp << endl;


	return 0;
}
*/