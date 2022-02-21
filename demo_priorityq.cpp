#include<iostream>
#include<queue>

using namespace std;


int main(){

	priority_queue<char>ch;
	for(int i=0,j=12;i<9;i++)
	ch.push(i+97-2*j+i);

	cout<<ch.top()<<endl;

	while(!ch.empty()){
		cout<<ch.top()<<" ";
		ch.pop();
	}
	cout<<endl;
	return 0;
}