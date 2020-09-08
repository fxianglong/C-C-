//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main(){
//	string str;
//	while (cin >> str){
//		if (str.size()<8 || str.size()>120)
//		{
//			cout << "1" << endl;
//			continue;
//		}
//		vector<int> ans(4, 0);
//		bool flag = false;
//		for (int i = 0; i < str.size(); i++){
//			if (str[i] >= '0'&&str[i] <= '9'){
//				ans[0] = 1;
//			}
//			else if (str[i] >= 'A'&&str[i] <= 'Z'){
//				ans[2] = 1;
//			}
//			else if (str[i]>='a'&&str[i]<='z')
//			{
//				ans[3] = 1;
//			}
//			else
//			{
//				ans[1] = 1;
//			}
//			int num = 0;
//			for (auto e : ans){
//				num += e;
//			}
//			if (num == 4){
//				flag = true;
//				break;
//			}
//		}
//		if (flag == true){
//			cout << "0" << endl;
//		}
//		else
//		{
//			cout << "2" << endl;
//		}
//	}
//	return 0;
//}