/*
#include <iostream>
using namespace std;
void main()
{
	int i = 0;
	int n = 0;
	int temp = 0;
	cout << "输入数组的大小：";
	cin >> n;
	double *array = new double[n];
	cout << "给每个数组元素赋值：" << endl;
	for (i = 0; i < n; i++)
	{
		cout << "array[" << i << "] = ";
		cin >> temp;
		*(array + i) = temp;
	}
	cout << "动态数组每个元素的值如下：" << endl;
	for (i = 0; i < n; i++)
	{
		cout << "array[" << i << "] = " << array[i] << endl;
	}
	delete[] array;
}
*/