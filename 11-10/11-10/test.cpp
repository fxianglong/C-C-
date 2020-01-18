//#include<iostream>
//using namespace std;
//int getnum(int x, int y)
//{
//	int n = 1;
//	while (1)
//	{
//		if (n*x%y == 0)
//		{
//			return (n*x); break;
//	}
//		else n++;
//	}
//}
//int main()
//{
//	int x = 0; int y = 0;
//	cin >> x; cin >> y;
//	if (x>y)
//		cout << getnum(x, y) << endl;
//	else if (x<y)
//		cout << getnum(y, x) << endl;
//	else cout << x << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	string s;
//	getline(cin, s);
//	reverse(s.begin(), s.end());
//	auto start = s.begin();
//	while (start != s.end())
//	{
//		auto last = start;
//		while (last != s.end() && *last != ' ')
//		{
//			last++;
//		}
//		reverse(start, last);
//		if (last != s.end())
//			start = last + 1;
//		else start = last;
//	}
//	cout << s << endl;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s1, s2;
//	cin >> s2;
//	while (cin >> s1)
//		s2 = s1 + " " + s2;
//	cout << s2 << endl;
//	return 0;
//}

//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//#include <string>
//#include <vector>
//using namespace std;
//vector<string> vec;
//int main(){
//	string s;
//	while (cin >> s) vec.push_back(s);
//	for (int i = vec.size() - 1; i >= 0; i--){
//		if (i == 0) cout << vec[i] << endl;
//		else cout << vec[i] << " ";
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int array[4] = { 0 };
//	int x, y, z;
//	for (int i = 0; i<4; i++)
//		cin >> array[i];
//	x = (array[0] + (array[2] - array[0]) / 2);
//	y = (array[2] - array[0]) / 2;
//	z = (array[3] - array[1]) / 2;
//	if ((x - y) == array[0] && (y - z) == array[1] && (x + y) == array[2] && (y + z) == array[3])
//		cout << x << " " << y << " " << z << " " << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<string>
//int main()
//{
//	int M, N;
//	cin >> M; cin >> N;
//	int res = 0;
//	if (M < 0) res = 1;
//	int array[32] = { 0 }; int tmp = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		tmp = M%N;
//		M /= N;
//	}
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//    string s = "";
//    string tables = "0123456789ABCDEF";
//    int M = 0;
//    int N = 0;
//    cin >> M >> N;
//    if (M == 0)
//    {
//        s = "0";
//    }
//    while (M)
//    {
//        if (M < 0)
//        {
//            M = -M;
//            cout << "-";
//        }
//
//        s = tables[M%N] + s;
//        M /= N;
//    }
//        cout << s.c_str() << endl;
//    return 0;
//}

#include<iostream>
using namespace std;
int main()
{
	int M, N;
	string s = " ";
	cin >> M >> N;
	string str = "0123456789ABCDEF";
	if (M == 0)
		s = "0";
	while (M)
	{
		if (M<0)
		{
			M = -M;
			cout << "-";
		}
		s = str[M%N] + s;
		M /= N;
	}
	cout << s.c_str() << endl;
	return 0;
}