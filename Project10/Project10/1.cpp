#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	list<int> ans;
	list<int> ans2;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		ans.push_back(x);
	}
	for (int i = 0; i < m; i++)
	{
		int x; cin >> x;
		ans2.push_back(x);
	}
	auto it1 = ans.begin();
	auto it2 = ans2.begin();
	vector<int> res;
	while (it1 != ans.end() && it2 != ans2.end()){
		if (*it1 == *it2){
			res.push_back(*it1);
			it1++;
			it2++;
		}
		else if (*it1 > *it2){
			it1++;
		}
		else{
			it2++;
		}
	}
	for (auto e : res){
		cout << e << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}