/*
#include <iostream>
using namespace std;

class Dog
{
private:
	static int dogs;
public:
	Dog() {}
	void setDogs(int a)
	{
		dogs = a;
	}
	static int getDogs()
	{
		return dogs;
	}

};
int Dog::dogs = 25;
void main()
{
	cout << "未定义类对象之前：x = " << Dog::getDogs() << endl;
	Dog a, b;
	cout << "a中x:" << a.getDogs() << endl;
	cout << "b中x:" << b.getDogs() << endl;
	a.setDogs(360);
	cout << "给对象a中的x设置值后 ：" << endl;
	cout << "a中x:" << a.getDogs() << endl;
	cout << "b中x:" << b.getDogs() << endl;

}
*/