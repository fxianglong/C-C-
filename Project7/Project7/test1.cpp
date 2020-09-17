//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//bool tmp(vector<int>& a, vector<int>& b){
//	return a[2]/b[1] < b[2]/b[1];
//}
//int main(){
//	int n, p;
//	cin >> n >> p;
//	vector<vector<int>> ans(n, vector<int>(3, 0));//道具数量，单个道具价格，魅力值
//	for (int i = 0; i<n; i++){
//		for (int j = 0; i<3; j++)
//			cin >> ans[i][j];
//	}
//	int max = 0;
//	int sum=0;
//	sort(ans.begin(), ans.end(), tmp);
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < ans[i][1]; j++){
//			if (sum>p)
//				break;
//			sum += ans[i][2];
//		}
//		max>sum ? max : sum;
//	}
//	cout << max << endl;
//	return 0;
//}