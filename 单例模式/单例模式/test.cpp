#include"Singleton.h"
#include<iostream>
using namespace std;
int main(){
	Singleton* sln = Singleton::Instance();
	system("pause");
	return 0;
}