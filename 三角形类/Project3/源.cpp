#include"��ͷ.h"
int main()
{
	jiao f,g;
	cout << sizeof(f)<<"\n";
	f.setdate(3, 4, 5);
	g.setdate(7, 8, 9);
	cout << "f��ַ" << &f << endl;
	f.display2();
	cout << "g��ַ" << &g << endl;
	g.display2();
	
	cout << "f��ַ" << &f << endl;
	f.display3();
	cout << "g��ַ" << &g << endl;
	g.display3();

	jiao move;
	move.judge();//�ӿ��ܺ���
	return 0;
}