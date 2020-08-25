#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> ans(n, 0);
	for (int i = 0; i < n; i++)
		cin >> ans[i];
	int count = 0;
	sort(ans.begin(), ans.end());
	int max = ans[ans.size() - 1];
	int r = ans.size() - 1;
	int num = 1;
	while (r>0 && ans[0] != ans[ans.size() - 1]){
		int len = (ans[r] - ans[r - 1])*num;
		num++;
		max = ans[r--];
		for (int i = 0; i < ans.size(); i++)
			ans[i] += len;
		count += len;
	}
	cout << count << endl;
	system("pause");
	return 0;
}


//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//using namespace std;
//int main(){
//	string str;
//	cin >> str;
//	int n;
//	cin >> n;
//	map<int, int> ans;
//	for (int i = 0; i < 10; i++)
//		ans[i] = -1;
//	while (n--){
//		int a, b;
//		cin >> a >> b;
//		ans[a] = b;
//		if (ans[b] != -1){
//			ans[a] = ans[b];
//		}
//	}
//	for (int i = 0; i < 10; i++){
//		if (ans[i] != -1)
//		for (int j = 0; j < str.size();j++)
//		if (str[j] == i)
//			str[j] = ans[i]+'0';
//	}
//	cout << str << endl;
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int main(){
//	string str;
//	cin >> str;
//	int n;
//	cin >> n;
//	vector<vector<int>> ans(2);
//	for (int i = 0; i < n;i++){
//		int a, b;
//		cin >> a >> b;
//		ans[0].push_back(a);
//		ans[1].push_back(b);
//	}
//	for (int i = n - 1; i >= 0; i--){
//		for (int j = i; j < n; j++){
//			if (ans[1][i] == ans[0][j]){
//				ans[1][i] = ans[1][j];
//				break;
//			}
//		}
//	}
//		for (int i = 0; i < str.size(); i++){
//			for (int j = n - 1; j >= 0; j--){
//			if (str[i] == ans[0][j]+'0')
//				str[i] = ans[1][j]+'0';
//		}
//	}
//	cout << str << endl;
//	system("pause");
//	return 0;
//}