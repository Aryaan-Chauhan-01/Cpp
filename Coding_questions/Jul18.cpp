
#include <iostream>
#include <vector>
using namespace std;
int fun()
{
 vector<int> a;//the array
 int num,k;//num=the number of elements in array, k=number of consecutive array
 cin>>num>>k;
 int sum=0;//sum to obtain maximum sum
 for(int i=0;i<k;i++)
 {
 int im;
 cin>>im;
 a.push_back(im);
 }
 for(int i=0;i<num-1;i++)
 {
   for(int j=i+1;j<num;j++)
   {
     if(((i+1)%k)==((j+1)%k))
     {
       int t=a[i];
       a[i]=a[j];
       a[j]=t;
     }
   }
 }
 for(int i=0;i<num-k;i++)
 {
  int s1=0;
  for(int j=i;j<i+k;j++)
  {
   s1+=a[j];
  }
  if(s1>sum)
   sum=s1;
 }
 return sum;
}
 
 
 
int main()
{
 int n;//n=number of test cases
 cin>>n;
 vector<int> r;//storing results
 vector<int>:: iterator it;
 for(int i;i<n;i++)
{
	
 int res=fun();
 r.push_back(res);
}
 for(it=r.begin();it!=r.end();it++)
  cout<<*it<<endl;
 return 0;
}
