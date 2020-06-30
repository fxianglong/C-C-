#include<iostream>
#include<stack>
using namespace std;



class CQueue {
public:
	stack<int> s1;
	stack<int> s2;
	CQueue() {
	}

	void appendTail(int value) {
		s1.push(value);
	}

	int deleteHead() {
		if (s1.empty()){
			return -1;
		}
		while (!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}
		int temp = s2.top();
		s2.pop();
		while (!s2.empty())
		{
			s1.push(s2.top());
			s2.pop();
		}
		return temp;
	}
};