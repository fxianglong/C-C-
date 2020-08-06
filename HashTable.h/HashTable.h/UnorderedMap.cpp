#pragma once

#include "HashTable.h"

namespace bit
{
	template<class K, class V, class Hash = BUCKET_HASH::_Hash<K>>
	class unordered_map
	{
		struct MapKeyOfT
		{
			const K& operator()(const pair<K, V>& kv)
			{
				return kv.first;
			}
		};

	public:
		typedef typename BUCKET_HASH::HashTable<K, pair<K, V>, MapKeyOfT, Hash>::iterator iterator;
		iterator begin(){
			return _ht.begin();
		}
		iterator end(){
			return _ht.end();
		}
		void insert(const pair<K, V>& kv)
		{
			_ht.Insert(kv);
		}

	private:
		BUCKET_HASH::HashTable<K, pair<K, V>, MapKeyOfT, Hash> _ht;
	};

	void test_unordered_map()
	{
		unordered_map<int, int> m;
		m.insert(make_pair(1, 1));

		unordered_map<string, string> dict;
		dict.insert(make_pair("sort", "≈≈–Ú"));
	}
}