//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(){
//	int T;
//	cin >> T;
//	while (T--){
//		int n, m, k;
//		cin >> n >> m >> k;
//		vector<int> ans(n+1, -1);
//		for (int i = 0; i < m; i++){
//			int a, b, p;
//			cin >> a >> b >> p;
//			if (p < k){
//				a = a>b ? b : a;
//				ans[a] += ans[b];
//				ans[b] = a;
//			}
//		}
//		int count = 0;
//		for (int i = 1; i < ans.size(); i++){
//			if (ans[i] < -1){
//				count++;
//			}
//		}
//		if (count == 1){
//			cout << "Yes" << endl;
//		}
//		else
//		{
//			cout << "No" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}