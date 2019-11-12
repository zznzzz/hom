#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Point
{
	double x;               //������
	double y;                 //������
public:
	Point();                         //�޲ι��캯��
	Point(double , double );  //���ι��캯��
	Point(const Point& r);          //�������캯��
	~Point();                        //��������
	double GetX();                   //��ȡ������
	double GetY();                 //��ȡ������
	void SetX(double ax);         //�޸ĺ�����
	void SetY(double bx);         //�޸�������
	void Swap(double *xa,double *xb);
	friend double GetLength(Point &A, Point &B);

};

Point::Point()
{
	x = 0;
	y = 0;
}
//���캯��
Point::Point(double a,double b )
{
	x = a ;
	y = b ;
}

Point::Point(const Point &r)           //�������캯�����ڴ�������ʱû���õ�
{
	x = r.x;
	y = r.y;
}

Point::~Point()                         //��������
{
	
}

double Point::GetX()
{
	return x;
}
double Point::GetY()
{
	return y;
}
void Point::SetX(double ax)                
{
}
void Point::SetY(double bx)
{
}
void Point::Swap(double *xa,double *xb)
{
	
 }
double GetLength(Point& A, Point& B)
{
	double x = A.x - B.x;
	double y= A.y - B.y;
	return static_cast<double>(sqrt(x * x + y * y));
}

