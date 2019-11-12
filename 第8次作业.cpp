#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstdlib>
#include "第8次.h"
using namespace std;
int main()
{
	int i;
	Point  array_stack[10] ;
	Point  *array_heap = new Point[10] ;
	array_stack[0] = Point(1,1);
	array_heap[0] =  Point(4,5) ;
	cout << "两点距离为" ;
	for (i = 0; i <= 9; i++)
	{

	}
	cout << GetLength(array_stack[0], array_heap[0])<<endl;

		system("pause");
		return 0;
}