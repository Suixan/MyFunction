/*
#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <dir.h>

int main()
{
	int status;
	clrscr();
	status = mkdir("abc");
	(!status) ? (printf("Directory created\n")) : (printf("Unable to create directory\n"));
	getch();
	system("dir");
	getch();
	status = rmdir("abc");
	(!status) ? (printf("Directory deleted\n")) : (printf("Unable to delete directory\n"));

	return 0;
}
*/