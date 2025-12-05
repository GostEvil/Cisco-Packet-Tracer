///////////////Colecao.h (vrs. 27/maio/2021)////////////////
#pragma once
#include<set>
using namespace std;

template<class K>
class Colecao : public set<K> {
public:
	bool insert(const K &c);
	K *find(const K &c) const;
	int size() const;
	void erase(const K &);
	//void clear();
	//bool empty() const;
	//iterator begin();
	//iterator end();
};

template<class K>
bool Colecao<K>::insert(const K &c)
{
	pair<typename set<K>::iterator, bool> r = set<K>::insert(c);
	return(r.second);
}

template<class K>
K *Colecao<K>::find(const K &c) const
{
	K *r = 0;
	typename set<K>::iterator i = set<K>::find(c);
	if (i != set<K>::end())
		r = const_cast<K*>(i.operator->());
	return(r);
}

template<class K>
int Colecao<K>::size() const {
	return((int)set<K>::size());
}

template<class K>
void Colecao<K>::erase(const K &c) {
	set<K>::erase(c);
}
