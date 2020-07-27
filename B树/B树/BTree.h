#pragma once
#include<iostream>
using namespace std;

template<class K,int M=3>//M阶
struct BTreeNode
{
	K _keys[M];//为了方便实现插入之后再分裂，实际多给了一个空间
	BTreeNode<K, M>* _subs[M+1];
	BTreeNode<K, M>* _parent;
	size_t _keysize;//记录关键字的数量

	BTreeNode(){
		for (size_t i = 0; i < M; i++){
			_subs[i] = nullptr;
		}
		_parent = nullptr;
		_keysize = 0;
	}
};

template<class K,int M>
class BTree
{
	typedef BTreeNode<K, M> Node;
public:
	pair<Node*, int> Find(const K& key){
		Node* parent = nullptr;
		Node* cur = _root;
		while (cur){
			int i = 0;
			while (i < cur->_keysize){
				if (key < cur->_keys[i]){//当前关键字的左孩子去找
					break;
				}
				else if (key > cur->_keys[i])
				{
					++i;
				}
				else
				{
					return make_pair(cur, i);
				}
			}
			//到最后一个右孩子去找
			parent = cur;
			cur = cur->_subs[i];
		}
		return make_pair(parent, -1);
	}

	void InsertKey(Node* node, const K& key, Node* child=nullptr){
		int end = node->_keysize - 1;
		while (node->_keys[end] > key&&end >= 0){
			node->_keys[end + 1] = node->_keys[end];
			node->_subs[end + 2] = node->_subs[end+1];
			--end;
		}
		node->_keys[end + 1] = key;
		node->_subs[end + 2] = child;
		if (child)
		child->_parent = node;
		node->_keysize++;
	}

	bool Insert(const K& key){
		if (_root == nullptr){
			_root = new Node;
			_root->_keys[0] = key;
			_root->_keysize = 1;
			return true;
		}
		pair<Node*, int> ret = Find(key);
		if (ret.second == -1){
			return false;
		}

		Node* node = ret.first;
		K k = key;
		Node* child = nullptr;
		//下面循环迭代
		while (1){
			InsertKey(node, k, child);
			if (node->_keysize < M)
				return true;
			//如果node->_keysize==M，就说明满了,需要分裂
			else
			{
				int mid = M / 2;
				//将右半区间分裂拷贝新节点,注意除了靠背关键字还需要拷贝孩子
				Node* newnode = new Node;
				int j = 0;
				int i = mid + 1;
				for (; i < M;){
					newnode->_keys[j] = node->_keys[i];
					newnode->_subs[j] = node->_subs[i];
					if (node->_subs[i]){
						node->_subs[i]->_parent = newnode;
					}
					node->_keys[i] = 0;
					node->_subs[i] = nullptr;
					newnode->_keysize++;
					++j
					++i;
				}
				newnode->_subs[j] = node->_subs[i];
				if (node->_subs[i]){
					node->_subs[i]->_parent = newnode;
				}
				node->_keysize -= (newnode->_keysize + 1);
				if (node->_parent == nullptr){
					_root = new Node;
					_root->_keys[0] = node->_keys[mid];
					_root->_subs[0] = node;
					_root->_subs[1] = newnode;
					node->_parent = newnode->_parent = _root;
					_root->_keysize=1;
					node->_keys[mid] = K();
					return true;
				}
				else
				{
					k = node->_keys[mid];
					child = newnode;

					node->_keys[mid] = K();
					node = node->_parent;
				}
			}
		}
		return true;
	}
	void _InOrder(Node* cur){
		if (cur == nullptr)
			return;
		int i = 0;
		while (i < cur->_keysize){
			_InOrder(cur->_subs[i]);
			cout << cur->_keys[i] << " ";
			++i;
		}
		_InOrder(cur->_keys[i + 1]);
	}
	void InOrder(){
		_InOrder(_root);
	}
private:
	Node* _root=nullptr;
};