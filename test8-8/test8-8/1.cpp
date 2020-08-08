//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string str;
//	cin >> str;
//	int r = str.size() - 1;
//	int l = 0;
//	int lmin = l;
//	while (l < r){
//		while (str[l] != str[r])
//		{
//			l++;
//		}
//		lmin = l;
//		while (str[l] == str[r]&&l<r){
//			l++; r--;
//		}
//		if (l>r){
//			break;
//		}
//		else{
//			r = str.size() - 1;
//			lmin = 0;
//		}
//	}
//	string pos;
//	if (str.size() == 1)
//		pos = str;
//	else
//	{
//		pos = str.substr(0, lmin);
//		reverse(pos.begin(), pos.end());
//	}
//	str += pos;
//	cout << str << endl;
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main(){
//	int T;
//	cin >> T;
//	while (T--){
//		int n;
//		cin >> n;
//		vector<int> a;
//		vector<int> b;
//		a.resize(n, 0);
//		b.resize(n, 0);
//		for (int i = 0; i < n; i++){
//			cin >> a[i];
//		}
//		for (int j = 1; j < n; j++)
//			cin >> b[j];
//		int sum = a[0];
//		for (int i = 1; i < n; i++){
//			int hours = min(a[i], b[i]-a[i - 1]);
//			sum += hours;
//		}
//		int h = sum / 3600+8;
//		int flag = 0;
//		if (h>12)
//		{
//			h %= 12;
//			flag = 1;
//		}
//		sum = sum % 3600;
//		int m = (sum / 60);
//		sum = sum % 60;
//		int s = sum;
//		string str;
//		string pos;
//		if (flag == 1)
//			pos = "pm";
//		else
//		{
//			pos = "am";
//		}
//		string hours = h >= 10 ? to_string(h) : "0" + to_string(h);
//		string minu = m >= 10 ? to_string(m) : "0" + to_string(m);
//		string sis = s >= 10 ? to_string(s) : "0" + to_string(s);
//		cout << hours << ":" << minu << ":" << sis << " " << pos << endl;
//	}
//	system("pause");
//	return 0;
//}




#include<iostream>
#include<vector>
using namespace std;
class UnionFindSet{
public:
	UnionFindSet(size_t size)
	:_ufs(size, -1){}
	int FindRoot(int index){
		while (_ufs[index] >= 0){
			index = _ufs[index];
		}
		return index;
	}
	bool Union(int x1,int x2){
		int root1 = FindRoot(x1);
		int root2 = FindRoot(x2);
		if (root1 == root2)
			return false;
		_ufs[root1] += _ufs[root2];
		_ufs[root2] = root1;
		return true;
	}
	size_t Count(){
		size_t count = 0;
		for (auto e : _ufs){
			if (e < 0){
				++count;
			}
		}
		return count;
	}
private:
	vector<int> _ufs;
};
int main(){
	int n; int m;
	cin >> n >> m;
	vector<vector<int>> ans(n + 1, vector<int>(n + 1, 0));
	while (m--){
		int a, b;
		cin >> a >> b;
		ans[a][b] = 1;
	}
	UnionFindSet ufs(n+1);
	for (size_t i = 1; i <= n; i++){
		for (size_t j = 1; j <= n; j++){
			if (i == j)
				continue;
			if (ans[i][j] == 1){
				ufs.Union(i, j);
			}
		}
	}
	cout << ufs.Count() << endl;
	return 0;
}