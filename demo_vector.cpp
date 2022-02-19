#include<iostream>
#include<vector>


using namespace std;

int main()
{
	vector<char>ch(10,'i');
	//cout<<ch.at(3)<<endl;
	for(int i=0;i<ch.size();i++){
	    ch[i]=i+65;
		//cout<<ch.at(i)<<" ";
	}
	vector<char>::reverse_iterator it,ptr;
	for(it=ch.rbegin();it!=ch.rend();it++){
		cout<<(*it)<< " ";
	}
	ptr = ch.rend();
	ptr--;
	cout<<endl;
	for(;ptr!=ch.rbegin()-1;ptr--)
	cout<<*ptr<< " ";
	cout<<endl;
	
	return 0;
}