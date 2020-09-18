//#include<iostream>
//#include<vector>
//using namespace std;
//class UnionFindSet{
//	UnionFindSet(int n)
//	:_utf(n,-1){
//	}
//	int FindRoot(int index){
//		while (_utf[index] >= 0){
//			index = _utf[index];
//		}
//		return index;
//	}
//	bool Union(int x1, int x2){
//		int l = FindRoot(x1);
//		int r = FindRoot(x2);
//		if (l == r)
//			return false;
//		_utf[l] += _utf[r];
//		_utf[r] = l;
//		return true;
//	}
//	size_t Count()const{
//		size_t count = 0;
//		for (auto e : _utf){
//			if (e < 0)
//				count++;
//		}
//		return count;
//	}
//private:
//	vector<int> _utf;
//};


#include<iostream>
using namespace std;
int main(){
	int array[4] = { 1, 2, 4, 8 }, *p, *q;
	p = array;
	q = &array[4];
	printf("%d %d", (int)(q - p), (int)q - (int)p);
	system("pause");
	__checkReturn;
}