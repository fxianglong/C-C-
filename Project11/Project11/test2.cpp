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
//	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//	* ����һ���ַ�������ʾԭ�ġ�
//	* @param s1 string�ַ���vector N*N��01���󣬱�ʾ����ֽ��0��ʾ͸����1��ʾͿ��
//	* @param s2 string�ַ���vector �ַ����󣬱�ʾ����
//	* @return string�ַ���
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
