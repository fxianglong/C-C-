//#include<iostream>
//#include<vector>
//#include<map>
//#include<functional>
//#include<algorithm>
//using namespace std;
//class Sco{
//public:
//	int x=0;
//	int y=0;
//};
//int main(){
//int T;//T组测试用例
//cin >> T;
//while (T--){
//	int n, m;
//	cin >> n >> m;
//	vector<int> std(n, 0);
//	for (int i = 0; i < n; i++)
//		cin >> std[i];
//	vector<Sco> sco(m);
//	for (int i = 0; i < m; i++)
//	{
//		cin >> sco[i].x;
//		sco[i].y = i + 1;
//	}
//	sort(sco.begin(), sco.end(), [](vector<Sco>::iterator a, vector<Sco>::iterator b){return a->x < b->x; });
//	vector<int> res;
//for (int i = 0; i < n; i++){
//	cout << res[i];
//	if (i != n - 1){
//		cout << res[i];
//	}
//	else{
//		cout << endl;
//	}
//}
////}
//system("pause");
//return 0;
//}



#include<vector>
#include<iostream>
using namespace std;
int main(){
	int T;//T组测试用例
	cin >> T;
	while (T--){
		int n, m;
		cin >> n >> m;
		vector<int> std(n, 0);
		for (int i = 0; i < n; i++)
		{
			cin >> std[i];
		}
		vector<int> src(m, 0);
		for (int i = 1; i <= m; i++){
			cin >> src[i];
		}
		vector<int> res;
		for (int i = 0; i < n; i++){
			int flag = 0;
			for (int j = 0; j <= src.size(); j++){
				
			}
			if (flag == 0)
				res.push_back(-1);
		}
		for (int i = 0; i < n; i++){
			if (i != n - 1){
				cout << res[i]<<" ";
			}
			else{
				cout << res[i]<<endl;
			}
		}
	}
	system("pause");
	return 0;
}



//1
//3 6
//33 66 99
//3 6 9 30 60 90