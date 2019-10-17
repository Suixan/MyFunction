
/*
#include <stdio.h>
#include <assert.h>

#define NODE_NUM 32
static unsigned int uuidArr[NODE_NUM] = {0}; // The failed node has been detected and sent to the fault recovery program

static bool find_in_arr(const unsigned int uuid)
{
	assert(uuid != 0);

	int i = 0;
	while(i < NODE_NUM)
	{
		if(0 == uuidArr[i])
		{
			return false;
		}

		if(uuid == uuidArr[i])
		{
			return true;
		}

		i++;
	}

	return false;
}
static int add_to_arr(const unsigned int uuid)
{
	assert(uuid != 0);

	int i = 0;
	while(i < NODE_NUM)
	{
		if(0 == uuidArr[i])
		{
			uuidArr[i] = uuid;
			return 0;
		}

		i++;
	}

	printf("add_to_arr , uuidArr overflow.\n"); 				
		
	return 0;
}
static int
delete_uuid_from_arr(const unsigned int uuid)
{
	assert(uuid != 0);

	int i = 0;
	int j = 0;
	while(i < NODE_NUM)
	{
		if(uuidArr[i] == uuid)
		{
			j = i;
		}

		if(0 == uuidArr[i])
		{
			break;
		}

		i++;
	}
	uuidArr[j] = uuidArr[i - 1];
	uuidArr[i - 1] = 0; 				
		
	return 0;
}

void print()
{
	int i = 0;
	while(i < NODE_NUM)
	{
		printf("uuidArr[%d] = %u\n", i, uuidArr[i]);
		i++;
	}
}
int main()
{
	
	
	unsigned int uuid = 1;

		add_to_arr(uuid);

	print();
	if(!find_in_arr(uuid))
	{
		printf("---------\n");
		add_to_arr(uuid);
	}
	unsigned int uid = 32;
	//delete_uuid_from_arr(uid);

	print();
	return 0;
}
*/