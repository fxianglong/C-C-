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

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	int n;
	while (cin >> n){
		vector<int> res;
		vector<string> ans(n, "");
		for (int i = 0; i < n; i++){
			cin >> ans[i];
		}
		string str;
		getline(cin, str);
		vector<int> ans_size(n, 0);
		for (int i = 0; i < ans.size(); i++){
			ans_size[i] = ans[i].size();
		}
		for (int i = 0; i < str.size(); i++){
			int start = i;
			int length = 0;
			while (str[i] != ' '!=str[i]!='.'){
				length++;
				i++;
			}
			string s = str.substr(start, length);
			if (helper(ans, ans_size, s)){
				;
			}
		}

	}

}