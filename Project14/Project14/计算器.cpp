//#include<iostream>
//#include<string>
//#include<stack>
//
//using namespace std;
//
////从符号栈和数字栈中取出符号和数字进行运算  并将结果存入数字栈中
//void Op(stack<string> &NumStack, stack<char> &OpStack) {
//	int num1 = stoi(NumStack.top());
//	
//	NumStack.pop();
//	int num2 = stoi(NumStack.top());
//
//	NumStack.pop();
//	char op = OpStack.top();
//	OpStack.pop();
//	int ans;
//	if (op == '+')
//		ans = num1 + num2;
//	else if (op == '*')
//		ans = num1 * num2;
//	NumStack.push(to_string(ans));
//}
//int main(void) {
//	string s;
//	cin >> s;
//	int n = s.size();
//	stack<string> NumStack;
//	stack<char> OpStack;
//
//	for (int i = 0; i < n;) {
//		string NumStr;
//		if (s[i] >= '0' && s[i] <= '9') {  
//			while (i < n && s[i] >= '0' && s[i] <= '9')
//				NumStr += s[i++];
//			NumStack.push(NumStr);
//		}
//		else if (s[i] == '-' && (NumStack.empty() || OpStack.top() == '(')) {
//			NumStr += s[i++];
//			while (i < n && s[i] >= '0' && s[i] <= '9')
//				NumStr += s[i++];
//			NumStack.push(NumStr);
//		}
//		else if (s[i] == '(')
//			OpStack.push(s[i++]);
//		else if (s[i] == ')') {
//			if (OpStack.top() == '(') {
//				OpStack.pop();
//				i++;
//			}
//			else {
//				Op(NumStack, OpStack);
//			}
//		}
//		else if (s[i] == '+' || s[i] == '-') {
//			if (OpStack.empty() || OpStack.top() == '(') {
//				OpStack.push(s[i++]);
//			}
//			else {
//				Op(NumStack, OpStack);
//			}
//		}
//		else if (s[i] == '*') {
//			if (!OpStack.empty() && OpStack.top() == '*') {
//				Op(NumStack, OpStack);
//			}
//			else
//				OpStack.push(s[i++]);
//		}
//	}
//	Op(NumStack, OpStack);
//	cout << NumStack.top() << endl;
//	system("pause");
//	return 0;
//}