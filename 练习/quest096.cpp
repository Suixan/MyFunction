/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,j,k,Tlen,Plen,count = 0;
	char T[50];
	char P[10];

	printf("�����������ַ�����ǰ��Ϊĸ��������Ϊ�Ӵ���\n");
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

	printf("�Ӵ�������%d�Ρ�\n", count);

	return 0;

}
*/
/*
ĸ�� �� �Ӵ�
1.a , a
2.ab , ab
3.abca , a
4.abcab , ab
5.aaaa , a
*/