#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Graduate
{
	char *name;   //����
	bool gender;  //�Ա�
	char *id;  //ѧ��
	double score;  //��ѧ�ɼ�
	string research;//�о�����
	string tutor;  //ָ����ʦ
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
	cout << "������  ����";
	cin >> na;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "�����Ա���������1��Ů������0����";
	cin >> gender;
	cout << "����ѧ  �ţ�";
	cin >> d;
	id = new char[strlen(d) + 1];
		strcpy(id, d);
	cout << "������ѧ�ɼ���";
	cin >> score;
	pscore = pscore + score;
	cout << "�����о�����";
	cin >> research;
	cout << "����ָ����ʦ��";
	cin >> tutor;
}
void Graduate::output()
{
	cout << "��  ����" << name << endl;
	cout << "ѧ  �ţ�" << id << endl;
	cout << "�Ա�" ;
	if (gender)
		cout << "��" << endl;
	else
		cout << "Ů" << endl;
	cout << "��ѧ�ɼ���" << score << endl;
	cout << "�о�����" << research << endl;
	cout << "ָ����ʦ��" << tutor << endl;
}
void Graduate::display() const
{
	cout << "��  ����" << name << endl;
	cout << "ѧ  �ţ�" << id << endl;
	cout << "�Ա�";
	if (gender)
		cout << "��" << endl;
	else
		cout << "Ů" << endl;
	cout << "��ѧ�ɼ���" << score << endl;
	cout << "�о�����" << research << endl;
	cout << "ָ����ʦ��" << tutor << endl;
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
