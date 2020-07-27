#include<iostream>
using namespace std;
//int main(){
//	int a, b;
//	scanf("%x %o",&a,&b);
//	cout << a + b << endl;
//	system("pause");
//	return 0;
//}


const int P = 3.1415926;
int main(){
	float a;
	cin >> a;
	printf("%.3f", a*a*a*4.0*P / 3);
	system("pause");
	return 0;
}