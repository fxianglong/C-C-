//
//
//#include<iostream>
//using namespace std;
//void replaceblack(char string[], int length)
//{
//	if (string == NULL || length <= 0)
//		return;
//	int slength = 0;
//	int blackcount = 0;
//	int i = 0;
//	while (string[i]!='\0')
//	{
//		slength++;
//		if (string[i] == ' ')
//			blackcount++;
//	}
//	int newlength = slength + blackcount * 2;
//	if (newlength > length)
//		return;
//	int indexlength = slength;
//	int indexnewlength = newlength;
//	while (indexlength >= 0 && indexnewlength > indexlength)
//	{
//		if (string[indexlength] == ' ')
//		{
//			string[indexnewlength--] = '0';
//			string[indexnewlength--] = ' ';
//			string[indexnewlength--] = '%';
//		}
//		{string[indexnewlength--] = string[indexlength]; }
//		--indexlength;
//
//	}
//}
//
//struct ListNode
//{
//	int m_nKey;
//	ListNode* m_pHext;
//};
////void PrintfReversingly_Iteratively(ListNode* pHead)
////{
////	std::stack<ListNode*> nodes;
////	ListNode* pNode = pHead;
////	while (pNode != NULL)
////	{
////		nodes.push(pNode);
////		pNode = pNode->m_pHext;
////	}
////	while (!nodes.empty())
////	{
////		pNode = nodes.top();
////		printf("%d\t", pNode->m_nValue);
////		nodes.pop();
////	}
////}
//void PrintfReversingly_Reeratively(ListNode* pHead)
//{
//	if (pHead != NULL)
//	{
//		if (pHead->m_pHext != NULL)
//			PrintfReversingly_Reeratively(pHead->m_pHext);
//		printf("%d\t", pHead->m_nKey);
//	}
//}
//
//struct BinaryTreeNode
//{
//	int m_nValue;
//	BinaryTreeNode* m_pLeft;
//	BinaryTreeNode* m_pRight;
//};
//BinaryTreeNode* ConstructCore(int* startPreorder, int* endPreorder,
//	int* startInorder, int* endInorder)
//{
//	int rootValue = startPreorder[0];
//	BinaryTreeNode* root = new BinaryTreeNode();
//	root->m_nValue = rootValue;
//	root->m_pLeft = root->m_pRight = NULL;
//	if (startPreorder == endPreorder)
//	{
//		if (startInorder == endPreorder&&*startPreorder == *startInorder)
//			return root;
//		else throw std::exception("Invalid input.");
//	}
//	int* rootInorder = startInorder;
//	while (rootInorder <= endInorder&&*rootInorder != rootValue)
//		++rootInorder;
//	if (rootInorder == endInorder&&*rootInorder != rootValue)
//		throw std::exception("Invalid input.");
//	int leftLength = rootInorder - startInorder;
//	int* leftPreorderEnd = startInorder + leftLength;
//	if (leftLength > 0)
//	{
//		root->m_pLeft = ConstructCore(startPreorder + 1, leftPreorderEnd, startInorder, rootInorder - 1);
//	}
//	if (leftLength < endPreorder - startPreorder)
//	{
//		root->m_pRight = ConstructCore(leftPreorderEnd + 1, endPreorder, rootInorder + 1, endInorder);
//	}
//	return root;
//}
//BinaryTreeNode* Construct(int* preorder, int* inorder, int length)
//{
//	if (preorder == NULL || inorder == NULL || length <= 0)
//		return NULL;
//	return ConstructCore(preorder, preorder + length - 1, inorder, inorder + length - 1);
//}
//
////Õ»ºÍ¶ÓÁÐ
//template <typename T>class CQueue
//{
//public:
//	CQueue(void);
//	~CQueue(void);
//	void appendTail(const T& node);
//	T deleteHead();
//private:
//	stack<T> stack1;
//	stack<T> stack2;
//};
//template<typename T>void CQueue::appendTail(const &T element)
//{
//	stack.push(element);
//}
//template<typename T>void CQueue::deleteHead()
//{
//	if (stack2.size() <= 0)
//	{
//		while (stack1.size() > 0)
//		{
//			T& data = stack1.top();
//			stack1.pop();
//			stack2.push(data);
//		}
//	}
//	if (stack2.size() == 0)
//		throw new exception("queue is empty");
//	T head = stack2.top();
//	stack2.pop();
//	return head;
//}