#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//void Print(int total, int step){
//	int num = 0;
//	vector<string> ans;
//	int count = 1;
//	while (num < total){
//		string s;
//		for (int i = 0; i < count; i++)
//		{
//			if (num < total){
//				s += '*';
//				num++;
//			}
//			else
//			{
//				s += '?';
//			}
//		}
//		ans.push_back(s);
//		count += step;
//	}
//	int len = ans[ans.size() - 1].size();
//	for (int i = 0; i < ans.size(); i++){
//		int st = len - ans[i].size();
//		for (int j = 0; j < st; j++){
//			ans[i] = ' ' + ans[i];
//		}
//	}
//	for (int i = 0; i < ans.size(); i++){
//		cout << ans[i] << endl;
//	}
//}
//int main(){
//	Print(18, 2);
//	system("pause");
//	return 0;
//}


//void Swap(vector<int>& ans, int a, int b){
//	if (a == b) return;
//	int tmp = ans[a];
//	ans[a] = ans[b];
//	ans[b] = tmp;
//}
//void Sort(vector<int>& ans){
//	int i = 0;
//	for (; i < ans.size(); i++){
//		if (ans[i] == 0){
//			Swap(ans, i, 0);
//		}
//	}
//	i = 1;
//	while (i < ans.size()){
//		if (ans[i] == i){
//			i++;
//		}
//		else
//		{
//			int x = ans[i];
//			Swap(ans, 0, x);
//			Swap(ans, x, i);
//			Swap(ans, 0, i);
//		}
//	}
//}


//struct Interval {
//	int start;
//	int end;
//};

//class Solution {
//public:
//	/**
//	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//	* ��Interval���з��ؽ��������start��ʾ��Ч�ֵĸ�����end��ʾȫ����Ч�ֱ�ŵĺͳ���100000007��������
//	* @param N int���� �ֵ�����
//	* @param M int���� ���ӹ�ϵ������
//	* @param conn Interval��vector ȫ�����ӹ�ϵ
//	* @return Interval��
//	*/
//	void dfs(vector<vector<Interval>>&src, int key, int& sum, bool& flag){
//		if (key == 0)
//		{
//			flag = true;
//			return;
//		}
//		if (src[key].size() == 0)
//			return;
//		for (int i = 0; i < src[key].size(); i++)
//		{
//			sum += src[key][i].start;
//			dfs(src, src[key][i].start, sum, flag)
//		}
//	}
//	Interval trim(int N, int M, vector<Interval>& conn) {
//		vector<Interval> ans;
//		for (int i = 0; i < conn.size();i++)
//		if (conn[i].end == -1){
//			ans.push_back(conn[i]);
//		}
//		vector<vector<Interval>> src(N+1);
//		for (int i = 0; i < conn.size(); i++){
//			if (conn[i].end == -1)
//				continue;
//			src[conn[i].end].push_back(conn[i]);
//		}
//		Interval res;
//		for (int i = 0; i < ans.size(); i++){
//			int x = 0; int y = 0;
//			bool flag = false;
//			dfs(src, ans[i].start,y,flag);
//			if (flag == true){
//				res.start++;
//				res.end += y;
//			}
//		}
//		return res;
//	}
//};