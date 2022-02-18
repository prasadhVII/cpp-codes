#include<iostream>
#include<stdio.h>
#include<time.h>
#include<vector>
#include"insertion_sort.cpp"

using namespace std;




int main()
{
	time_t start,stop;
	double tot;
	vector<char>arr{'d','u','r','g','a',' ','p','r','a','s','a','d'};
	start=clock();
	in_sort(arr);
	stop=clock();

	vector<char>::iterator p;
	for(p=arr.begin();p!=arr.end();p++)
	cout<<*p<<" ";
	cout<<endl;

	tot=(double)(stop-start)/CLOCKS_PER_SEC;
	printf("%f \n",tot);

	return 0;
}