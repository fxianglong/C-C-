//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//void help(vector<vector<int>>&src, int i, int j, int& flag){
//
//}
//int main(){
//	int N;
//	cin >> N;
//	vector<vector<int>> ans(N, vector<int>(N, 0));
//	for (int i = 0; i<N; i++){
//		for (int j = 0; j<N; j++){
//			cin >> ans[i][j];
//		}
//	}
//	vector<vector<int>> src(N);
//	for (int i = 0; i<N; i++){
//		for (int j = 0; j < N; j++){
//			if (ans[i][j]==1)
//			src[i].push_back(j);
//		}
//	}
//	int flag = 0;
//	for (int i = 0; i < src.size(); i++){
//		for (int j = 0; j < src[i].size(); j++){
//
//		}
//	}
//	if (flag == 1)
//		cout << "Loop" << endl;
//	else
//		cout << "No Loop" << endl;
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//void help(vector<vector<int>>& ans){
//	for (int i = 0; i < ans.size(); i++){
//		for (int j = 0; j < ans[i].size(); i++){
//
//		}
//	}
//}
//int main(){
//	int N;
//	cin >> N;
//	vector<vector<int>> ans(N, vector<int>(N, 0));
//	for (int i = 0; i<N; i++){
//		for (int j = 0; j<N; j++){
//			cin >> ans[i][j];
//		}
//	}
//	help(ans, i, j);
//	return 0;
//}


#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;
const int N = 100;
int G[N][N];
int path[N], visited[N], n, cycle;
int DFS(int u, int start)
{
	int i;
	visited[u] = -1;
	path[u] = start;
	for (i = 0; i < n; i++)
	{
		if (G[u][i] && i != start)
		{
			if (visited[i]<0)
			{
				cycle = u;
				return 0;
			}
			if (!DFS(i, u))
			{
				return 0;
			}
		}
	}
	visited[u] = 1;
	return 1;
}

void DisPath(int u)
{
	if (u<0)
	{
		return;
	}
	DisPath(path[u]);
	cout << " " << u;
}

int main()
{
	int i, j;
	cout << "请输入图中的顶点个数：" << endl;
	cin >> n;
	memset(G, 0, sizeof(G));
	cout << "请输入一个" << n << "*" << n << "矩阵（1表示存在弧，0表示不存在弧）：" << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> G[i][j];
		}
	}
	cycle = -1;
	for (i = 0; i < n; i++)
	{
		if (!visited[i] && !DFS(i, -1))
		{
			break;
		}
	}
	if (cycle<0)
	{
		cout << "不存在环!" << endl;
	}
	else
	{
		cout << "存在环!" << endl;
		DisPath(cycle);
		cout << endl;
	}
	system("pause");
	return 0;
}