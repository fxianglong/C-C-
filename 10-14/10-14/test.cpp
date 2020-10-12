#include<iostream>
using namespace std;
#include<vector>

template <class T>
class MyStack{
public:
	MyStack(int n=0):_ans.resize(0){
	}
	MyStack(const MyStack& ans){
		_ans = ans->_ans;
	}
	~MyStack(){
	}
	void Push(T x){
		_ans.push_back(x);
	}
	void Pop(T x){
		if (!_ans.empty()){
			_ans.pop_back(x);
		}
	}
	int Size(){
		return _ans.size();
	}
	void Clear(){
		_ans.clear();
	}
private:
	vector<T> _ans
}; 

#include<queue>
template<class T>
class MyStack{
	MyStack(){}
	MyStack(const MyStack& st){
		q1(st->q1);
	}
	void Push(T x){
		q1.push(x);
	}
	void Pop(){
		while (q1.size()>1){
			q2.push(q1.front());
			q1.pop();
		}
		q1 = q2;
	}
	void Clear(){
		while (!q1.empty()){
			q1.pop();
		}
	}
	int Size(){
		return q1.size();
	}
	~MyStack(){
		delete q1;
		delete q2;
	}
private:
	queue<T> q1;
	queue<T> q2;
};


#include<deque>
template<class T>
class MyStack{
	MyStack(){}
	MyStack(const MyStack& st){
		_d = st->_d;
	}
	~MyStack(){
		_d.clear();
		delete _d;
	}
	void Push(T x){
		_d.push_back(x);
	}
	void Pop(T x){
		if (!_d.empty())
		_d.pop_back();
	}
	int Size(){
		return _d.size();
	}
	void Clear(){
		_d.clear();
	}
private:
	deque<T> _d;
};
