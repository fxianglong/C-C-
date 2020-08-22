//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main(){
//	int n;
//	cin >> n;
//	int count = 0;
//	while (n--){
//		string str;
//		cin >> str;
//		int flag = 0;
//		if (str.size() > 10||str.size()==0)
//			continue;
//		for (int i = 0; i < str.size(); i++){
//			if ((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i] <= 'Z'))
//				continue;
//			else
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//			count++;
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}




//#include<iostream>
//#include<vector>
//using namespace std;
//
//void Swap1(vector<int> &ans){
//	int temp = ans[0];
//	for (int i = 0; i < ans.size()-1; i++){
//		ans[i] = ans[i + 1];
//	}
//	ans[ans.size() - 1] = temp;
//}
//void Swap2(vector<int> &ans){
//	for (int i = 0; i < ans.size(); i += 2){
//		swap(ans[i], ans[i + 1]);
//	}
//}
//
//int main(){
//	int N, M;
//	cin >> N >> M;
//	vector<int> ans(N, 0);
//	vector<int> src(M, 0);
//	for (int i = 0; i < M; i++){
//		cin >> src[i];
//	}
//	for (int i = 0; i < N; i++){
//		ans[i] = i+1;
//	}
//	for (int i = 0; i < src.size();i++){
//		if (i< src.size()-1 &&src[i] == 2 && src[i + 1] == 2){
//			i++;
//		}
//		if (src[i] == 1){
//			Swap1(ans);
//		}
//		if (src[i] == 2){
//			Swap2(ans);
//		}
//	}
//	for (int i = 0; i < ans.size(); i++){
//		cout << ans[i];
//		if (i != ans.size() - 1){
//			cout << " ";
//		}
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}



//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void Swap1(vector<long long> &ans){
//	long long temp = ans[0];
//	for (long long i = 0; i < ans.size() - 1; i++){
//		ans[i] = ans[i + 1];
//	}
//	ans[ans.size() - 1] = temp;
//}
//void Swap2(vector<long long> &ans){
//	for (long long i = 0; i < ans.size(); i += 2){
//		swap(ans[i], ans[i + 1]);
//	}
//}
//
//int main(){
//	long long N; int M;
//	cin >> N >> M;
//	vector<long long> ans(N, 0);
//	for (long long i = 0; i < N; i++){
//		ans[i] = i + 1;
//	}
//	while (M--){
//		int x;
//		cin >> x;
//		if (x == 1){
//			Swap1(ans);
//		}
//		if (x == 2){
//			Swap2(ans);
//		}
//	}
//	for (long long i = 0; i < ans.size(); i++){
//		cout << ans[i];
//		if (i != ans.size() - 1){
//			cout << " ";
//		}
//	}
//	cout << endl;
//	return 0;
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//
//void Swap1(vector<int>& a, vector<int> &b){
//	int temp = a[0];
//	a[0] = b[b.size() - 1];
//	b[b.size() - 1] = temp;
//}
//void Swap2(vector<int> &a, vector<int> &b){
//	a.swap(b);
//}
//int main(){
//	int N, M;
//	cin >> N >> M;
//	vector<int> ans1,ans2;
//	for (int i = 0; i < N; i+=2){
//		ans1.push_back(i + 1);
//		ans2.push_back(i + 2);
//	}
//	while (M--){
//		int x;
//		cin >> x;
//		if (x == 1){
//			Swap1(ans1, ans2);
//		}
//		if (x == 2){
//			Swap2(ans1, ans2);
//		}
//	}
//	for (int i = 0; i < ans1.size(); i++){
//		cout << ans1[i] << " " << ans2[i];
//		if (i != ans1.size() - 1)
//			cout << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}


