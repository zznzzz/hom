#include"�ھŴ�.h"
#include<iostream>
using namespace std;
int main()
{
	Graduate student1;
	Graduate student2;
	cout << "��һλ" << endl;
	student1.input();
	cout << "����Ա������ʽ���" << endl;
	student1.display();
	cout << "��ͨ��Ա������ʽ���" << endl;
	student1.output();
	cout << "�ڶ�λ" << endl;
	student2.input();
	student2.output();
	cout << "ƽ���ɼ�Ϊ��" << Graduate::pscore / 2 << endl;
	cout << "��һλ�ĳɼ��ȼ�Ϊ��" << endl;
	level(student1);	
	cout << "�ڶ�λ�ĳɼ��ȼ�Ϊ��" << endl;
	 level(student2);	
	system("pause");
	return 0;
}