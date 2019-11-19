#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Graduate
{
	char *name;   //姓名
	bool gender;  //性别
	char *id;  //学号
	double score;  //入学成绩
	string research;//研究领域
	string tutor;  //指导教师
public:
	Graduate();
	Graduate(char, bool, int, double);
	Graduate(const Graduate&p);
	~Graduate();
	void output();
	void input();
	void display() const;

	static int pscore;
	friend void level(Graduate&a);

};
int Graduate::pscore;
Graduate::Graduate()
{

}
Graduate::Graduate(char, bool, int, double)
{

}
Graduate::Graduate(const Graduate&p)
{

}
Graduate::~Graduate()
{

}
void Graduate::input()
{
	char na[10],d[20];
	cout << "输入姓  名：";
	cin >> na;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "输入性别（男请输入1，女请输入0）：";
	cin >> gender;
	cout << "输入学  号：";
	cin >> d;
	id = new char[strlen(d) + 1];
		strcpy(id, d);
	cout << "输入入学成绩：";
	cin >> score;
	pscore = pscore + score;
	cout << "输入研究领域：";
	cin >> research;
	cout << "输入指导教师：";
	cin >> tutor;
}
void Graduate::output()
{
	cout << "姓  名：" << name << endl;
	cout << "学  号：" << id << endl;
	cout << "性别：" ;
	if (gender)
		cout << "男" << endl;
	else
		cout << "女" << endl;
	cout << "入学成绩：" << score << endl;
	cout << "研究领域：" << research << endl;
	cout << "指导教师：" << tutor << endl;
}
void Graduate::display() const
{
	cout << "姓  名：" << name << endl;
	cout << "学  号：" << id << endl;
	cout << "性别：";
	if (gender)
		cout << "男" << endl;
	else
		cout << "女" << endl;
	cout << "入学成绩：" << score << endl;
	cout << "研究领域：" << research << endl;
	cout << "指导教师：" << tutor << endl;
}
void level(Graduate&a)
{
	
	if (a.score >= 90)
		cout << "A" << endl;
	else if (a.score >= 80)
		cout << "B" << endl;
	else if (a.score >= 70)
		cout << "C" << endl;
	else if (a.score >= 60)
		cout << "D" << endl;
	else 
		cout << "E" << endl;
}
