//identify whether a number is palindrome or not and print invalid number for nagative number
#include<iostream>
using namespace std;
void func(int n)
{
	int num=0;
	int f=1;
	int t=n;
	if(n<0)
	 cout<<"invalid number";
	else if(n==0)
	 cout<<"Palindrome";
	else
	{
		while(t>0)
		{
			int r=t%10;
			num=num*10+r;
			t=t/10;
		}
		cout<<n<<' '<<num;
		if(num==n)
		 {
		 cout<<"Palindrome number";
		 f=2;
		 }
		else
		 cout<<"Not a palindrome";
	}
	
}
int main()
{
	int n;
	cin>>n;
	func(n);
	return 0;
}
