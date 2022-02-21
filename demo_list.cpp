#include<iostream>
#include<list>

using namespace std;

void displayList(list<int>l)
{
	for(auto it=l.begin();it!=l.end();it++)
	cout<<*it<<" ";
	cout<<endl;
}



int main()
{
	list<int>l1;
	for(int i=0;i<=10;i++){
	  l1.push_back(i);
	  l1.push_front(2*i);
	 
	}
	displayList(l1);
	l1.pop_back();
	l1.pop_front();
	list<int>l2(l1.begin(),l1.end());
	cout<<l1.front()<<endl;
	cout<<l1.back()<<endl;
	l1.pop_back();
	l2.pop_front();
	displayList(l1);
	displayList(l2);
	l2.reverse();
	l1.swap(l2);
	l2.resize(5);
	displayList(l1);
	displayList(l2);
	l1.sort();
	displayList(l1);
	cout<<l1.max_size()<<endl;
	l2.insert(l2.begin(),l1.begin(),l1.end());
	displayList(l2);
	cout<<l2.size()<<endl;
	l1.clear();
	l2.clear();
	cout<<l1.empty()<< " "<<l2.empty()<<endl;
	cout<<l1.size()<<" "<<l2.size()<<endl;


	


	  return 0;
}