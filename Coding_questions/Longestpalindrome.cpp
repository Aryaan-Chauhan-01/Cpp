//to fnd the largest palindrome of the number
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int func(int a[],int j)
{
	int l=sizeof(a)/sizeof(a[0]);
	int max=0;
	int f=0;
	int r=0;
	for(int i=0;i<l-j;i++)
	{
		f=f*10+a[i+j];
		r=a[i+j]*(int)(pow(10,(double)i))+r;
		cout<<f<<'\t'<<r;
		if(f==r && i!=0)
		 max=i;
	     
	}
	return max;
	
}
int main()
{
	int n;
	int c=0;//counter variable
	cin>>n;
	int t=n;
	int max=0;
	while(t>0)
	{
		t=t/10;
		c++;
	}
	int a[c];
	int i=0;
	while(i<c)
	{
		int r=n%10;
		n=n/10;
		a[i]=r;
		i++;
	}
	cout<<"Array"<<a[0]; 
	for(int j=0;j<c;j++)
	{
		int v=func(a,j);
		if(v>max)
		{
			max=v;
		}
	}
	cout<<max;
}
