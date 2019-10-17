/*
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <process.h>

int main()
{
	int i = 0;
	int strt = 0;
	int ch_out = 0;
	int sector = 0;
	char buf[512] = {0};
	printf("Insert a diskette into drive A and press any key\n");

	getchar();
	if(absread(0, 1, sector, &buf) != 0)
	{
		perror("Disk problem");
		exit(1);
	}

	printf("Read OK\n");
	strt = 3;
	for(; i < 80; i++)
	{
		ch_out = buf[strt + i];
		putchar(ch_out);
	
	}
	printf("\n");
	return 0;
}
*/















