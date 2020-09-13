//#include<iostream>
//#include<string>
//#include<unordered_map>
//using namespace std;
//int main(){
//	string str;
//	cin >> str;
//	int max_length = 0;
//	for (int i = 0; i < str.size()-1; i++){
//		unordered_map<char, int> ans;
//		int num=0;
//		for (int j = i + 1; j < str.size(); j++){
//			ans[str[j]]++;
//			if (ans[str[j]] < 2){
//				num++;
//			}
//		}
//		max_length = max_length>num ? max_length : num;
//	}
//	cout << max_length << endl;
//	system("pause");
//	return 0;
//}