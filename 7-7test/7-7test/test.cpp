//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<stack>
//using namespace std;
//int main()
//{
//	string s;
//	cin >> s;
//	stack<char> stk;
//	for (size_t i = 0; i<s.size(); i++){
//		switch (s[i]){
//		case '<':if (stk.size() != 0 && stk.top() != ')')
//			stk.pop();
//			break;
//		case ')':while (stk.top() != '(')
//			stk.pop();
//			stk.pop();
//			break;
//		default:
//			stk.push(s[i]);
//		}
//	}
//	string res;
//	for (int i = 0; i<stk.size(); i++){
//		res += stk.top();
//		stk.pop();
//	}
//	reverse(res.begin(), res.end());
//	cout << res << endl;
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N;
//	vector<int> res(N, 0);
//	for (int i = 0; i<N; i++){
//		cin >> res[i];
//	}
//	vector<pair<int, int>> dp(N, make_pair(0, 0));
//	for (int i = 0; i < N; i++){
//		if (i < 2)
//		{
//			dp[i].first = res[i];
//			dp[i].second = 1;
//			continue;
//		}
//		if (dp[i - 1].first>(res[i] + dp[i - 2].first)){
//			dp[i].first = dp[i-1].first;
//			dp[i].second = dp[i-1].second;
//		}
//		else
//		{
//			dp[i].first = dp[i - 2].first+res[i];
//			dp[i].second = dp[i - 2].second+1;
//		}
//	}
//	cout << dp[N - 1].first << "" << dp[N - 1].second << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//class Gem{
//	long x;
//	long h;
//};
//int main()
//{
//	int N;
//	cin >> N;
//	Gem res[N];
//	for (int i = 0; i<N; i++){
//		cin >> res[i].x;
//		cin >> res[i].h;
//	}
//
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	vector<int> ans(N, 0);
//	vector<pair<int,int>> res(M+1,make_pair(0,0));
//	for (int i = 1; i <= M; i++){
//		cin >> res[i].first >> res[i].second;
//		int m = res[i].first;
//		while (m <= res[i].second){
//			ans[m] = i;
//			m++;
//		}
//	}
//	long long sum = 0;
//	for (int i = 0; i < ans.size(); i++){
//		sum += i*ans[i];
//	}
//	cout << (sum % 100000009) << endl;
//	system("pause");
//	return 0;
//}

//
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int main()
//{
//	int M, N;
//	cin >> N >> M;
//	vector<string> ans(N,"");
//	vector<string> res(M, "");
//	vector<int> rev(M, 0);
//	for (int i = 0; i < N; i++){
//		cin >> ans[i];
//	}
//	for (int i = 0; i < M; i++){
//		cin >> res[i];
//	}
//
//}


//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	long long N, M;
//	cin >> N >> M;
//	vector<string> ans;
//	ans.resize(N);
//	vector<pair<long long, long long>> res(M + 1, make_pair(0, 0));
//	for (int i = 1; i <= M; i++){
//		cin >> res[i].first >> res[i].second;
//		int m = res[i].first;
//		while (m <= res[i].second){
//			ans[m] = to_string(i);
//			m++;
//		}
//	}
//	long long sum = 0;
//	for (int i = 0; i < ans.size(); i++){
//		sum += i*atoi(ans[i].c_str());
//	}
//	cout << (sum % 100000009) << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
//	vector<int> ans;
//	int sum = 0; 
//	for (int i = 1; i <= 27; i++)
//	{
//		sum += i * 9;
//	}
//	cout << sum << endl;
//	std::cout << "a multi-line "
//		"string literal "
//		"using concatenation"
//		<< std::endl;
//	std::cout << L"literal " << std::endl;
//	system("pause");
//	return 0;
//}


#include<iostream>
#include<vector>
using namespace std;
int main()
{
	//int M, N;
	//cin >> M >> N;
	//long long sum = 1;
	//for (int i = 0; i < N; i++){
	//	sum *= M;
	//}
	//cout << sum << endl; 


	//int sum = 0;
	//for (int i = 0; i != 10; ++i)
	//	sum += i;
	//std::cout << "Sum from 0 to " << i << " is " << sum << std::endl;
	system("pause");
	return 0;
}