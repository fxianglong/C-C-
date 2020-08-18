#include<iostream>
#include<algorithm>

struct A{
	int a;
	int b;
};

int main(){
	A a;
	A b;
	a.a = 3;
	a.b = 5;
	b.a = 1;
	b.b = 9;
	std::swap(a, b);
	system("pause");
	return 0;
}