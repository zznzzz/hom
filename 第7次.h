#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef _STUDENT                //��������
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{
	char *name;                     //����
	char number[10];                 //ѧ��
	int age;                         //����
	char address[20];                //��ַ
public:
	Student();                         //�޲ι��캯��
	Student(char *na, char *num, int ag,char * address);  //���ι��캯��
	Student(const Student &each);          //�������캯��
	~Student();                        //��������
	char* GetName();                   //��ȡ����
	char* GetNumber();                 //��ȡѧ��
	char* Getadd();                    //��ȡ��ַ
	int GetAge();                       //��ȡ����
	void Display();  
	void chenge();
	void Input();                        //����ѧ����Ϣ

};
#endif
Student::Student()
{
	name = NULL;
	age = 0;
	cout << "wawawa" << endl;
}
//���캯��
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

Student::Student(const Student &each)           //�������캯�����ڴ�������ʱû���õ�
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

Student::~Student()                         //��������
{
	if (name)
		delete[]name;
}

char* Student::GetName()                   //��ȡ����
{
	return name;
}
int Student::GetAge()                       //��ȡ����
{
	return age;
}
char* Student::Getadd()                    //��ȡרҵ
{
	return address;
}
char* Student::GetNumber()                 //��ȡѧ��
{
	return number;
}
void Student::Display()                    //���������Ϣ
{
	cout << "��  ����" << name << endl;
	cout << "ѧ  �ţ�" << number << endl;
	cout << "��  �䣺" << age << endl << endl;
	cout << "��  ַ��" << address << endl;
}
void Student::chenge()
{
	int a,i;
	char na[10];
	for(i=1;i<=6;i++)
	{
		cout << "�Ƿ�Ҫ�޸���Ϣ���޸���������1����������2��ѧ������3����ַ����4�����޸�����5." << endl;
		cin >> a;
		if (a == 1)
		{
			cout << "����������������";
			cin >> na;
			name = new char[strlen(na) + 1];
			strcpy(name, na);
		}
		else if (a == 2)
		{
			cout << "������������  �䣺";
			cin >> age;
		}
		else if (a == 3)
		{
			cout << "����������ѧ  �ţ�";
			cin >> number;
		}
		else if (a == 4)
		{
			cout << "�����������ַ��";
			cin >> address;
		}
		else return;
	}
}
void Student::Input()                      //��������
{
	char na[10];
	cout << "������  ����";
	cin >> na;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "������  �䣺";
	cin >> age;
	cout << "����ѧ  �ţ�";
	cin >> number;
	cout << "�����ַ��";
	cin >> address;
}