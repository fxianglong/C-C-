#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
void help(vector<int>& ans, set<vector<int>>& res, vector<int>& mid){
	for (int i = 0; i < ans.size() - 2; i++){
		for (int j = i+1; j < ans.size() - 1; j++){
			for (int k = j+1; k < ans.size(); k++){
				if (ans[i] + ans[j] + ans[k] == 0)
				{
					mid.push_back(ans[i]);
					mid.push_back(ans[j]);
					mid.push_back(ans[k]);
					sort(mid.begin(), mid.end());
					res.insert(mid);
					mid.clear();
				}
			}
		}
	}
}
int main(){
	int n;
	vector<int> ans;
	int flag = -1;
	while (cin >> n){
		ans.push_back(n);
		if (n == 0)
			flag = 1;
	}
	set<vector<int>> res;
	vector<int> mid;
	sort(ans.begin(), ans.end());
	help(ans, res, mid);
	vector<vector<int>> src;
	for (auto e : res){
		src.push_back(e);
	}
	for (int i = 0; src.size()!=0&&i < src.size()-1; i++){
		for (int j = i + 1; j < src.size(); j++){
			if (src[i][0]>src[j][0]){
				swap(src[i], src[j]);
			}
			if (src[i][0] == src[j][0]){
				if (src[i][1]>src[j][1]){
					swap(src[i], src[j]);
				}
				if (src[i][1] == src[j][1]){
					if (src[i][2]>src[j][2]){
						swap(src[i], src[j]);
					}
				}
			}
		}
	}
	for (auto e : src){
		for (int i = 0; i < e.size(); i++){
			cout << e[i];
			if (i != e.size() - 1)
				cout << " ";
			else{
				cout << endl;
			}
		}
	}
	system("pause");
	return 0;
}