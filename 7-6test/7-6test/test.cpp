//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	system("pause");
//	return 0;
//}


#include<iostream>
#include<string>
using namespace std;

#include <stdio.h>

//int main()
//{
//	char buffer[50];
//	int n, a = 5, b = 3;
//	n = sprintf(buffer, "%d plus %d is %d", a, b, a + b);
//	printf("[%s] is a string %d chars long\n", buffer, n);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char str1[] = "Sample string";
//	char str2[40];
//	char str3[40];
//	char* s = strcpy(str2, str1);
//	strcpy(str3, "copy successful");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//	printf("%s", s);
//	system("pause");
//	return 0;
//}


//class A{	
//	virtual void g()
//	{
//		cout << "A::g" << endl;
//	}
//private:
//	virtual void f()
//	{
//		cout << "A::f" << endl;
//	}
//};
//class B : public A
//{
//	void g()
//	{
//		cout << "B::g" << endl;
//	}
//	virtual void h()
//	{
//		cout << "B::h" << endl;
//	}
//};
//typedef void(*Fun)(void);
//int main()
//{
//	B b;
//	Fun pFun;
//	for (int i = 0; i < 3; i++)
//	{
//		pFun = (Fun)*((int*)* (int*)(&b) + i);
//		pFun();
//	}
//	system("pause");
//	return 0;
//}


//class Base{
//public:
//	Base(){
//		cout << "Base:: Base()" << endl;
//	}
//	~Base(){
//		cout << "Base::~Base()" << endl;
//	}
//	virtual void Test1(){
//		cout << "Base:: Test1()" << endl;
//	}
//	int sum(int a, int b){
//		cout << "Base:: sum =a+b" << endl;
//		return a + b;
//	}
//};
//
//class Derived :public Base{
//public:
//	Derived(){
//		cout << "Derived::Derived()" << endl;
//	}
//	~Derived(){
//		cout << "Derived::~Derived()" << endl;
//	}
//protected:
//	virtual void Test1(){
//		cout << "Derived:: Test1()" << endl;
//	}
//	virtual int sum(int a, int b){
//		cout << "Derived:: sum= a+b" << endl;
//		return a + b;
//	}
//};
//
//void FunTest1(Base& b){
//	b.Test1();  
//}
//void FunTest(){
//	Derived d;
//	Base b;
//	Base& pBase = d;
//	FunTest1(b);
//	FunTest1(d);
//	cout << "sum = " << pBase.sum(1, 2) << endl;
//}
//
//int main()
//{
//	//FunTest();
//	char* a = "\72";
//	cout << a << endl;
//	system("pause");
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class P{
//	char nameP[30];
//public:
//	P(char *name = "123"){
//		strcpy(nameP, name);
//	}
//	char*getName(){
//		return nameP;
//	}
//	virtual char *getType(){
//		return "P";
//	}
//};
//class B :public P
//{
//	char nameB[30];
//public:
//	B(char*n1, char *n2) 
//		:P(n1){
//		strcpy(nameB, n2);
//	}
//	char *getName(){
//		return nameB;
//	}
//	char*getType(){
//		return "B";
//	}
//};
//void showP(P *p){
//	cout << p->getType() << ":" << p->getName() << endl;
//}
//int main(){
//	B b("book1", "book2");
//	showP(&b);
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//int main()
//{
//	string res = "";
//	string str;
//	stack<char> stk;
//	cin >> str;
//	for (size_t i = 0; i < str.size(); i++){
//		if (str[i]=='(')
//		{
//			while (str[i] != ')'&&i<str.size()){
//				if (str[i] == '<'&& stk.size() != 0)
//				{
//					stk.pop();
//				}
//				i++;
//			}
//			while (stk.size()){
//				stk.pop();
//			}
//		}
//		else
//		{
//			res += str[i];
//			if (str[i] == '<'){
//				str.pop_back();
//			}
//		}
//	}
//	if (stk.empty())
//		cout << res << std::endl;
//	else
//	{
//		string s;
//		while (stk.size()){
//			s += stk.top();
//			stk.pop();
//		}
//		s.reserve();
//		res += s;
//		cout << s<<std::endl;
//	}
//	system("pause");
//	return 0;
//}


//#include<iostream>
//using namespace std;
//#include<string>
//#include<stack>
//
//int main()
//{
//	string str;
//	stack<char> stk;
//	cin >> str;
//	for (size_t i = 0; i < str.size(); i++)
//	{
//		switch (str[i])
//		{
//		case '<':
//			if (stk.size() != 0&&str[i]!='(')
//				stk.pop(); break;
//		case ')':
//			while (stk.top() != '('){
//				stk.pop();
//			}
//			stk.pop();
//			break;
//		default:
//			stk.push(str[i]);
//		}
//	}
//	string s;
//	while (stk.size()){
//		s += stk.top();
//		stk.pop();
//	}
//	reverse(s.begin(), s.end());
//	cout << s << std::endl;
//	s.reserve();
//	system("pause");
//	return 0;
//}


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	//int N;
	//cin >> N;
	//vector<int> ans(N, 0);
	//int count1 = 1; int count2 = 1;
	//for (int i = 0; i < N; i++){
	//	cin >> ans[i];
	//}
	//vector<int> dp(N, 0);
	//for (int i = 0; i < N; i++){
	//	if (i < 2){
	//		dp[i] = ans[i];
	//	}
	//	else
	//	{
	//		if ((ans[i] + dp[i - 1])>dp[i - 1])
	//			count1++;
	//		else
	//		{
	//			count2++;
	//		}
	//		dp[i] = max(ans[i] + dp[i - 2], dp[i - 1]);
	//	}
	//}
	//cout << dp[N-1] << (count1>count2?count2:count1) << endl;
	//system("pause");
	//return 0;


	int n = 0;
	while (cin >> n) {
		int tmp_sum_likes = 0, max_sum_likes = 0;
		int tmp_num = 0, min_num = 0;

		int likes;
		while (n--) {
			cin >> likes;

			int sum_likes = tmp_sum_likes + likes;
			int num = tmp_num + 1;

			tmp_sum_likes = max_sum_likes;
			tmp_num = min_num;

			if (sum_likes > max_sum_likes) {
				max_sum_likes = sum_likes;
				min_num = num;
			}
		}

		cout << max_sum_likes << " " << min_num << endl;
	}
	return 0;
}