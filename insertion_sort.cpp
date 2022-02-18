#include<vector>

template <class T>
void in_sort(std::vector<T>&v)
{
	int i;
	T key;
	for(int j=1;j<v.size();j++)
	{
		 key = v.at(j);
		i=j-1;
		while(i>=0&&v.at(i)>key){
			v[i+1]=v[i];
			i--;
		}
		v[i+1]=key;
	}
}