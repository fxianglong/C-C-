#include<iostream>
using namespace std;


template<class T>
class Unique_ptr{
public:
	Unique_ptr(T* ptr=nullptr):_ptr(ptr){}
	~Unique_ptr(){
		if (_ptr)
		delete _ptr;
	}
	T& operator*(){
		return *_ptr;
	}
	T* operator->(){
		return _ptr;
	}
private:
	Unique_ptr(Unique_ptr<T> &s)
		:_ptr(s._ptr){
		s._ptr = NULL;
	}
	Unique_ptr<T>& operator=(Unique_ptr<T>& s){
		if (this != &s._ptr){
			if (_ptr)
				delete _ptr;
			_ptr = s._ptr;
			s._ptr = NULL;
		}
		return *this;
	}
private:
	T* _ptr;
};