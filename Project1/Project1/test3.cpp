//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main(){
//	int n, k, d;
//	cin >> n >> k >> d;
//	int count = 0;
//	vector<int> dp(n+1,0);
//	dp[1] = 1;
//	for (int i = 2; i <= n; i++){
//		dp[i] = (dp[i - 1] * 2) % 998244353;
//	}
//	for (int i = d; i < k; i++){
//			count = dp[n] - dp[n - i]/2;
//	}
//	cout << count << endl;
//	return 0;
//}