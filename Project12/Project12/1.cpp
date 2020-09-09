//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
//	long long n;
//	cin >> n;
//	vector<long long> ans(n + 1, 0);
//	ans[0] = 1;
//	for (long long i = 1; i <= n; i++){
//		ans[i] = ans[i - 1] + (i - 1) * 2;
//	}
//	cout << ans[n] << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main(){
//	int n;
//	while (cin >> n){
//		vector<int> res;
//		vector<string> ans(n, "");
//		for (int i = 0; i < n; i++){
//			cin >> ans[i];
//		}
//		string str;
//		getline(cin, str);
//		vector<int> ans_size(n, 0);
//		for (int i = 0; i < ans.size(); i++){
//			ans_size[i] = ans[i].size();
//		}
//		for (int i = 0; i < str.size(); i++){
//			int start = i;
//			int length = 0;
//			while (str[i] != ' '!=str[i]!='.'){
//				length++;
//				i++;
//			}
//			string s = str.substr(start, length);
//			if (helper(ans, ans_size, s)){
//				;
//			}
//		}
//
//	}
//
//}
//int func(int a, int b)
//{
//	static int m, i = 2;
//	i += m + 1;
//	m = i + a + b;
//	return(m);
//}

//int main()
//{
//	int k = 4, m = 1, p;
//	p = func(k, m);
//	cout << p << endl;
//	p = func(k, m);
//	cout << p << endl;
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#define add(a+b) a+b
//
//int main(){
//	printf("%d/n", 5 * add(3 + 4));
//	system("pause");
//	return 0;
//}


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> ans(n,0);
	int and=0;
	for (int i = 0; i < n; ++i){
		cin >> ans[i];
	}
	int max = INT_MIN;
	for (int i = 0; i < n; i++){
		max = max>ans[i] ? max : ans[i];
		and += ans[i];
	}
	auto m = (double)and / (double)n;
	printf("%0.2f %d", m, max);
	system("pause");
	return 0;
}

//#include <iostream>
//using namespace std;
//int main()
//{
//	double n, max = 0, avg, a = 0, sum = 0;
//	do{
//		cin >> n;
//		a++;
//		sum += n;
//		if (n>max) max = n;
//		else if (n == max) {
//			max = 0; avg = 0; break;
//		}
//		avg = sum / (a - 1);
//	} while (n != 0);
//		cout << "max=" << max << ",avg=" << avg << endl;
//		system("pause");
//	return 0;
//}
//
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string str;
//	cin >> str;
//	static int start = 0;
//	string s = str.substr(0,1);
//	for (int i = 1; i < str.size(); i++){
//		start = i-1;
//		int num = 1;
//		while (i<str.size()&&str[i - 1] == str[i]){
//			num++;
//			i++;
//		}
//		string ans=str.substr(start, num);
//		s = s.size()>ans.size() ? s : ans;
//	}
//	cout << s << endl;
//	system("pause");
//	return 0;
//}