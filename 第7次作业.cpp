#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstdlib>
#include "��7��.h"
using namespace std;
int main()
{
	char *name = new char[20];
	char s[] = "zhang";
	strcpy(name, "�²¿�");
	Student student1;
	Student student2((char*)"201811990125", (char*)"201811990125", 18, s);
	Student student3=student2;
	student1.Input();
	student1.chenge();
	student1.Display();
		system("pause");
		return 0;
}