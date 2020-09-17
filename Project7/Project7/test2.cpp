//#include<iostream>
//#include<vector>
//#include<map>
//using namespace std;
//int main(){
//	int n, m, q;
//	cin >> n >> m >> q;
//	vector<int> ans(n + 1, -1);
//	for (int i = 0; i<m; i++){
//		int x, y;
//		cin >> x >> y;
//		while (ans[x]>0)
//			x = ans[x];
//		while (ans[y] > 0)
//			y = ans[y];
//		if (ans[x] < 0 || ans[y] < 0)
//		{
//			if (x>y) swap(x, y);
//			ans[x] += ans[y];
//			ans[y] = x;
//			break;
//		}
//	}
//	for (int i = 0; i<q; i++){
//		int x, y;
//		cin >> x >> y;
//		map<int, int> map1;
//		if (x>y) swap(x, y);
//		while (ans[x] > 0)
//			map1[ans[x]]=1;
//		int flag = 0;
//		while (ans[y] > 0){
//			if (map1[ans[y]] == 1)
//			{
//				flag == 1;
//			}
//			y = ans[y];
//		}
//		if (flag == 1)
//			cout << "YES" << endl;
//		else
//		{
//			cout << "NO" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}


#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n, m, q;
	cin >> n >> m >> q;
	vector<int> ans(n + 1, -1);
	for (int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		ans[x] += ans[y];
		ans[y] = x;
	}
	for (int i = 1; i <= n + 1; i++){
		int x = i;
		while (ans[x]>0){
			x = ans[x];
		}
		ans[i] = x;
	}
	for (int i = 0; i < q; i++){

	}
}