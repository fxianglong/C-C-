//#include <iostream>       // std::cout
//#include <queue>          // std::priority_queue
//
//int main()
//{
//	std::priority_queue<int> mypq;
//	int sum(0);
//
//	for (int i = 1; i <= 10; i++) mypq.push(i);
//
//	while (!mypq.empty())
//	{
//		sum += mypq.top();
//		mypq.pop();
//	}
//
//	std::cout << "total: " << sum << '\n';
//	system("pause");
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	char s[100]; char hash[256] = { 0 };
	while (cin >> s)
	{
		for (int i = 0; s[i]; i++)
		{
			if (hash[s[i]] == 0)
			{
				cout << s[i]; 
				hash[s[i]] = 1;
			}
		}
	}
	return 0;
}