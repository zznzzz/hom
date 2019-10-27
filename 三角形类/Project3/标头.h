#include<stdlib.h>
#include<iostream>
#include<math.h>
using namespace std;
class jiao
{
private:
	int a;
	int b;
	int c;
public:
	void setdate(int, int, int);
	void judge();
	void display2();
	void display3();

};
void jiao::setdate(int x, int y, int z)
{
	a = x;
	b = y;
	c = z;
}
void jiao::judge()
{
	int a, b, c, C;
	float s, phi;
	cout << "请按从小到大顺序输入三角形三条边边长：\n";
	cin >> a >> b >> c;
	cout << "\n";
	if (a + b > c&&a + c > b&&b + c > a)
	{
		cout << "可以构成三角形\n";
		phi = (a + b + c) / 2.0;
		s = sqrt(phi*(phi - a)*(phi - b)*(phi - c));
		cout << "面积=" << s << endl;
		C = a + b + c;
		cout << "周长=" << C << endl;
		if (pow(a, 2) + pow(b, 2) < pow(c, 2))
			cout << "三角形是锐角三角形\n";

		else if (pow(a, 2) + pow(b, 2) == pow(c, 2))
			cout << "三角形是直角三角形\n";

		else
			cout << "三角形是钝角三角形\n";

	}
	else
		cout << "无法构成三角形";
	system("pause");
}
void jiao::display2()
{
	cout << "a的地址是： "<< endl;
	cout << &a <<"\n"<< endl;
	cout << "b的地址是： " << endl;
	cout << &b << "\n" << endl;
	cout << "c的地址是： " << endl;
	cout << &c << "\n" << endl;

}
void jiao::display3()
{
	cout << "调用该函数的对象的this指针是 ";
	cout << this << endl;
	cout << " 当前对象a的起始地址：";
	cout << &this->a << endl;
	cout << " 当前对象b的起始地址：";
	cout << &this->b << endl;
	cout << " 当前对象c的起始地址：";
	cout << &this->c << endl;
}




#pragma once
