/*
#include <iostream>
using namespace std;
class complex
{
private:
	double real, image;
public:
	complex(){}
	complex(double a, double b)
	{
		real = a;
		image = b;
	}
	void setRI(double a, double b)
	{
		real = a;
		image = b;
	}
	double getReal()
	{
		return real;
	}
	double getImage()
	{
		return image;
	}
	void print()
	{
		if (image > 0)
		{
			cout << "复数：" << real << " + " << image << "i" << endl;
		}
		if (image < 0)
		{
			cout << "复数：" << real << " - " << image << "i" << endl;
		}
	}
	friend complex add(complex, complex);

};
complex add(complex c1, complex c2)
{
	complex c3;
	c3.real = c1.real + c2.real;
	c3.image = c1.image + c2.image;
	return c3;
}
void main()
{
	complex c1(19, 0.864), c2, c3;
	c2.setRI(90, 125.012);
	c3 = add(c1, c2);
	cout << "c1:"; c1.print();
	cout << "c2:"; c2.print();
	cout << "c3:"; c3.print();
}
*/
/*
#include <iostream>
using namespace std;
#define SECS_PER_DAY 86400
void main()
{*/
	/*输出错误 -1702967296
	int  role_password_lifetime = 30;
	long passwd_valid_msecs = role_password_lifetime * SECS_PER_DAY * 1000;

	cout << passwd_valid_msecs;
	*/

	/*输出错误 -1702967296
	long  role_password_lifetime = 30;
	long  passwd_valid_msecs = role_password_lifetime * SECS_PER_DAY * 1000;

	cout << passwd_valid_msecs;
	*/

	/*输出错误 -1702967296
	int  role_password_lifetime = 30;
	long sec = SECS_PER_DAY;
	long passwd_valid_msecs = role_password_lifetime * sec * 1000;

	cout << passwd_valid_msecs;
	*/
	/*输出正确 2592000000
	int  role_password_lifetime = 30;
	long long int sec = SECS_PER_DAY;
	long long int passwd_valid_msecs = role_password_lifetime * sec * 1000;

	cout << passwd_valid_msecs;
	*/
	/*输出正确 2592000000
	long long int role_password_lifetime = 30;
	long long int sec = SECS_PER_DAY;
	long long int passwd_valid_msecs = role_password_lifetime * sec * 1000;

	cout << passwd_valid_msecs;
	*/
	/*输出正确 2592000000
	int role_password_lifetime = 30;
	long long int passwd_valid_msecs = (long long int)role_password_lifetime * SECS_PER_DAY * 1000;

	cout << passwd_valid_msecs;
	
}*/