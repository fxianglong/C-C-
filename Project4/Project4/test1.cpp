#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > RotateMatrix(vector<vector<int> >& matrix) {
	//int u = 0;
	//int h = matrix.size() - 1;
	//while (u < h){
	//	swap(matrix[u], matrix[h]);
	//	u++;
	//	h--;
	//}
	//for (int i = 0; i < matrix.size(); i++){
	//	for (int j = 0; j < matrix[i].size()-1; j++){
	//		int a = matrix.size() - 1 - i;
	//		int b = matrix[0].size() - j - 1;
	//		swap(matrix[i][j], matrix[a][b]);
	//	}
	//}
	//return matrix;
	vector<vector<int>> res;
	for (int i = matrix[0].size()-1; i >= 0; i--){
		vector<int> ans;
		for (int j = 0; j < matrix.size(); j++){
			ans.push_back(matrix[j][i]);
		}
		res.push_back(ans);
	}
	matrix = res;
	return matrix;
}
int main(){
	vector<vector<int>> ans = { { 0, 1, 2 }, { 3, 4, 5 }, { 6, 7, 8 } };
	RotateMatrix(ans);
	for (int i = 0; i < ans.size(); i++){
		for (int j = 0; j < ans[0].size(); j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}