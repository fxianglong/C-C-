#pragma once

#include "HashTable.h"

namespace bit
{
	template<class K, class Hash = BUCKET_HASH::_Hash<K>>
	class unordered_set
	{
		struct SetKeyOfT
		{
			const K& operator()(const K& k)
			{
				return k;
			}
		};

	public:
		typedef typename BUCKET_HASH::HashTable<K, K, SetKeyOfT, Hash>::iterator iterator;
		void insert(const K& k)
		{
			_ht.Insert(k);
		}

	private:
		BUCKET_HASH::HashTable<K, K, SetKeyOfT, Hash> _ht;
	};

	void test_unordered_set()
	{
		unordered_set<int> s;
		s.insert(1);

		unordered_set<string> strs;
		strs.insert("sort");

		//unordered_set<Date, DateHash> dataSet;
	}
}