//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
//	int M, N;
//	cin >> M >> N;
//	vector<vector<char>> ans(M,vector<char>(N,'A'));
//	int c = 0, c1 = M - 1;
//	int r = 0, r1 = N - 1;
//	int n = 0;
//	while (c <= c1 && r <= r1){
//		for (int i = r; c <= c1&& i <= r1; i++){
//			ans[c][i] += (n % 26);
//			n++;
//		}
//		c++;
//		for (int i = c; r <= r1&& i <= c1; i++){
//			ans[i][r1] += (n % 26);
//			n++;
//		}
//		r1--;
//		for (int i = r1; c <= c1&& i >= r; i--){
//			ans[c1][i] += (n % 26);
//			n++;
//		}
//		c1--;
//		for (int i = c1; r <= r1&& i >= c; i--){
//			ans[i][r] += (n % 26);
//			n++;
//		}
//		r++;
//	}
//	for (int i = 0; i < ans.size(); i++){
//		for (int j = 0; j < ans[0].size(); j++)
//		{
//			cout << ans[i][j] << " ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}