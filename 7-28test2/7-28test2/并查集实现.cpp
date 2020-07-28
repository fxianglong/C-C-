#include<iostream>
#include<vector>
using namespace std;

class UnionFindSet{
public:
	UnionFindSet(size_t size)
	:_a(size,-1){
	}
	int FindRoot(int x){
		while (_a[x] >= 0){
			x = _a[x];
		}
		return x;
	}
	bool Union(const int x1, int x2){
		int root1 = FindRoot(x1);
		int root2 = FindRoot(x2);
		if (root1 == root2)
			return false;
		_a[root1] += _a[root2];
		_a[root2] = root1;
		return true;
	}
	size_t Count(){
		int count = 0;
		for (auto e : _a){
			if (e < 0)
				count++;
		}
		return count;
	}
private:
	vector<int> _a;
};