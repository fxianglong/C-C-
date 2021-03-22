#include<iostream>
using namespace std;
#include<thread>
#include<mutex>
using namespace std;
class singleton{
private:
	singleton(){};
private:
	static singleton* instace;
public:
	static singleton* GetInstace(){
		return instace;
	}
};
singleton* singleton::instace = new singleton();