/*
#include <stdio.h>
#include <iostream>
#include <assert.h>

using namespace std;

const char* strstr(const char* str1, const char* str2)
{
	//assert(str1 != NULL && str2 != NULL);
	if(str1 == NULL || str2 == NULL)
	{
		return NULL;
	}
	const char* temp = str1;
	const char* res = str2;
	while(str1 != '\0')
	{
		temp = str1;
		res  = str2;
		while(*temp == *res)
		{
			temp++;
			res++;	
		}
		if (*res == '\0')
		{
			return str1;
		}
		str1++;
	}
	return NULL;

}

int main()
{
	char *src = "1234567";
	char *des = "345";

	const char *res = strstr(src, des);

	cout << res << endl;

	return 0;


}
*/