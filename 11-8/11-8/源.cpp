//#include<iostream>
//#include<vector>
//#include<math.h>
//#include<string>
//#include<algorithm>
//using namespace std;
//int getFirstUnFormedNum(vector<int> arr, int len) {
//	if (len == 1) return arr[0] + 1;
//	int min = arr[0], max = arr[0];
//	int i = 0, j = 0;
//	for (i = 1; i<len; i++)
//	{
//		max += arr[i];
//		min = (min<arr[i]) ? min : arr[i];
//	}
//	int res[100001] = { 0 };
//	res[0] = 1;
//	i = 0;
//	while (i<len)
//	{
//		for (j = max; j >= 0; j--)
//		if (res[j])
//			res[j + arr[i]] = 1;
//		i++;
//	}
//	i = min;
//	while (i <= max&&res[i]) i++;
//	return i;
//}
//int main()
//{
//	vector<int> s;
//	int len = 0; cin >> len; 
//	int l = 0; int a[1000];
//	for (int i = 0; i < len; i++)
//	{
//		cin >> a[i];
//		s.push_back(a[i]);
//	}
//	cout << getFirstUnFormedNum(s, len) << endl;
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{
	int n;
	while (scanf("%d", &n), n)
	{
		int count = 0;
		while (n>1)
		{
			n = n / 3 + 1 - (n % 3 ^ 3) / 3;
			count++;
		}
		printf("%d\n", count);
	}
	return 0;
	return 0;
}