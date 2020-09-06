#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> ans(n, 0);
	for (int i = 0; i<n; i++){
		cin >> ans[i];
	}
	vector<int> res = ans;
	sort(res.begin(), res.end());
	for (int i = 0; i < n; i++){
		if (res[n/2]>ans[i])
		cout << ans[n / 2] << endl;
		else
		cout << ans[n / 2 - 1] << endl;
	}
	system("pause");
	return 0;
}