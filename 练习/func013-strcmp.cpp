/*
#include <stdio.h>
#include <string>
#include <assert.h>
#include <iostream>
using namespace std;

int strcmp(const char *str1, const char *str2)
{
	assert((str1 != NULL) && (str2 != NULL));
	while( (*str1 != '\0') && (*str2 != '\0') )
	{
		if(*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else
		{
			if(*str1 > *str2)
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
	}
	if(*str1 == '\0' && *str2 == '\0')
	{
		return 0;
	}
	else if (*str1 == '\0' && *str2 != '\0')
	{
		return -1;
	}
	else if (*str1 != '\0' && *str2 == '\0')
	{
		return 1;
	}
}

int main()
{
	char *str1 = "780";
	char *str2 = "78";

	int res = strcmp(str1, str2);
	cout << res << endl;

	return 0;
}
*/