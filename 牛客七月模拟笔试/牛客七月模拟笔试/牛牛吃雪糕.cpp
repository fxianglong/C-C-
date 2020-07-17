//#include<iostream>
//using namespace std;
//
//int main(){
//	int T;
//	cin >> T;
//	while (T--){
//		int N, A, B, C;
//		cin >> N >> A >> B >> C;
//		N -= (C / 2);
//		int c = C % 2;
//		N -= (B / 3);
//		int b = B % 3;
//		N -= (A / 6);
//		int a = A % 6;
//		if ((b == 1 && c == 1 && a == 1) || (b == 2 && a == 2)){
//			N -= 1;
//		}
//		if (N <= 0)
//		{
//			cout << "Yes" << endl;
//			continue;
//		}
//		else
//		{
//			cout << "No" << endl;
//			continue;
//		}
//	}
//}