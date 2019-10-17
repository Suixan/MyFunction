/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE * fp;
	char ch, cFilename[10];

	printf("please input file name:\n");
	scanf("%s", cFilename);

	if( (fp = fopen(cFilename, "w")) == NULL)
	{
		printf("open file error.\n");
		exit(0);
	}

	fflush(stdin);//把输入缓冲区中的东西丢掉。
	printf("please input a char, use # as end.\n");
	while('#' != (ch = getchar()) )
	{
		fputc(ch , fp);
	}

	fclose(fp);

	return 0;
}
*/