/*
ͷ�ļ�:#include<stdlib.h>
�� ��: ע����ֹ����(��mainִ�н�������õĺ���)
�� ��: void atexit(void (*func)(void));
ע�⣺exit������Щע�ắ����˳�������� �Ǽ�ʱ���˳���෴��ͬһ�����������ǼǶ�Σ���Ҳ�ᱻ���ö�Ρ�
*/
/*
#include <stdlib.h>
#include <stdio.h>

void exit_fn1(void)
{
	printf("Exit function #1 called\n");
}

void exit_fn2(void)
{
	printf("Exit function #2 called\n");
}

int main()
{
	atexit(exit_fn1);

	atexit(exit_fn2);

	return 0;
}
*/