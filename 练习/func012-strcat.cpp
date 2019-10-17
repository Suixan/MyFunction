/*
#include <stdio.h>
#include <iostream>

using namespace std;

char * strcat(char *dest, char *src)
{
	if(NULL == dest)
	{
		return NULL;
	}

	if(NULL == src)
	{
		return dest;
	}
	char *head = dest;

	while(*dest != '\0')
	{
		dest++;
	}

	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return head;

}

int main()
{
	char dest[] = "nihao";
	char src[] = "world";

	char *res = strcat(dest, src);

	cout << dest << endl;
	printf("%s", res);
	system("pause");
	return 0;

}
*/