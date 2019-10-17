/*
#include <stdio.h>
#include <iostream>
#include <assert.h>

using namespace std;

size_t strlen(const char *str)
{
	assert(str != NULL);
	int num = 0;
	while(*str != '\0')
	{
		str++;
		num++;	
	}

	return num;
}

int main()
{
	char *str = "123456";
	int num = 0;
	num = strlen(str);
	cout << num << endl;

	return 0;
}
*/