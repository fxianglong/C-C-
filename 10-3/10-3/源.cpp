#include<iostream>
using namespace std;
class A
{
public:
	int x;
};
class B :public A
{
private:int y;
protected:int z;
public:
	int m;
	void setvalue(int a, int b, int c, int d)
	{
		x = a; y = b; z = c; m = d;
	}
	void disp()
	{
		cout << "y=" << y << endl;
		cout << "z=" << z << endl;
	}
};
void main()
{
	B obj;
	obj.x = 1;
	obj.setvalue(1, 2, 3, 4);
	cout << "x=" << obj.x << endl;
	obj.disp();
	/*cout << "y=" << obj.y << endl;
	cout << "z=" << obj.z << endl;*///y,z²»¿É·ÃÎÊ
	cout << "m=" << obj.m << endl;
	obj.m = 10;
	cout << "m=" << obj.m << endl;
	system("pause");
}