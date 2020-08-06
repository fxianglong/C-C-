#include"BitSet.h"

struct StringHash1
{
	size_t operator()(const string& key){
		size_t hash = 0;
		for (size_t i = 0; i < key.size(); i++){
			hash = hash * 131 + key[i];
		}
		return hash;
	}
};
struct StringHash2
{
	size_t operator()(const string& key){
		size_t hash = 0;
		for (size_t i = 0; i < key.size(); i++){
			hash = hash * 65535 + key[i];
		}
		return hash;
	}
};
struct StringHash3
{
	size_t operator()(const string& key){
		size_t hash = 0;
		size_t magic = 63689;
		for (size_t i = 0; i < key.size(); i++){
			hash = hash * magic + key[i];
			magic *= 378551;
		}
		return hash;
	}
};


template<class K=string,
class Hash1 = StringHash1,
class Hash2 = StringHash2,
class Hash3=StringHash3>
class BloomFilter{
public:
	BloomFilter(size_t keyNum)
		:_bs(keyNum*10)
		, _bitNum(keyNum)
	{}
	void Set(const K& key){
		size_t hash1 = Hash1()(key);
		size_t hash2 = Hash2()(key);
		size_t hash3 = Hash3()(key);
		_bs.Set(hash1)%_bitNum;
		_bs.Set(hash2)%_bitNum;
		_bs.Set(hash3)%_bitNum;
	}
	void Reset(const K& key){
	}
	bool Test(const K& key){
		size_t hash1 = Hash1()(key) % _bitNum;
		if (_bs.Test(hash1) == false){
			return false;
		}
		size_t hash2 = hash2()(key) % _bitNum;
		if (_bs.Test(hash2) == false){
			return false;
		}
		size_t hash3 = hash3()(key) % _bitNum;
		if (_bs.Test(hash3) == false){
			return false;
		}
		return true;//但是有可能会误判，返回true不一定是准确的
	}
private:
	BitSet _bs;
	size_t _bitNum;
};