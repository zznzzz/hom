#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef _STUDENT                //条件编译
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{
	char *name;                     //姓名
	char number[10];                 //学号
	int age;                         //年龄
	char address[20];                //地址
public:
	Student();                         //无参构造函数
	Student(char *na, char *num, int ag,char * address);  //带参构造函数
	Student(const Student &each);          //拷贝构造函数
	~Student();                        //析构函数
	char* GetName();                   //提取姓名
	char* GetNumber();                 //提取学号
	char* Getadd();                    //提取地址
	int GetAge();                       //提取年龄
	void Display();  
	void chenge();
	void Input();                        //输入学生信息

};
#endif
Student::Student()
{
	name = NULL;
	age = 0;
	cout << "wawawa" << endl;
}
//构造函数
Student::Student(char *na,char *num, int ag,char * add )
{
	if (na)
	{
		name = new char[strlen(na) + 1];       
		strcpy(name, na);
	}
	strcpy(number, num);
	strcpy(address, add);
	age = ag;
	cout << "lalala" << endl;

}

Student::Student(const Student &each)           //拷贝构造函数，在此例中暂时没有用到
{
	if (each.name)
	{
		name = new char[strlen(each.name) + 1];
		strcpy(name, each.name);
	}
	strcpy(number, each.number);
	strcpy(address, each.address);
	age = each.age;
	cout << "yayaya" << endl;
}

Student::~Student()                         //析构函数
{
	if (name)
		delete[]name;
}

char* Student::GetName()                   //提取姓名
{
	return name;
}
int Student::GetAge()                       //提取年龄
{
	return age;
}
char* Student::Getadd()                    //提取专业
{
	return address;
}
char* Student::GetNumber()                 //提取学号
{
	return number;
}
void Student::Display()                    //输出数据信息
{
	cout << "姓  名：" << name << endl;
	cout << "学  号：" << number << endl;
	cout << "年  龄：" << age << endl << endl;
	cout << "地  址：" << address << endl;
}
void Student::chenge()
{
	int a,i;
	char na[10];
	for(i=1;i<=6;i++)
	{
		cout << "是否要修改信息，修改姓名输入1，年龄输入2，学号输入3，地址输入4，不修改输入5." << endl;
		cin >> a;
		if (a == 1)
		{
			cout << "请重新输入姓名：";
			cin >> na;
			name = new char[strlen(na) + 1];
			strcpy(name, na);
		}
		else if (a == 2)
		{
			cout << "请重新输入年  龄：";
			cin >> age;
		}
		else if (a == 3)
		{
			cout << "请重新输入学  号：";
			cin >> number;
		}
		else if (a == 4)
		{
			cout << "请重新输入地址：";
			cin >> address;
		}
		else return;
	}
}
void Student::Input()                      //输入数据
{
	char na[10];
	cout << "输入姓  名：";
	cin >> na;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "输入年  龄：";
	cin >> age;
	cout << "输入学  号：";
	cin >> number;
	cout << "输入地址：";
	cin >> address;
}