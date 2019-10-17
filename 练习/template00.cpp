/*
#include <iostream>

using namespace std;

template <typename T>
void sort(T a, T b, T c)
{
	T array[3];
	T temp; 
	int i = 0;
	int j = 0;
	array[0] = a;
	array[1] = b;
	array[2] = c;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;			
			}
		}
	}
	cout << array[0] << array[1] << array[2] << endl;
}

void main()
{
	sort(5, 1, 9);

	return ;
}
*/