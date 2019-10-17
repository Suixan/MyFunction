/*
#include <stdio.h>

#define NUM 4

int main()
{
	int a = 0;
	int i = 0;
	int aa[NUM] = {0};
	int t = 0;
	printf("请输入四位数字：");
	scanf("%d", &a);
	aa[0] = a % 10;
	aa[1] = (a % 100) / 10;
	aa[2] = (a % 1000) / 100;
	aa[3] = a /1000;

	for(i = 0; i < NUM; i++)
	{
		aa[i]+=5;
		aa[i]%=10;
	}

	for(i = 0; i < NUM/2; i++)
	{
		t = aa[i];
		aa[i] = aa[NUM - i -1];
		aa[NUM - i -1] = t;
	
	}

	printf("加密后的数字：");
	for(i = NUM - 1; i >= 0; i--)
	{
		printf("%d", aa[i]);
	}
	puts("\n");




	return 0;

}
*/