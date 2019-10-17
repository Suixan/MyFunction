/*
#include <stdio.h>
#include <iostream>

using namespace std;

char * strcpy(char *dest, char *src)
{
	if(NULL == dest || NULL == src)
	{
		return NULL;
	}

	char *res = dest;
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;	
	}

	*dest = '\0';
	return res;

}

int main()
{
	char *src = "hello world";
	char *dest = new char;
	int len = strlen(strcpy(dest, src));

	cout << len << endl;
	cout << dest << endl;

	return 0;
}
*/