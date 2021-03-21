#ifndef _PRODUCT_H
#define _PRODUCT_H
class Product{
public:
	virtual ~Product() = 0;
protected:
	Product();
};

class ConcreteProduct:public Product{
public:
	ConcreteProduct();
	~ConcreteProduct();
};
#endif