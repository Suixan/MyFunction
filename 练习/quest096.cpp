/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,j,k,Tlen,Plen,count = 0;
	char T[50];
	char P[10];

	printf("请输入两个字符串，前者为母串，后者为子串。\n");
	gets(T);
	gets(P);

	Tlen = strlen(T);
	Plen = strlen(P);
	for(i = 0; i <= Tlen - Plen; i++)
	{
		for(j = 0, k = i; j < Plen && T[k] == P[j]; j++, k++);

		if(j == Plen)
		{
			count++;
		}
	}

	printf("子串出现了%d次。\n", count);

	return 0;

}
*/
/*
母串 ， 子串
1.a , a
2.ab , ab
3.abca , a
4.abcab , ab
5.aaaa , a
*/