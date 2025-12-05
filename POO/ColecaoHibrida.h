///////////////ColecaoHibrida.h (vrs. 27/maio/2021)////////////////
#pragma once
#include<set>
using namespace std;


template<class T>
class less_pointers
{	
public:
	bool operator()(const T &left, const T &right) const
	{
		return (*left < *right);
	}
};

template<class K>
class ColecaoHibrida: public set<K, less_pointers<K>>
{
public:
	bool insert(const K &c);
	K find(const K &c) const;
	int size() const;
	void erase(const K &);
	//void clear();
	//bool empty() const;
	//iterator begin();
	//iterator end();
};

template<class K>
bool ColecaoHibrida<K>::insert(const K &c)
{
	pair<typename set<K, less_pointers<K>>::iterator, bool> r=set<K, less_pointers<K>>::insert(c);
	return(r.second);
}

template<class K>
K ColecaoHibrida<K>::find(const K &c) const
{	
	K r=0;
	typename set<K, less_pointers<K>>::iterator i=set<K, less_pointers<K>>::find(c);
	if(i!=set<K, less_pointers<K>>::end())
		r=*i;		
	return(r);
}

template<class K>
int ColecaoHibrida<K>::size() const{	
	return((int)set<K, less_pointers<K>>::size());
}

template<class K>
void ColecaoHibrida<K>::erase(const K &c ) {	
	set<K, less_pointers<K>>::erase(c);
}
