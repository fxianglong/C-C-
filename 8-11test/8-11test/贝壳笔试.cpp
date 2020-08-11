//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	int N;
//	cin >> N;
//	string s;
//	cin >> s;
//	int start = 0;
//	int end = N - 1;
//	int count = 0;
//	while (start < end){
//		if (s[start] != s[end])
//		{
//			count++;
//		}
//		start++;
//		end--;
//	}
//	cout << count << endl;
//	return 0;
//}

//
//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
//	int T = 0;
//	cin >> T;
//	while (T--){
//		int M, N;
//		cin >> M >> N;
//		vector<vector<int>> ans(M, vector<int>(N, 0));
//		for (int i = 0; i < M; i++){
//			for (int j = 0; j < N; j++){
//
//			}
//		}
//	}
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(){
//	int n;
//	cin >> n;
//	vector<int> ans(n, 0);
//	for (int i = 0; i < n; i++){
//		cin >> ans[i];
//	}
//	int max_value=0;
//	int step = 1;
//	for (int i = 1; i < n; i++){
//		vector<int> dp(i, 0);
//		dp[i - 1] = ans[i];
//		for (int j = i - 1; j >= 0; j--){
//			dp[i - 2] = (dp[i - 1] | ans[j]);
//			if (dp[i - 2]>max_value)
//				step = i - j;
//			if (dp[i - 2] == (dp[i - 1] | ans[j]))
//				step = min(step, i - j);
//		}
//	}
//	cout << step << endl;
//	system("pause");
//	return 0;
//}


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int group(int a, int b){
	int sum1 = 1;
	for (int i = 0; i < a; i++)
		sum1 = ((b--)*sum1 % 1000000007);
	return sum1;
}
int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<int>> ans(n, vector<int>(m, 0));
	for (int i = 0; i < n; i++){
		int u, v, a, b;
		cin >> u >> v >> a >> b;
		ans[u][v] = group(a, b);
	}

}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(){
//	int T;
//	cin >> T;
//	while (T--){
//		int N, M;
//		cin >> N >> M;
//		if (0 == ((N*M) % 2))
//			cout << "2" << endl;
//		else{
//			for (int i = 3; i <= N*M; i++){
//				if (0 == ((N*M) % i))
//				{
//					cout << i << endl;
//					break;
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}