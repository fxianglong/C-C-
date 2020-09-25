//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//	static void Revector(vector<string>& s){
//		for (int i = 0; i<s.size() / 2; i++){
//			swap(s[i], s[s.size() - i-1]);
//		}
//		for (int i = 0; i<s.size()-1; i++){
//			for (int j = i + 1; j<s[i].size(); j++){
//				swap(s[i][j], s[j][i]);
//			}
//		}
//	}
//	/**
//	* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//	* 返回一行字符串，表示原文。
//	* @param s1 string字符串vector N*N的01矩阵，表示解密纸，0表示透明，1表示涂黑
//	* @param s2 string字符串vector 字符矩阵，表示密文
//	* @return string字符串
//	*/
//	string rotatePassword(vector<string>& s1, vector<string>& s2) {
//		string res;
//		for (int i = 0; i<4; i++){
//			for (int i = 0; i<s1.size(); i++){
//				for (int j = 0; j<s1[i].size(); j++){
//					if (s1[i][j] == '0')
//						res += s2[i][j];
//				}
//			}
//			Revector(s1);
//		}
//		return res;
//	}
//int main(){
//	vector<string> s1;
//	vector<string> s2;
//	s1.push_back("1101");
//	s1.push_back("1010");
//	s1.push_back("1111");
//	s1.push_back("1110");
//	s2.push_back("ABCD");
//	s2.push_back("EFGH");
//	s2.push_back("IJKL");
//	s2.push_back("MNPQ");
//	cout << rotatePassword(s1, s2) << endl;
//	system("pause");
//	return 0;
//}
