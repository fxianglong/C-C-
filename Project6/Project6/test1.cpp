//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	/**
//	* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//	* func getTriggerTime(increase [][]int, requirements [][]int) []int
//	* @param increase int整型二维数组 属性增加值
//	* @param increaseRowLen int increase数组行数
//	* @param increaseColLen int* increase数组列数
//	* @param requirements int整型二维数组 剧情触发要求
//	* @param requirementsRowLen int requirements数组行数
//	* @param requirementsColLen int* requirements数组列数
//	* @return int整型vector
//	*/
//static vector<int> getTriggerTime(vector<vector<int>> increase, int increaseRowLen, int increaseColLen, 
//									vector<vector<int>>requirements, int requirementsRowLen, int requirementsColLen) {
//		vector<int> ans(increaseColLen, 0);
//		vector<int> res(requirementsRowLen, -1);
//		for (int i = -1; i < increaseRowLen; i++){
//			if (i >= 0)
//			for (int j = 0; j < ans.size(); j++){
//				ans[j] += increase[i][j];
//			}
//			vector<int> a;
//			for (int j = 0; j < requirementsRowLen; j++){
//				for (int k = 0; k < requirementsColLen; k++){
//					if (ans[k] < requirements[j][k])
//						break;
//					if (k == requirementsColLen - 1)
//						a.push_back(j);
//				}
//			}
//			for (auto e : a){
//				if (res[e]==-1)
//				res[e] = i;
//			}
//		}
//		return res;
//	}
//};
//
//int main(){
//	//[[0,4,5],[4,8,8],[8,6,1],[10,10,0]],[[12,11,16],[20,2,6],[9,2,6],[10,18,3],[8,14,9]]
//	vector<vector<int>> a = { { 1, 1, 1 } };
//	vector<vector<int>> b = { { 0, 0, 0 } };
//	vector<int> ans=Solution::getTriggerTime(a, a.size(), a[0].size(), b, b.size(), b[0].size());
//	for (int i = 0; i < ans.size(); i++)
//		cout << ans[i] << " ";
//	system("pause");
//	return 0;
//}



#include<iostream>
#include<string>
#include<set>
using namespace std;
void help(string& str,int index, set<string> res,string& s){
	if (index == str.size() - 1)
		res.insert(s);
	for (int i = 0; i < str.size(); i++){
		s += str[i];
		for (int j = 0; j < str.size(); j++){

		}
	}
}
int main(){
	string str;
	cin >> str;
	set<string> res;
	string s;
	help(str, 0,res,s);
	system("pause");
	return 0;
}