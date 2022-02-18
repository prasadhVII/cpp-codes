#include<algorithm>
#include<vector>

template <class T>
void reverse_temp(std::vector<T>&v)
{
	for(int i=0;i<v.size()/2;i++)
	{/*
		T temp = v.at(i);
		v[i]=v[v.size()-1-i];
		v[v.size()-1-i]=temp;*/
		std::swap(v[i],v[v.size()-1-i]);
	}
}