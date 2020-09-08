#include<iostream>
#include<vector>
#include<string>
using namespace std;

//DFS
bool HaveStr(string& s, int num, vector<vector<char>>& ans, int x, int y, vector<vector<int>>& tmp){
	if (num == s.size()-1)//���ݹ鵽���굥�ʵ�ʱ��˵���������ͷ���true
		return true;
	int a[4][4] = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };//�����������ƶ��ж�
	for (int i = 0; i < 4; i++){
		int m = x + a[i][0];
		int n = y + a[i][1];
		if (m < 0 || m >= ans.size() || n < 0 || n >= ans[0].size())
			continue;
		if (tmp[m][n] == 0 && s[num + 1] == ans[m][n])//�����λ�û�û�б��ߣ������뵥�ʶ�Ӧ����ĸ��ͬ�͵ݹ�
		{
			tmp[m][n] = 1;
			return HaveStr(s, num + 1, ans, m, n, tmp);
		}
	}
	return false;//����֮��û����ȷ���򷵻�
}
int main(){
	string str;
	cin >> str;
	vector<vector<char>> ans;//��ά���
	ans = { { 'A', 'B','C','E' }, { 'S', 'F', 'C', 'S' }, { 'A', 'D', 'E', 'E' } };
	for (int i = 0; i < ans.size(); i++){
		for (int j = 0; j < ans[0].size(); j++){//��������ҵ�һ����ͬ����ĸ
			if (str[0] == ans[i][j]){//�ҵ���ĸ
				vector<vector<int>> tmp(ans.size(), vector<int>(ans[0].size(), 0));
				tmp[i][j] = 1;
				bool flag=HaveStr(str, 0, ans, i, j, tmp);//�ж��Ƿ�������
				if (flag == true)//���Ͼ����true�����˳�����
				{
					cout << "true" << endl;
					return 0;
				}
			}
		}
	}
	cout << "false" << endl;//���������������false
	system("pause");
	return 0;
}