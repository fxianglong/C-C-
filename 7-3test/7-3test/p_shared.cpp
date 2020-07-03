#include<iostream>
#include<mutex>
using namespace std;

template<class T>
class p_shared{
public:
	p_shared(T* ptr=nullptr)
	:pRefcount(new int(1)),_mutex(new mutex),_ptr(ptr)
	{}
	~p_shared() { Release(); }
	p_shared(const p_shared<T>& sp)
		:_mutex(sp._mutex),
		_ptr(sp._ptr)
		, pRefcount(sp.Refcount)
	{
		AddRefCount();
	}
	
	p_shared<T>& operator=(const p_shared<T>& sp){
		if (_ptr != sp._ptr)
		{
			// 释放管理的旧资源
			Release();
			// 共享管理新对象的资源，并增加引用计数
			_ptr = sp._ptr;
			_pRefCount = sp._pRefCount;
			_pMutex = sp._pMutex;
			AddRefCount();
		}
		return *this;
	}
	
	T& operator*() { return *_ptr; }
	T* operator->() { return _ptr; }
	int UseCount() { return *pRefcount; }
	T* Get() { return _ptr; }
	
	void AddRefCount(){
		_mutex->lock();
		++(*pRefcount);
		_mutex->unlock();
	}
private:
	void Release(){
		bool deleteflag = false;
		_mutex->lock();
		if (--(*pRefcount) == 0){
			delete _ptr;
			delete pRefcount;
			deleteflag = true;
		}
		_mutex->unlock();
		if (deleteflag == true)
			return _mutex;
	}
private:
	int* pRefcount;
	mutex* _mutex;
	T* _ptr;
};


/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	TreeNode* sortedArrayToBST(vector<int>& nums) {
		return helper(0, nums.size() - 1, nums);
	}
	TreeNode* helper(int l, int r, vector<int>& nums)
	{
		if (l>r) return nullptr;
		int mid = (r - l) / 2 + l;
		TreeNode* root = new TreeNode(nums[mid]);
		root->left = helper(l, mid - 1, nums);
		root->right = helper(mid + 1, r, nums);
		return root;
	}
};