//minimum number of swaps required to sort an array better to use insertion sort
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a;
	vector<int> s;
	vector<int>:: iterator ir;
	
	int c=0;//counter variable
	for(int i=5;i>0;i--)
	{
	
	 a.push_back(i);
	 s.push_back(i);
	 
}
  a.sort();
	
	for(ir=a.begin();ir!=a.end();ir++)
	 cout<<*ir<<'\t';
	return 0;
}
