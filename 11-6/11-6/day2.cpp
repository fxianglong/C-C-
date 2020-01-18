#include<iostream>
using namespace std;
#include<vector>
int main()
{
	int n = 0;
	while (cin >> n)
	{
		vector<int> a;
		a.resize(n);
		for (unsigned int i = 0; i<n; i++)
			cin >> a[i];
		int i = 0, count = 0;
		while (i<n)
		{
			if (a[i] <= a[i + 1])
			{
				while (a[i]<a[i + 1])
				{
					i++;
				}
				count++;
			}
			else while (a[i]>a[1 + 1])
			{
				i++;
			}
			count++;
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}