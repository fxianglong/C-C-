//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> arr;
//		for (int i = 0; i < n; i++)
//		{
//			int y = 0;
//			cin >> y;
//			arr.push_back(y);
//		}
//		vector<int> arr1(100001, 0);
//		arr1[0] = 0;
//		arr1[2] = 2;
//		arr1[1] = 1;
//		for (int i = 3; i < 100001; i++)
//		{
//			arr1[i] = (arr1[i - 1]) % 10000 + (arr1[i - 2]) % 10000;
//			if (arr1[i] >= 10000)
//				arr1[i] %= 10000;
//		}
//		string ret;
//		for (int i = 0; i < n; i++)
//		{
//			int a = arr1[arr[i]];
//			string b;
//			if (a < 1000)
//			{
//				string as = to_string(a);
//				for (int j = 0; j < 4 - as.size(); j++)
//				{
//					b += "0";
//				}
//				b += as;
//			}
//			else
//				b = to_string(a);
//			ret += b;
//		}
//		cout << ret << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n = 0;
//	while (cin >> n)
//	{
//		int sum = n;
//		while (sum > 10)
//		{
//			n = sum; vector<int> str;
//			while (n)
//			{
//				str.push_back(n % 10);
//				n = n / 10;
//			}
//			sum = 0;
//			for (int i = 0; i < str.size(); i++)
//				sum += str[i];
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//int numberRoot(string num)
//{
//	int cur = 0;
//	for (auto& c : num) cur += c - '0';
//	num = to_string(cur);
//	while (num.size() > 1)
//	{
//		cur = 0;
//		for (auto& c : num) cur += c - '0';
//		num = to_string(cur);
//	}
//	return cur;
//}
//int main(int argc, char** argv)
//{
//	string num;
//	while (cin >> num)
//	{
//		cout << numberRoot(num) << endl;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//bool Neng(double x, double r)
//{
//	return x < (2 * r*3.14);
//}
//int main()
//{
//	double c = 0; double r = 0;
//	while (cin >> c >> r)
//	{
//		if (Neng(c, r))
//			cout << "Yes" << endl;
//		else cout << "No" << endl;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//int main()
//{
//	double a[3];
//	while (cin >> a[0] >> a[1] >> a[3]){
//		sort(a, a + 3);
//		if (a[0] + a[1] > a[3])
//			cout << "Yes" << endl;
//		else cout << "No" << endl;
//	}
//	return 0;
//}

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n = 0;
	while (cin >> n)
	{
		if (n == 0) break;
		else
			cout << pow(5, n) - 4 << " " << pow(4, n) + n - 4 << endl;
	}
	return 0;
}