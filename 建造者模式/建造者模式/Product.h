#ifndef _PRODUCT_H_
#define _PRODUCT_H_
class Product{
public:
	Product();
	~Product();
	void ProductPart();
};
class ProductPart{
public:
	ProductPart();
	~ProductPart();
	ProductBuilder* BuildPart();
};
#endif