#include<iostream>
#include<mutex>
using namespace std;

template<class T>
class Shared_ptr{
public:
	Shared_ptr(T* ptr) 
		:_ptr(ptr),_pMutex(new mutex),_pRefrCount(new int(1))
	{}
	~Shared_ptr(){
		Realse();
	}
	Shared_ptr(const Shared_ptr<T>& sp)
		:_ptr(sp._ptr), _pRefrCount(sp._pRefCount), _pMutex(sp._pMutex)
	{
		AddRefCount();
	}
	Shared_ptr<T>* operator=(const Shared_ptr<T>& sp){
		if (this != sp){
			Realse();
			_ptr = sp._ptr;
			_pRefrCount = sp._pRefrCount;
			_pMutex = sp._pMutex;
			AddRefCount();
		}
		return this;
	}
	T& operator*(){ return *_ptr; }
	T* operator->(){ return _ptr; }

	int UseCount(){ return *_pRefrCount; }
	T* Get(){ return _ptr; }
	void AddRefCount(){
		_pMutex.lock();
		++(*_pRefrCount);
		_pMutex.unlock();
	}
private:
	void Realse(){
		bool flag = false;
		_pMutex.lock();
		if (--(*_pRefrCount) == 0){
			delete _pRefCount;
			delete _ptr;
			flag = true;
		}
		_pMutex.unlock();
		if (flag == true);
		delete _pMutex;
	}
private:
	T* _ptr;
	int* _pRefrCount;
	mutex _pMutex;
};