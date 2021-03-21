#include<iostream>
#include"factory.h"
#include"product.h"
using namespace std;
Factory::Factory(){}
Factory::~Factory(){}
ConcreteFactory::ConcreteFactory()
{
	cout << "ConcreteFactory....." << endl;
}
ConcreteFactory::~ConcreteFactory()
{
}
Product* ConcreteFactory::CreateProduct()
{
	return new ConcreteProduct();
}