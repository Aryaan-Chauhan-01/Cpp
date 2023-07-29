#include <iostream>
using namespace std;
int func(int n,int s)
{
if(n==0)
 return s;

else
{
for(int i=2;i<=n;i++)
{
if(n%i==0)
{
 int n1=n-i;
 return func(n1,s+1);
}
}
}
}
int main()
{
int n;//number of inputs
int s;//number of subtration;
cin>>n;
s=func(n,0);
cout<<s;
return 0;
}
