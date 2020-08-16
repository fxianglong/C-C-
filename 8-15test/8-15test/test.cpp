#include<iostream>
using namespace std;
//class A
//{
//public:
//	void show(){
//		cout << "show()" << endl;
//	}
//	void show(int x){
//		cout << "show(int x):" << x << endl;
//	}
//};
//int main(){
//	A a;
//	a.show();
//	a.show(3);
//	system("pause");
//	return 0;
//}


//class A
//{
//public:
//	void show(){
//		cout << "A--show()" << endl;
//	}
//};
//class B : public A
//{
//public:
//	void show(int x){
//		cout << "B--show()" << x << endl;
//	}
//};
//int main(){
//	B a;
//	//a.show();
//	//此时基类中的show()和子类中的函数同名而参数不同，
//	//满足隐藏的条件，子类从基类继承而来的没有参数的
//	//show()已经被隐藏了，无法调用
//	a.A::show();
//	a.show(5);
//	system("pause");
//	return 0;
//}


class A
{
public:
	virtual void show(){
		cout << "A--show()" << endl;
	}
};
class B : public A
{
public:
	virtual void show(){
		cout << "B--show()" << endl;
	}
};
void fun(A* p){
	p->show();
}
int main(){
	A a;
	B b;
	fun(&a);
	fun(&b);
	system("pause");
	return 0;
}