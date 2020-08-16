//#include<iostream>
//using namespace std;
//#include<vector>
//
//int CalulateMethodCount(int num_money) {
	//if (num_money == 0)
	//	return 1;
	//vector<long long> ans(num_money+1,0);
	//ans[0] = 0;
	//ans[1] = 1;
	//for (int i = 2; i <= num_money; i++){
	//	ans[i] = 2 * ans[i - 1];
	//}
	//return ans[num_money];
//}
//
//
//if (num_money == 0)
//return 0;
//if (num_money == 1)
//return 1;
//if (num_money == 2)
//return 2;
//return 1 + CalulateMethodCount(num_money - 1) + CalulateMethodCount(num_money - 2);
//
//int main(){
//	cout << CalulateMethodCount(0) << endl;
//	cout<<CalulateMethodCount(1)<<endl;
//	cout << CalulateMethodCount(2) << endl;
//	cout << CalulateMethodCount(3) << endl;
//	cout << CalulateMethodCount(4) << endl;
//	cout << CalulateMethodCount(100) << endl;
//	system("pause");
//	return 0;
//}


//
//#include<iostream>
//#include<string>
//#include<stack>
//#include<vector>
//using namespace std;
//vector<string> v1;
//int main(){
//	string s;
//	getline(cin, s);
//	stack<string> stk;
//	int start = 0;
//	for (int i = 0; i <= s.size(); i++){
//		if (s[i] == ' '|| s[i]=='\t' || i == s.size()){
//			string ans = s.substr(start, i - start);
//			if (ans != "undo"&&ans!="redo")
//				v1.push_back(ans);
//			if (ans == "undo"){
//				stk.push(v1[v1.size() - 1]);
//				v1.pop_back();
//			}
//			if (ans == "redo"){
//				v1.push_back(stk.top());
//				stk.pop();
//			}
//			start = i + 1;
//		}
//	}
//	string res="";
//	for (int i = 0; i < v1.size();i++){
//		if (v1[i] != ""){
//			res += v1[i];
//			if (i != v1.size() - 1)
//				res += ' ';
//		}
//	}
//	cout << res << endl;
//	system("pause");
//	return 0;
//}


#include<iostream>
using namespace std;
class CSingleton
{
private:
	CSingleton()
	{
	}
	static CSingleton *p;
public:
	static CSingleton* getInstance()
	{
		return p;
	}
};
CSingleton* CSingleton::p = new CSingleton();