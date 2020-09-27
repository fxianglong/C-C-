#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class A{
	int a;
	A* next;
};
int main(){
	int N;
	cin >> N;
	vector<list<int>> ans(N);
	for (int i = 0; i < N; i++){
		fflush(stdin);
		string str;
		getline(cin, str);
		static int start = 0;
		for (int j = start+1; j < str.size(); j++){
			string s = str.substr(start, j - start);
			ans[i].push_back(atoi(s.c_str()));
			start = ++j;
		}
	}
	vector<int> res;
	for (int i = 0; i < N; i++){
		while (ans[i].size() != 0){
			res.push_back(*ans[i].begin());
			ans[i].pop_front();
		}
	}
	sort(res.begin(), res.end());
	for (auto e : res){
		cout << e << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}



//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
//	int m, n;
//	cin >> m >> n;
//	vector<int> ans(m);
//	for (int i = 0; i<ans.size(); i++){
//		cin >> ans[i];
//	}
//	int l = 0, r = ans.size() - 1;
//	vector<int> res;
//	while (l < r){
//		int mid = (l + r) / 2;
//		if (ans[mid]>n){
//			r = mid;
//		}
//		else if (ans[mid]<n)
//		{
//			l = mid;
//		}
//		if(ans[mid]==n){
//			int r = l = mid;
//			while (l>0&&ans[l-1] == ans[mid]){
//				l--;
//			}
//			while (r<ans.size()-1&&ans[r + 1] == ans[mid]){
//				r++;
//			}
//			res.push_back(l);
//			res.push_back(r);
//			break;
//		}
//	}
//	if (res.size() == 0){
//		cout << "-1 -1" << endl;
//	}
//	else
//	{
//		cout << res[0] << " " << res[1] << endl;
//	}
//	system("pause");
//	return 0;
//}