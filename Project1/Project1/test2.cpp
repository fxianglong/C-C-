//#include<iostream>
//#include<vector>
//using namespace std;
//void Each_downk(vector<int>& ans, int k){
//	for (int i = 0; i < ans.size(); i++){
//		ans[i] -= k;
//	}
//}
//int main(){
//	int n, m, k;
//	cin >> n >> m >> k;
//	vector<int> ans(n, 0);
//	for (int i = 0; i < n; i++)
//		cin >> ans[i];
//	int count = 0;//·½°¸Êý
//	Each_downk(ans,k);
//	for (int i = 0; i < ans.size() - 1; i++){
//		if (ans[i]>=0 && ans[i + 1]>=0){
//			count++;
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}