#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	vector<int> res(m, 0);
	vector<vector<int>> ans(m,vector<int>(0));
	set<int> s;
	for (int i = 0; i<m; i++){
		int x;
		cin >> x;
		ans[i].resize(x);
		for (int j = 0; j<x; j++){
			cin >> ans[i][j];
			if(ans[i][j]==0)res[i] = 1;
		}
	}
	for (int i = 0; i < res.size(); i++){
		if (res[i] == 1){
			for (int j = 0; j < ans[i].size(); j++){
				s.insert(ans[i][j]);
			}
		}
	}
	for (int i = 0; i < ans.size(); i++){
		for (int j = 0; j < ans[i].size(); j++){
			if (s.find(ans[i][j]) != s.end()){
				for (int x = 0; x < ans[i].size(); x++){
					s.insert(ans[i][x]);
				}
			}
		}
	}
	cout << s.size() << endl;
	system("pause");
	return 0;
}