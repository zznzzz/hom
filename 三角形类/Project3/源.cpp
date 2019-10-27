#include"标头.h"
int main()
{
	jiao f,g;
	cout << sizeof(f)<<"\n";
	f.setdate(3, 4, 5);
	g.setdate(7, 8, 9);
	cout << "f地址" << &f << endl;
	f.display2();
	cout << "g地址" << &g << endl;
	g.display2();
	
	cout << "f地址" << &f << endl;
	f.display3();
	cout << "g地址" << &g << endl;
	g.display3();

	jiao move;
	move.judge();//接口总函数
	return 0;
}