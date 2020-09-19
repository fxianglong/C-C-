#include<iostream>
#include<string>
using namespace std;
int main(){
	string s,p;
	cin >> s >> p;
	if (p.size() > s.size())
	{
		cout << "False" << endl;
		return 0;
	}
	int i = 0, j = 0;
	while (i<s.size()&&j<p.size()){
		while (p[j] == '.'){
			i++;
			j++;
		}
		while (p[j] == '*'){
			j++;
			while (i < s.size() && p[j] != s[i])
				i++;
			if (i == s.size() - 1 || p[j] == s[i])
				break;
		}
		while (p[j] == '+'){
			j++; i++;
			while (i < s.size() && p[j] != s[i])
				i++;
			if (i == s.size() - 1 || p[j] == s[i])
				break;
		}
		while (i<s.size()&&p[j] == s[i]){
			i++;
			j++;
		}
		if (p[j] != '.'&&p[j] != '+'&&p[j] != '*')
			break;
	}
	if (i >= s.size() - 1)
		cout << "True";
	else
	{
		cout << "False";
	}
	system("pause");
	return 0;
}