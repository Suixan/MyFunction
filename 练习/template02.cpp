/*
#include <iostream>

using namespace std;

template <typename T>
T sum(T a[], int n)
{
	T s = 0;

	for (int i = 0; i < n; i++)
	{
		s += a[i];	
	}

	return s;
}
template <typename T>
T sum(T a[], int n, T b[], int m)
{
	return sum(a, n) + sum(b, m);

}
int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	int s = sum(a, 5);
	cout << s << endl;
	s = sum(a, 5, a, 5);
	cout << s << endl;
	return 0;
}
*/