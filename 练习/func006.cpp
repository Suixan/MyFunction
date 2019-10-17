/*#include <dos.h>
#include <atlalloc.h>
#include <stdio.h>
#include <malloc.h>

int main()
{
	unsigned int size = 64; // (64 x 16) = 1024 bytes 
	unsigned int segp = 0;
	int stat = 0;
	stat = allocmem(size, &segp);

	if(-1 == stat)
	{
		printf("Allocated memory at segment: %x\n", segp);	
	}
	else
	{
		printf("Failed: maximum number of paragraphs available is %u\n", stat);
	}

	return 0;
}
*/