#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<vector<int>> ans(n,vector<int>(3,0));
	for (int i = 0; i < n; i++)
		cin >> ans[i][0]>>ans[i][1];
	for (int i = 0; i < n; i++)
		ans[i][2] = i+1;
	for (int i = 0; i < n-1; i++){
		for (int j = i + 1; j < n; j++){
			if (ans[i][0]>ans[j][0])
				swap(ans[i], ans[j]);
			if (ans[i][0]==ans[j][0])
			if (ans[i][1]>ans[j][1])
				swap(ans[i], ans[j]);
		}
	}
	for (int i = 0; i < n;i++){
		cout << ans[i][2];
		if (i != n - 1)
			cout << " ";
		else
		{
			cout << endl;
		}
	}
	system("pause");
	return 0;
}