#include<iostream>
#include<string>
using namespace std;

int main(){
	string src;
	string str;
	while (cin >> src >> str){
		int flag = 0;
		for (int i = 0, j = 0; i < src.size() && j < str.size(); i++, j++){
			if (src[i] == str[j]||str[j]=='.')
				continue;
			if (str[j] == '*'){
				if (str[j + 1] == src[i]){
					continue;
				}
			else if(src[i]==str[j-1]){
				while (src[i] == str[j - 1])
				{
					i++;
				}
			}
				else
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 0)
			cout << "true" << endl;
		else
		{
			cout << "false" << endl;
		}
	}
	return 0;
}