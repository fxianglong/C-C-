#include<vector>
#include<iostream>
using namespace std;
class BitSet{
	BitSet(size_t bitNum){
		_bitNum = bitNum;
		_bits.resize((bitNum>>5) + 1, 0);
	}
	void Set(size_t x){
		size_t index = x >> 5;
		size_t pos = x % 32;
		_bits[index] |= 1 << pos;
	}
	void Reset(size_t x){
		size_t index = x >> 5;
		size_t pos = x % 32;
		_bits[index] &= ~(1 << pos);
	}
	bool Test(size_t x){

	}
private:
	vector<int> _bits;
	size_t _bitNum;
};