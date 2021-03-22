#include"Builder.cpp"
#include<iostream>
using namespace std;

int main()
{
	FatBuilder thin;
	Director director(&thin);
	director.Create();
	system("pause");
	return 0;
}