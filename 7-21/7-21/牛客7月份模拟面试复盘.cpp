//#include<stdio.h>
//#include<string.h>
//
//int main(void)
//{
//	int n;
//	char y[10] = "ntse";
//	char *x = y;
//	n = strlen(x);
//	*x = x[n];
//	x++;
//	printf("x=%s\n", x);
//	printf("y=%s\n", y);
//	return 0;
//}
//¶ÀÁ¢µÄÅ£Å£
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x, f, d, p;
//	cin >> x >> f >> d >> p;
//	if (x*f > d){
//		cout << d / f << endl;
//	}
//	else
//	{
//		cout << (d + f*p) / (x + p)<<endl;
//	}
//	return 0;
//}


//Å£Å£³ÔÑ©¸â

//#include<iostream>
//using namespace std;
//int main(){
//	int T;
//	cin >> T;
//	while (T--){
//		int n, a, b, c;
//		cin >> n >> a >> b >> c;
//		int res = 0;
//		res += c / 2;
//		if (c % 2){
//			if (a > 0 && b > 0){
//				res++;
//				a--;
//				b--;
//				c = 0;
//			}
//			else if(a >= 3){
//				res++;
//				a -= 3;
//			}
//		}
//		res += (b / 3);
//		b %= 3;
//		res += (a / 6);
//		a = a % 6;
//		if (2*b + a >= 6){
//			res++;
//		}
//		if (res >= n){
//			cout << "Yes" << endl;
//		}
//		else
//		{
//			cout << "No" << endl;
//		}
//	}
//	return 0;
//}
