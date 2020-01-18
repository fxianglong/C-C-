//#include<iostream>
//using namespace std;
//int main()
//{
//	int N, F1 = 0, F2 = 1, F3; int count = 0, count2 = 0;
//	cin >> N;
//	while (N > F2)
//	{
//		F3 = F1;
//		F1 = F2;
//		F2 = F3 + F2;
//		if (F2 > N)
//			break;
//		if (F2 == N)
//		{
//			cout << 0 << endl;
//			system("pause");
//			return 0;
//		}
//	}
//	for (; N>F1; F1++)
//		count++;
//	for (; N<F2; F2--)
//		count2++;
//	cout << ((count>count2) ? count2 : count) << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string>
//#include<stack>
//#include<vector>
//bool chkParenthesis(string A, int n) {
//	stack<int> s;
//	/*for (int i = 0; i < n; i++)
//	{
//		if (A[i] == '(')
//			s.push(A[i]);
//		if (A[i] == ')')
//			s.pop();
//	}*/
//	vector<char> ret=A.begin();
//
//	if (s.empty())
//		return true;
//	else return false;
//}
//int main()
//{
//	cout << chkParenthesis("()()(hbgf(jhg)JNHB", 18) << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x, y, i;
//	cin >> x >> y;
//	for (i = 1; !(((i*x) % y) == 0); i++);
//	cout << (i*x) << endl;
//	system("pause");
//	return 0;
//}

#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool ISzidian(vector<string> &ch)
{
	for (unsigned int i = 0; i<ch.size() - 1; i++)
	{
		if (ch[i]>ch[i + 1])
			return false;
	}
	return true;
}
bool Islength(vector<string> &ch)
{
	for (unsigned int i = 0; i<ch.size() - 1; i++)
	{
		if (ch[i].size()>ch[i + 1].size())
			return false;
	}
	return true;
}
void Istrue(vector<string> &ch)
{
	int count = 0;
	bool i = ISzidian(ch);
	bool j = Islength(ch);
	if (i&&j)
		cout << "both" << endl;
	else if (i&&!j)
		cout << "lexicographically" << endl;
	else if (!i&&j)
		cout << "lengths" << endl;
	else cout << "none" << endl;
}
int main()
{
	string s; int n = 0;
	cin >> n;
	vector<string> ch(n);
	for (int i = 0; i<n; i++)
		getline(cin, ch[i]);
	Istrue(ch);
	return 0;
}