#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	string str;
	str.clear();
	getline(cin, str);
	int i = 0;
	for (i = 0; i+n <= str.size();i+=n){
		reverse(&str[i], &str[i]+n );
	}
	reverse(&str[i], &str[i] + str.size()-i);
	cout << str << endl;
	system("pause");
	return 0;
}

//2
//gogogoout


//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main(){
//	int n = 0;
//	cin >> n;
//	string str;
//	getline(cin, str);
//	for (int i = 0; i + n <= str.size(); i += n){
//		reverse(&str[i], &str[i] + n);
//	}
//
//	cout << str << endl;
//	//system("pause");
//	return 0;
//}


