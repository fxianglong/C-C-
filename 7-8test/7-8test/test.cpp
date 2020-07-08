//class Solution {
//public:
//	vector<int> divingBoard(int shorter, int longer, int k = 0) {
//		if (k == 0) {
//			return vector <int>();
//		}
//
//		if (shorter == longer) {
//			return vector <int>(1, shorter * k);
//		}
//
//		vector <int> lengths(k + 1);
//		for (int i = 0; i <= k; ++i) {
//			lengths[i] = shorter * (k - i) + longer * i;
//		}
//
//		return lengths;
//	}
//};


//#include<iostream>
//using namespace std;
//int main(){
//	int T;
//	cin >> T;
//	while (T--){
//		int x, a, b;
//		cin >> x >> a >> b;
//		int min = 0;
//		int i = 0, j = 0;
//		if (b / a <= 3){
//			j = x / 1500;
//			if ((x - j * 1500) % 500 == 0){
//				i = (x - j * 1500) / 500;
//			}
//			else{
//				i = (x - j * 1500) / 500 + 1;
//			}
//			cout << (i*a + j*b) << endl;
//		}
//		else{
//			if (x % 500 == 0){
//				i = x / 500;
//			}
//			else{
//				i = x / 500 + 1;
//			}
//			cout << (i*a) << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}

#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
string longestDupSubstring(string S) {
	vector<vector<int>> c_index(26, vector<int>());    //ÿ����ĸ��Ӧ�±갴˳�����hash
	for (int i = 0; i < S.length(); i++) c_index[S[i] - 'a'].push_back(i);
	string res = "";
	int cur_len = 0;    //��ǰ�ظ�������
	for (auto &m_index : c_index) {
		if (m_index.size() < 2) continue;    //û�л�ֻ����һ�ε��ַ���������
		map<string, int> str_index;         //ǰ׺�ַ������±��hash map
		for (int i = 0; i < m_index.size() - 1; i++) {
			if (S.length() - cur_len <= m_index[i]) break;   //�Ѿ�����Դ�ַ����������ֱ���Ƴ�
			string tmp = S.substr(m_index[i], cur_len + 1);   //��ǰ׺�ַ������±����hash map
			if (str_index.find(tmp) != str_index.end()) {    //����ͬ��ǰ׺�ַ���
				int p1 = str_index[tmp] + cur_len, p2 = m_index[i] + cur_len;   //����ͳ���µ��ظ��ַ�����
				while (p2 < S.length() && S[p1] == S[p2]) p1++, p2++;
				p2 -= m_index[i];       //�õ�����
				res = S.substr(m_index[i], p2);
				cur_len = p2;
				str_index.clear();      //ǰ׺�ַ���hash map����
				for (auto k : m_index){
					if (k == m_index[i]) break;  //���µ���ǰ�±�ֹͣ
					string tmp2 = S.substr(k, cur_len + 1);
					str_index[tmp2] = k;
				}
				tmp = S.substr(m_index[i], cur_len + 1);
			}
			str_index[tmp] = m_index[i];
		}
	}
	return res;
}

int maxRepOpt1(string text) {
	int max = 1;
	vector<vector<int>> ans(26, vector<int>());
	for (int i = 0; i<text.size(); i++){
		ans[text[i] - 'a'].push_back(i);
	}
	for (auto &e : ans){
		if (e.size() < 2) continue;
		int m = 1;
		int lm = 0;
		for (int i = 1; i < e.size()-1; i++){
			if (e[i] - 1 == e[i - 1]){
				m++;
			}
			else
			{
				lm = lm>m ? lm : m;
				m = 2;
			}
		}
		if (m<e.size())m++;
		max = max>m ? max : m;
	}
	return max;
}
int main()
{
	string s;
	cin >> s;
	cout << longestDupSubstring(s) << endl;
	system("pause");
	return 0;

}