#include<iostream>
#include<vector>
using namespace std;
int a[4][2] = { { 0, 1 }, { 1, 0 }, { 0, -1 }, {-1,0} };
void help(vector<vector<char>>& ans, vector<vector<int>>& src, int x, int y){
	if (x<0 || x >= ans.size() || y<0 || y >= ans[0].size() || ans[x][y] != '1' || src[x][y] == 1)
		return;
	for (int i = 0; i < 2; i++){
		src[x][y] = 1;
		help(ans, src, x+a[i][0], y+a[i][1]);
	}
}
int main(){
	int m, n;
	cin >> m >> n;
	vector<vector<char>> ans(m, vector<char>(n, '0'));
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cin >> ans[i][j];
		}
	}
	int count = 0;
	vector<vector<int>> src(m, vector<int>(n, 0));
	for (int i = 0; i < ans.size(); i++){
		for (int j = 0; j < ans[0].size(); j++)
		if (ans[i][j] == '1'&&src[i][j]==0){
			help(ans, src, i, j);
			count++;
		}
		else
		{
			src[i][j] = 1;
		}
	}
	cout << count << endl;
	system("pause");
	return 0;
}