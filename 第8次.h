#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Point
{
	double x;               //横坐标
	double y;                 //纵坐标
public:
	Point();                         //无参构造函数
	Point(double , double );  //带参构造函数
	Point(const Point& r);          //拷贝构造函数
	~Point();                        //析构函数
	double GetX();                   //提取横坐标
	double GetY();                 //提取纵坐标
	void SetX(double ax);         //修改横坐标
	void SetY(double bx);         //修改纵坐标
	void Swap(double *xa,double *xb);
	friend double GetLength(Point &A, Point &B);

};

Point::Point()
{
	x = 0;
	y = 0;
}
//构造函数
Point::Point(double a,double b )
{
	x = a ;
	y = b ;
}

Point::Point(const Point &r)           //拷贝构造函数，在此例中暂时没有用到
{
	x = r.x;
	y = r.y;
}

Point::~Point()                         //析构函数
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

