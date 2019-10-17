/*
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int ID;
	int math;
	int english;
	int C;
	int avargrage;
	char name[20];

}Stu;

int main()
{
	FILE* fp;
	Stu stu[5];
	int i, avargrade = 0;
	printf("请输入5个同学的信息：学号，姓名，三门成绩（数学、英语、C）：\n");
	for(i = 0; i < 5; i++)
	{
		scanf("%d %s %d %d %d", &(stu[i].ID), stu[i].name, &(stu[i].math), &(stu[i].english), &(stu[i].C));
		stu[i].avargrage = (stu[i].math + stu[i].english + stu[i].C) / 3;	
	}

	if((fp = fopen("stdu", "w")) == NULL)
	{
		printf("error: can not open file!\n");
		exit(0);
	}

	for(i = 0; i < 5; i++)
	{
		fprintf(fp, "%d, %s, %d, %d, %d, %d\n", stu[i].ID, stu[i].name, stu[i].math, stu[i].english, stu[i].C, stu[i].avargrage);
	}

	fclose(fp);

	return 0;
}
*/