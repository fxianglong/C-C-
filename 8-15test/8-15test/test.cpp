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
//	//��ʱ�����е�show()�������еĺ���ͬ����������ͬ��
//	//�������ص�����������ӻ���̳ж�����û�в�����
//	//show()�Ѿ��������ˣ��޷�����
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