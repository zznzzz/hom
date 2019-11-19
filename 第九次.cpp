#include"第九次.h"
#include<iostream>
using namespace std;
int main()
{
	Graduate student1;
	Graduate student2;
	cout << "第一位" << endl;
	student1.input();
	cout << "常成员函数形式输出" << endl;
	student1.display();
	cout << "普通成员函数形式输出" << endl;
	student1.output();
	cout << "第二位" << endl;
	student2.input();
	student2.output();
	cout << "平均成绩为：" << Graduate::pscore / 2 << endl;
	cout << "第一位的成绩等级为：" << endl;
	level(student1);	
	cout << "第二位的成绩等级为：" << endl;
	 level(student2);	
	system("pause");
	return 0;
}