#include <iostream>
using namespace std;

class Basic
{
protected:
	double r;
public:
	Basic() { r = 0; }
	Basic(double a) : r(a) {}
};

class Circular : public Basic
{
protected:
	double area;
public:
	Circular(double a)
	{
		r = a;
		area = 3.1415926 * r * r;
	}
	double getArea()
	{
		return area;
	}
};
class Column : public Circular
{
protected:
	double h;
	double cubage;

public:
	Column(double a, double b) : Circular(a)
	{
		h = b;
		cubage = getArea() * h;
	}
	double getCubage()
	{
		return cubage;
	}
};
void main()
{
	Circular circular(45);
	Column column(12, 10);
	cout << "Բ�������" << circular.getArea() << endl;
	cout << "Բ���������" << column.getCubage() << endl;

}