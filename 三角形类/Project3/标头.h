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
	cout << "�밴��С����˳�����������������߱߳���\n";
	cin >> a >> b >> c;
	cout << "\n";
	if (a + b > c&&a + c > b&&b + c > a)
	{
		cout << "���Թ���������\n";
		phi = (a + b + c) / 2.0;
		s = sqrt(phi*(phi - a)*(phi - b)*(phi - c));
		cout << "���=" << s << endl;
		C = a + b + c;
		cout << "�ܳ�=" << C << endl;
		if (pow(a, 2) + pow(b, 2) < pow(c, 2))
			cout << "�����������������\n";

		else if (pow(a, 2) + pow(b, 2) == pow(c, 2))
			cout << "��������ֱ��������\n";

		else
			cout << "�������Ƕ۽�������\n";

	}
	else
		cout << "�޷�����������";
	system("pause");
}
void jiao::display2()
{
	cout << "a�ĵ�ַ�ǣ� "<< endl;
	cout << &a <<"\n"<< endl;
	cout << "b�ĵ�ַ�ǣ� " << endl;
	cout << &b << "\n" << endl;
	cout << "c�ĵ�ַ�ǣ� " << endl;
	cout << &c << "\n" << endl;

}
void jiao::display3()
{
	cout << "���øú����Ķ����thisָ���� ";
	cout << this << endl;
	cout << " ��ǰ����a����ʼ��ַ��";
	cout << &this->a << endl;
	cout << " ��ǰ����b����ʼ��ַ��";
	cout << &this->b << endl;
	cout << " ��ǰ����c����ʼ��ַ��";
	cout << &this->c << endl;
}




#pragma once
