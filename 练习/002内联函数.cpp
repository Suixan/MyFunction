/*
#include <iostream>
#include <math.h>

using namespace std;
class Line
{
private:
	double x1, y1, x2, y2;
public:
	Line();
	Line(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);
	void printPoint();
	double getLength();
};

inline Line::Line(int a, int b, int c, int d)
{
	x1 = a;
	x2 = b;
	y1 = c;
	y2 = d;
}
inline void Line::printPoint()
{
	cout << "A£º"<< x1 <<", "<< y1 << endl;
	cout << "B£º"<< x2 <<", "<< y2 << endl;
}
inline double Line::getLength()
{
	double length;
	length = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );
	return length;
}
void main()
{
	Line line(10,80,-10,12);
	line.printPoint();
	cout << line.getLength() << endl;

	
}
*/