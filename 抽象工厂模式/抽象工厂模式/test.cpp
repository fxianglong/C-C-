#include<iostream>
#include"Product.h"
#include"AbstractFactory.h"

using namespace std;
int main(){
	AbstractFactory* cfl = new ConcreteFactory1();
	cfl->CreateProductA();
	cfl->CreateProductB();
	AbstractFactory* cfll = new ConcreteFactory2();
	cfll->CreateProductA();
	cfll->CreateProductB();
	system("pause");
	return 0;
}
