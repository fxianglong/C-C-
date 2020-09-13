//#include<iostream>
//#include<vector>
//using namespace std;
//
//void Find(vector<vector<int>>& ans){
//	if (ans.size() % 2)
//		return;
//	for (int h = 0; h < ans.size() / 2; h++){
//		int u = ans.size() - h - 1;
//		for (int j = 0; j < ans[0].size(); j++){
//			if (ans[h][j] != ans[u][j])
//				return;
//		}
//	}
//	ans.resize(ans.size() / 2);
//	Find(ans);
//}
//
//int main(){
//	int n, m;
//	cin >> n >> m;
//	vector<vector<int>> ans(n, vector<int>(m, 0));
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < m; j++){
//			cin >> ans[i][j];
//		}
//	}
//	Find(ans);
//	for (int i = 0; i < ans.size(); i++){
//		for (int j = 0; j < ans[0].size(); j++){
//			cout<< ans[i][j];
//			if (j == ans[0].size() - 1)
//				cout << endl;
//			else
//			{
//				cout << " ";
//			}
//		}
//	}
//	return 0;
//}