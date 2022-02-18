#include<iostream>
#include<vector>
#include<stdio.h>
#include<time.h>
#include<algorithm>


using namespace std;

int main()
{
	time_t start,stop;
	double tot;
	
	start = clock();
	vector<int>a{34,5,4,34,56,23,78,6,4,1,2};
	cout<<a.size()<<endl;
	for(int i=0;i<a.size();i++){
		cout<<a.at(i)<<" ";
	}
	cout<<endl;
	vector<int>::iterator ptr;
	vector<int>::iterator q;
	ptr = a.begin();
	q = a.end();
	q--;
	//cout<<*q<<endl;
	for(;ptr<q;ptr++,q--){
		swap(*ptr,*q);
	}
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }


	stop = clock();

	tot = (double)(stop-start)/CLOCKS_PER_SEC;
	printf("\n%f\n",tot);
	return 0;
}
