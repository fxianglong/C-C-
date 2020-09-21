//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//bool IsReverseStr(string str){
//	string s = str;
//	reverse(s.begin(), s.end());
//	return s == str;
//}
//int main(){
//	string str;
//	cin >> str;
//	string maxlenstr = "";
//	for (int i = 0; i < str.size(); i++){
//		string s = "";
//		for (int j = str.size()-1; j>=i; j--){
//			s = str.substr(i, j - i+1);
//			if (IsReverseStr(s))
//				break;
//		}
//		if (maxlenstr.size() < s.size())
//			maxlenstr = s;
//	}
//	cout << maxlenstr << endl;
//	system("pause");
//	return 0;
//}