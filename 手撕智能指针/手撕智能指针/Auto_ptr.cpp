#include<iostream>
using namespace std;


template<class T>
class Auto_ptr{
public:
	Auto_ptr(T* ptr = nullptr) :_ptr(ptr){}
	~Auto_ptr(){
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
	Auto_ptr(Auto_ptr<T> &s)
		:_ptr(s._ptr){
		s._ptr = NULL;
	}
	Auto_ptr<T>& operator=(Auto_ptr<T>& s){
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