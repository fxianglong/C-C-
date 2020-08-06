#pragma once
#include <vector>
#include<string>
#include<iostream>
using namespace std;

namespace CLOSE_HASH
{
	enum State
	{
		EXITS,
		EMPTY,
		DELETE,
	};

	template<class T>
	struct HashData
	{
		T _data;
		State _state; // 状态
	};

	template<class K, class V>
	class HashTable
	{
		typedef HashData<pair<K, V>> HashData;
	public:
		//pair<HashData*, bool> Insert(const pair<K, V>& kv)
		//{
		//	// 考虑容量的问题
		//	if (_dataNum == _tables.size())
		//	{
		//		size_t newSize = _tables.size() == 0 ? 10 : _tables.size() * 2;
		//		vector<HashData> newtables;
		//		newtables.resize(newSize);

		//		// 将旧表的数据重新映射到新表
		//		for (size_t i = 0; i < _tables.size(); ++i)
		//		{
		//			if (_tables[i]._state == EXITS)
		//			{
		//				size_t index = _tables[i]._data.first % newtables.size();
		//				while (newtables[index]._state == EXITS)
		//				{
		//					++index;
		//					if (index == _tables.size())
		//					{
		//						index = 0;
		//					}
		//				}

		//				newtables[index]._data = _tables[i]._data;
		//				newtables[index]._state = EXITS;
		//			}
		//		}

		//		_tables.swap(newtables);
		//	}

		//	size_t index = kv.first % _tables.size();
		//	// 线性探测
		//	while (_tables[index]._state == EXITS)
		//	{
		//		++index;
		//		if (index == _tables.size())
		//		{
		//			index = 0;
		//		}
		//	}

		//	_tables[index]._data = kv;
		//	_tables[index]._state = EXITS;
		//	++_dataNum;

		//	return make_pair(&_tables[index], true);
		//}

		//pair<HashData*, bool> Insert(const pair<K, V>& kv)
		//{
		//	// 考虑容量的问题
		//	if (_dataNum == _tables.size())
		//	{
		//		size_t newSize = _tables.size() == 0 ? 10 : _tables.size() * 2;
		//		HashTable<K, V> newht;
		//		newht._tables.resize(newSize);
		//		// 将旧表的数据重新计算位置，映射到新表
		//		for (size_t i = 0; i < _tables.size(); ++i)
		//		{
		//			if (_tables[i]._state == EXITS)
		//			{
		//				newht.Insert(_tables[i]._data);
		//			}
		//		}

		//		_tables.swap(newht._tables);
		//	}

		//	size_t index = kv.first % _tables.size();
		//	// 线性探测
		//	while (_tables[index]._state == EXITS)
		//	{
		//		if (_tables[index]._data.first == kv.first)
		//		{
		//			return make_pair(&_tables[index], false);
		//		}

		//		++index;
		//		if (index == _tables.size())
		//		{
		//			index = 0;
		//		}
		//	}

		//	_tables[index]._data = kv;
		//	_tables[index]._state = EXITS;
		//	++_dataNum;

		//	return make_pair(&_tables[index], true);
		//}

		//HashData* Find(const K& key)
		//{
		//	size_t index = key % _tables.size();
		//	while (_tables[index]._state != EMPTY)
		//	{
		//		if (_tables[index]._state == EXITS
		//			&& _tables[index]._data.first == key)
		//		{
		//			return &_tables[index];
		//		}
		//		else
		//		{
		//			++index;
		//			if (index == _tables.size())
		//			{
		//				index = 0;
		//			}
		//		}
		//	}

		//	return nullptr;
		//}

		pair<HashData*, bool> Insert(const pair<K, V>& kv)
		{
			// 假设要求负载因子控制在0.7
			if (_tables.size() == 0 || _dataNum * 10 / _tables.size() == 7)
			{
				size_t newSize = _tables.size() == 0 ? 10 : _tables.size() * 2;
				HashTable<K, V> newht;
				newht._tables.resize(newSize);
				// 将旧表的数据重新计算位置，映射到新表
				for (size_t i = 0; i < _tables.size(); ++i)
				{
					if (_tables[i]._state == EXITS)
					{
						newht.Insert(_tables[i]._data);
					}
				}

				_tables.swap(newht._tables);
			}

			size_t start = kv.first % _tables.size();
			size_t index = start;
			size_t i = 1;
			// 二次探测 ->线性探测的优化
			while (_tables[index]._state == EXITS)
			{
				if (_tables[index]._data.first == kv.first)
				{
					return make_pair(&_tables[index], false);
				}

				index = start + i*i;
				index %= _tables.size();
				++i;
			}

			_tables[index]._data = kv;
			_tables[index]._state = EXITS;
			++_dataNum;

			return make_pair(&_tables[index], true);
		}

		HashData* Find(const K& key)
		{
			size_t start = kv.first % _tables.size();
			size_t index = start;
			size_t i = 1;
			while (_tables[index]._state != EMPTY)
			{
				if (_tables[index]._state == EXITS
					&& _tables[index]._data.first == key)
				{
					return &_tables[index];
				}
				else
				{
					index = start + i*i;
					index %= _tables.size();
					++i;
				}
			}

			return nullptr;
		}

		void Erase(const K& key)
		{
			HashData* ret = Find(key);
			if (ret)
			{
				ret->_state = DELETE;
			}
		}

		V& operator[](const K& key)
		{
			pair<HashData*, bool> ret = Insert(make_pair(key, V()));
			return ret.first->_data.second;
		}
	private:
		/*	HashData* _tables;
		size_t _size;
		size_t _capacity;*/

		vector<HashData> _tables;
		size_t           _dataNum = 0;  // 有效的数据个数
	};


	void Test()
	{
		HashTable<int, int> ht;
		ht.Insert(make_pair(1, 1));
		ht.Insert(make_pair(3, 1));
		ht.Insert(make_pair(5, 1));
		ht.Insert(make_pair(7, 1));
		ht.Insert(make_pair(9, 1));
		ht.Insert(make_pair(11, 1));
		ht.Insert(make_pair(13, 1));
		ht.Insert(make_pair(15, 1));
		ht.Insert(make_pair(17, 1));
		ht.Insert(make_pair(19, 1));
		ht.Insert(make_pair(21, 1));
		ht.Insert(make_pair(23, 1));
		ht.Insert(make_pair(25, 1));

		ht[27]; //插入
		ht[27] = 27; // 修改
		ht[29] = 29; // 插入+修改

		HashTable<string, int> dict;
		//dict.Insert(make_pair("string", 1));
	}
}

namespace BUCKET_HASH
{
	template<class T>
	struct HashNode
	{
		HashNode<T>* _next;
		T _data;

		HashNode(const T& data)
			:_data(data)
			, _next(nullptr)
		{}
	};

	template<class K>
	struct _Hash
	{
		const K& operator()(const K& key)
		{
			return key;
		}
	};

	template<>
	struct _Hash<string>
	{
		size_t operator()(const string& key)
		{
			//return key[0];
			size_t hash = 0;
			for (size_t i = 0; i < key.size(); ++i)
			{
				hash = hash * 131 + key[i];
			}

			return hash;
		}
	};

	// bacd bcad
	// abc aad  字母加起来相等
	// 期望效果：尽可能多个字符串的字母不一样，映射转换出的整形值就不一样？
	struct _HashString
	{
		size_t operator()(const string& key)
		{
			//return key[0];
			size_t hash = 0;
			for (size_t i = 0; i < key.size(); ++i)
			{
				hash = hash * 131 + key[i];
			}

			return hash;
		}
	};

	// 前置声明
	template<class K, class T, class KeyOfT, class Hash>
	class HashTable;

	// 迭代器
	template<class K, class T, class KeyOfT, class Hash>
	struct HashTableIterator
	{
		typedef HashNode<T> Node;
		Node* _node;
		HashTable<K, T, KeyOfT, Hash>* _ht;
		typedef HashTableIterator<K, T, KeyOfT, Hash> Self;
		HashTableIterator(Node* node, HashTable<K, T, KeyOfT, Hash>* ht)
			:_node(node)
			, _ht(ht)
		{}


		T& operator*(){
			return _node->_data;
		}
		T* operator->(){
			return &_node->_data;
		}
		Self operator++(){
			if (_node->_next){
				_node = _node->_next;
			}
			else
			{
				KeyOfT kot;
				size_t index = _ht->HashFunc(kot(_node->_data), _ht->_tables.size());
				for (index < _ht->_tables.size(); ++index){
					Node* bucket = _ht->_tables[index];
					if (bucket){
						_node= bucket;
						return *this;
					}
				}
				_node = nullptr;
			}
			return *this;
		}
		bool operator!=(const Self&s){
			return _node != s._node;
		}
	};

	template<class K, class T, class KeyOfT, class Hash>
	class HashTable
	{
		typedef HashNode<T> Node;
		//友元

		template<class K,class T,class KeyofT,class Hash>
		friend struct class HashTableIterator;
	public:
		typedef HashTableIterator<K, T, KeyOfT, Hash> iterator;
		iterator begin()
		{
			for (size_t i = 0; i < _tables.size(); ++i)
			{
				Node* bucket = _tables[i];
				if (bucket)
				{
					return iterator(bucket, this);
				}
			}

			return end();
		}

		iterator end()
		{
			return iterator(nullptr, this);
		}

		pair<Node*, bool> Insert(const T& data)
		{
			KeyOfT kot;

			// 负载因子控制到1 -> 平均下来每个桶挂1-2个数据
			if (_dataNum == _tables.size())
			{
				size_t newsize = _tables.size() == 0 ? 10 : _tables.size() * 2;
				vector<Node*> newtables;
				newtables.resize(newsize, nullptr);

				// 旧表的数据节点取下来，重新算在新表中的位置
				for (size_t i = 0; i < _tables.size(); ++i)
				{
					Node* cur = _tables[i];
					while (cur)
					{
						Node* next = cur->_next;

						// 头插到新表
						//size_t index = cur->_data.first % newtables.size();
						size_t index = HashFunc(kot(cur->_data), newtables.size());
						cur->_next = newtables[index];
						newtables[index] = cur;

						cur = next;
					}
					_tables[i] = nullptr;
				}

				_tables.swap(newtables);
			}

			size_t index = HashFunc(kot(data), _tables.size());
			// 查找key是否存在，存在则不插入。（multi版本则不作冗余检查，直接进行下面的插入）
			Node* cur = _tables[index];
			while (cur)
			{
				if (kot(cur->_data) == kot(data))
				{
					return make_pair(cur, false);
				}

				cur = cur->_next;
			}

			// 头插
			Node* newnode = new Node(data);
			newnode->_next = _tables[index];
			_tables[index] = newnode;
			++_dataNum;

			return make_pair(newnode, true);
		}

		// O(链式桶的长度)
		Node* Find(const K& key)
		{
			//size_t index = key % _tables.size();
			size_t index = HashFunc(key, _tables.size());

			Node* cur = _tables[index];
			while (cur)
			{
				if (cur->_data.first == key)
				{
					return cur;
				}
				else
				{
					cur = cur->_next;
				}
			}

			return nullptr;
		}

		bool Erase(const K& key)
		{
			//size_t index = key % _tables.size();
			size_t index = HashFunc(key, _tables.size());
			Node* prev = nullptr;
			Node* cur = _tables[index];
			while (cur)
			{
				if (cur->_data.first == key)
				{
					//if (prev == nullptr)
					if (cur == _tables[index])
						_tables[index] = cur->_next;
					else
						prev->_next = cur->_next;

					delete cur;
					//cur = nullptr;

					_dataNum--;
					return true;
				}
				else
				{
					prev = cur;
					cur = cur->_next;
				}
			}

			return false;
		}

		// 将key进行取模计算映射位置
		size_t HashFunc(const K& key, size_t size)
		{
			Hash hash; // 哈希仿函数将key转成整形
			return hash(key) % size;
		}

	private:
		vector<Node*> _tables;
		size_t       _dataNum = 0;
	};

	//void Test()
	//{
	//	HashTable<int, int> ht;
	//	ht.Insert(make_pair(1, 1));
	//	ht.Insert(make_pair(3, 1));
	//	ht.Insert(make_pair(5, 1));
	//	ht.Insert(make_pair(7, 1));
	//	ht.Insert(make_pair(9, 1));
	//	ht.Insert(make_pair(11, 1));
	//	ht.Insert(make_pair(13, 1));
	//	ht.Insert(make_pair(15, 1));
	//	ht.Insert(make_pair(17, 1));
	//	ht.Insert(make_pair(19, 1));
	//	ht.Insert(make_pair(21, 1));
	//	ht.Insert(make_pair(23, 1));
	//	ht.Insert(make_pair(25, 1));

	//	ht.Erase(25);
	//	ht.Erase(5);

	//	//HashTable<string, string, _HashString> dict;
	//	HashTable<string, string> dict;
	//	dict.Insert(make_pair("sort", "排序"));
	//	dict.Insert(make_pair("string", "字符串"));
	//	dict.Insert(make_pair("left", "左边"));

	///*	_HashString hash;
	//	cout << hash("abc") << endl;
	//	cout << hash("aad") << endl;
	//	cout << hash("abcd") << endl;
	//	cout << hash("bcad") << endl;*/
	//}
}