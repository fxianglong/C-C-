//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main(){
//	int N, K;
//	cin >> N >> K;
//	vector<string> ans(N);
//	vector<int> num(N);
//	map<string, int> res;
//	for (int i = 0; i < N; i++){
//		cin >> ans[i];
//	}
//	for (int i = 0; i < N; i++){
//		res[ans[i]]++;
//	}
//	
//	sort(ans.begin(), ans.end());
//	int len = 0;
//	for (auto e : res){
//		if (len < K){
//			cout << e.first << " " << e.second << endl;
//			len++;
//		}
//	}
//	int num = res.size;
//	system("pause");
//	return 0;
//}
//
//
//class tmp
//{
//public:
//	int x;
//	int y;
//};
//tmp a;


#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
using namespace std;
struct Item{
	string str;
	int cnt;
	bool operator<(const Item& another){
		if (cnt != another.cnt)
			return cnt>another.cnt;
		else
		{
			return str < another.str;
		}
	}
};
struct cmp
{
	bool operator()(const Item& a, const Item& b){
		if (a.cnt != b.cnt)
			return a.cnt>b.cnt;
		else
		{
			return a.str > b.str;
		}
	}
};

int main(){
	int n, k;
	string buf;
	vector<string> strings;
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> buf;
		strings.push_back(buf);
	}

	map<string, int> hist;
	for (auto str : strings){
		if (hist.count(str)){
			hist[str]++;
		}
		else
		{
			hist[str] = 1;
		}
	}
	vector<Item> items;

	for (auto p : hist){
		items.push_back({ p.first, p.second });
	}
	int m = items.size();
	sort(items.begin(), items.end());

	for (int i = 0; i < k; i++){
		cout << items[i].str << " " << items[i].cnt << endl;
	}

	sort(items.begin(), items.end(), cmp());

	for (int i = 0; i < k; i++){
		cout << items[m - 1 - i].str << " " << items[m - 1 - i].cnt << endl;
	}

	system("pause");
	return 0;
}