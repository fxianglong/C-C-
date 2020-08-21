//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int help(int a, int b, int flag){
//	switch (flag)
//	{
//	case 1:
//		return a + b;
//	case 2:
//		return a - b;
//	case 3:
//		return a*b;
//	}
//	return 0;
//}
//void help1(int &a, int &b){
//	for (int i = 2; i < a||a==2; i++){
//		while (a%i == 0 && b%i == 0)
//		{
//			a /= i;
//			b /= i;
//			i = 2;
//		}
//	}
//	return;
//}
//int main(){
//	string s;
//	getline(cin, s);
//	int a[5]; char op;
//	int x = 0; int flag = 0;
//	for (int i = 0; i < s.size(); i++){
//		string str="";
//		if (s[i] != '/' || s[i] != ' '){
//			while (i<s.size()&&s[i] != '/' && s[i] != ' '){
//				str += s[i];
//				i++;
//			}
//			if (str == "+")
//				flag = 1;
//			else if (str == "-")
//				flag = 2;
//			else if (str == "*")
//				flag = 3;
//			a[x++] = atoi(str.c_str());
//		}
//
//	}
//	if (flag == 0)
//		swap(a[3], a[4]);
//	int m;
//	if (flag==1||flag==2)
//		m= help(a[0] * a[4],a[3]*a[1], flag);
//	if (flag == 3 || flag == 0)
//		m = a[0] * a[3];
//	int n = a[1] * a[4];
//	help1(m, n);
//	cout << m << "/" << n << endl;
//	system("pause");
//	return 0;
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
//	int N, M;
//	cin >> M >> N;
//	vector<vector<int>> ans(M, vector<int>(N, 0));
//	for (int i = 0; i < M;i++)
//	for (int j = 0; j < N; j++){
//		cin >> ans[i][j];
//	}
//	for (int i = 0; i < N; i++){
//		int flag = 0;
//		for (int j = 0; j < M; j++){
//			if (ans[j][i] == 1){
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0){
//			cout << "No" << endl;
//			system("pause");
//			return 0;
//		}
//	}
//	
//	system("pause");
//	return 0;
//}




#include<iostream>
using namespace std;
int main(){
	int *a = 0;
	printf("%d\n", a);
	a++;

	printf("%d\n", a);

	a += 8;
	printf("%d", a);
	system("pause");
	return 0;
}