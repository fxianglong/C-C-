//#include<iostream>
//using namespace std;
//class Base1 {
//public:
//	virtual void func1() { cout << "Base1::func1" << endl; }
//	virtual void func2() { cout << "Base1::func2" << endl; }
//private:
//	int b1;
//};
//
//class Base2 {
//public:
//	virtual void func1() { cout << "Base2::func1" << endl; }
//	virtual void func2() { cout << "Base2::func2" << endl; }
//private:
//	int b2;
//};
//class Derive : public Base1, public Base2 {
//public:
//	virtual void func1() { cout << "Derive::func1" << endl; }
//	virtual void func3() { cout << "Derive::func3" << endl; }
//private:
//	int d1;
//};
//
//typedef void(*VFPTR) ();
//void PrintVTable(VFPTR vTable[])
//{
//	cout << " 虚表地址>" << vTable << endl;
//	for (int i = 0; vTable[i] != nullptr; ++i)
//	{
//		printf(" 第%d个虚函数地址 :0X%x,->", i, vTable[i]);
//		VFPTR f = vTable[i];
//		f();
//	}
//	cout << endl;
//}
//
//int main()
//{
//	Derive d;
//
//	VFPTR* vTableb1 = (VFPTR*)(*(int*)&d);
//	PrintVTable(vTableb1);
//
//	VFPTR* vTableb2 = (VFPTR*)(*(int*)((char*)&d + sizeof(Base1)));
//	PrintVTable(vTableb2);
//
//	return 0;
//}


#include<iostream>
using namespace std;
//class A{
//public:
//	A(char *s) { cout << s << endl; }
//	~A(){}
//};
//
//class B :virtual public A
//{
//public:
//	B(char *s1, char*s2) :A(s1) { cout << s2 << endl; }
//};
//
//class C :virtual public A
//{
//public:
//	C(char *s1, char*s2) :A(s1) { cout << s2 << endl; }
//};
//
//class D :public B, public C
//{
//public:
//	D(char *s1, char *s2, char *s3, char *s4) :B(s1, s2), C(s1, s3), A(s1)
//	{
//		cout << s4 << endl;
//	}
//};
//
//int main() {
//	D *p = new D("class A", "class B", "class C", "class D");
//	delete p;
//	return 0;
//}


//class Base1 { public:  int _b1; };
//class Base2 { public:  int _b2; };
//class Derive : public Base1, public Base2 { public: int _d; };
//
//int main(){
//	Derive d;
//	Base1* p1 = &d;
//	Base2* p2 = &d;
//	Derive* p3 = &d;
//	return 0;
//}