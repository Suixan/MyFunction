/*#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
	struct tm t;
	char str[80];
	t.tm_min = 30;
	t.tm_hour = 9;
	t.tm_mday = 22;
	t.tm_mon = 11;
	t.tm_year = 56;
	t.tm_yday = 0;
	t.tm_isdst = 0;
	t.tm_sec = 0;
	t.tm_wday = 0;
	strcpy(str, asctime(&t));

	printf("%s", str);
	return 0;
}
*/
/*
#include <stdio.h>
#include <time.h>

int main()
{
	time_t rawtime;
	struct tm * timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	printf("当前本地时间为: %s", asctime(timeinfo));

	printf("当前本地时间为: %ld", rawtime);

	return 0;
}

*/