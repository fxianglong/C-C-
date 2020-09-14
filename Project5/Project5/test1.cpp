
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//};
//
//
//class Solution {
//public:
//	/**
//	*
//	* @param node TreeNode¿‡
//	* @return int’˚–Õvector<vector<>>
//	*/
//	vector<vector<int> > printNode(TreeNode* node) {
//		vector<vector<int>> res;
//		if (node == nullptr)
//			return res;
//		queue<TreeNode*> q1;
//		
//		q1.push(node);
//		while (!q1.empty()){
//			queue<TreeNode*> q2;
//			vector<int> ans;
//			while (!q1.empty()){
//				ans.push_back(q1.front()->val);
//				if (q1.front()->left != nullptr)
//					q2.push(q1.front()->left);
//				if (q1.front()->right != nullptr)
//					q2.push(q1.front()->right);
//				q1.pop();
//			}
//			res.push_back(ans);
//			q1 = q2;
//		}
//		return res;
//	}
//};

//#include<set>
//int firstMissingPositive(int* nums, int numsLen) {
//	set<int> ans;
//	for (int i = 0; i < numsLen; i++){
//		ans.insert(nums[i]);
//	}
//	auto it = ans.begin();
//	int a = 1;
//	while (*it!=a&&it!=ans.end())
//	{
//		it++;
//	}
//	if (it == ans.end())
//		return a;
//	for (int i = 1; it != ans.end() && a == *it; i++){
//		it++;
//		a++;
//	}
//	return a;
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//vector<vector<int>> a = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };
//void help(vector<vector<char>>& ans, vector<vector<int>> src, int x, int y,int& count){
//	if (x<0 || x >= ans.size() || y<0 || y >= ans[0].size())
//		return;
//	if (ans[x][y] == '0' || src[x][y] == 1)
//	{
//		src[x][y] = 1;
//		return;
//	}
//	else{
//		count++;
//		ans[x][y] = 1;
//		for (int i = 0; i < a.size(); i++){
//			help(ans, src, x + a[i][0], y + a[i][1], count);
//		}
//	}
//}
//int main(){
//	int m, n;
//	cin >> m >> n;
//	vector<vector<char>> ans(m, vector<char>(n, '0'));
//	for (int i = 0; i < m; i++){
//		for (int j = 0; j < n; j++){
//			cin >> ans[i][j];
//		}
//	}
//	int count = 0;
//	vector<vector<int>> src(m, vector<int>(n, 0));
//	for (int i = 0; i < ans.size(); i++){
//		for (int j = 0; j < ans[0].size(); j++)
//		if (ans[i][j]!=1)
//			help(ans, src, i, j, count);
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}


