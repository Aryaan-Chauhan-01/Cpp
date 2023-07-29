//program to reverse an array or string
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a;
	vector<int>:: reverse_iterator it;
	for(int i=1;i<=5;i++)
	 a.push_back(i*10);
	for(it=a.rbegin();it!=a.rend();it++)
	 cout<<*it<<'\t';
	return 0;
}
