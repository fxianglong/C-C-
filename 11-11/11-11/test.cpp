//#include<iostream>
//#include<string>
//#include <algorithm>
//using namespace std;
//bool Ishuiwen(string s1)
//{
//	string s2;
//	s2 = s1;
//    reverse(s1.begin(),s1.end());
//	if (s1 == s2)
//		return true;
//	else return false;
//}
//int main()
//{
//	string A, B,s; int count = 0;
//	getline(cin, A); getline(cin, B);
//	int start = 0; int end = A.size() - 1;
//	while (start < end)
//	{
//		s = A;
//		s.insert(start, B);
//		if (Ishuiwen(s))
//			count++;
//		start++;
//	}
//	cout << count << endl;
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include <algorithm>
//using namespace std;
//bool Ishuiwen(string s1)
//{
//	string s2;
//	s2 = s1;
//	reverse(s1.begin(), s1.end());
//	if (s1 == s2)
//		return true;
//	else return false;
//}
//int main()
//{
//	string A, B, s; int count = 0;
//	getline(cin, A); getline(cin, B);
//	int start = 0; int end = A.size() - 1;
//	while (start <= end)
//	{
//		s = A;
//		s.insert(start, B);
//		if (Ishuiwen(s))
//			count++;
//		start++;
//	}
//	cout << count << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n = 0; cin >> n;
//	int array[32] = { 0 };
//	int sum = 0; int max = array[0];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> array[i];
//		sum += array[i];
//		if (sum>max)
//			max = sum;
//		if (sum < 0)
//			sum = 0;
//	}
//	cout << max << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int x = 0, y = 0; int ret = 0;
//	cin >> x >> y;
//	vector<vector<int>> a;
//	a.resize(x);
//	for (auto& e : a)
//	e.resize(y, 1);
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			if ((a[i][j] == 1))
//			{
//				ret++;
//				if ((i + 2) < x)
//					a[i + 2][j] = 0;
//				if ((j + 2) < y)
//					a[i][j + 2] = 0;
//			} 
//
//		}
//	}
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}

#include<iostream>
using namespace std;
#include<string>
int main()
{
	string str;
	cin >> str;
	if (str.empty()) return 0;
	int size = str.size();
	int result = 0;
	for (int i = ((str[0] == '+') || (str[0] == '-') ? 1 : 0); i<size; i++)
	{
		if (str[i]<'0' || str[i]>'9')
			return 0;
		result = result * 10 + str[i] - '0';
	}
	cout << result << endl;
	system("pause");
	return result;
}