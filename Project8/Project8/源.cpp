#include<iostream>
using namespace std;

struct Node { 
	int nData; 
	Node *pNext; 
	Node *pPri; 
};
class ListNode{
	ListNode(int x = 0)
	:_head->nDate(x)
	,_head->pNext(nullptr)
	,_head->pPri(nullptr){}
private:
	Node *_head;
};
Node* Sort(Node* ListNode){
	Node* _head = ListNode;
	Node* p = ListNode;
	while (p != _head){
		Node* p1 = p;
		while (p->nData > p->pNext->nData){
			Node* pre = p->pPri;
			Node* ppre = pre->pPri;
			ppre->pNext = p;
			p->pPri = ppre;
			pre->pNext = p->pNext;
			pre->pPri = p;
			pre->pNext->pPri = p;
			ppre->pNext = pre;
			p1 = p;
			p = p->pPri;
		}
		p = p1->pNext;
		if (p == _head->pPri)
			return _head;
	}
}