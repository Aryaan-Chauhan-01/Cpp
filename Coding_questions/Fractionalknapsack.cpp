#include <bit/stdc++.h>
using namespace std;
struct Item
{
	int profit,weight;
	Item(int profit,int weight)
	{
		this->profit=profit;
		this->weight=weight;
	}
};
static fractionalKnapsack(int W,struct Item arr[],int N)
{
	sort(arr,arr+N,cmp);
	double finalvalue=0.0;
	
	for(int i=0;i<N;i++)
	{
		if(arr[i]<=W)
		{
			W-=arr[i].weight;
			finalvalue+=arr[i].profit;
		}
		else
		{
			finalvalue+=arr[i].profit*((double)W/(double)arr[i].weight);
			break;
		}
	}
	return finalvalue;
}
int main()
{
	int W=50;
	Item arr[]={{60,10},{100,20},{120,30}};
	int N=sizeof(arr)/sizeof(arr[0]);
	cout<<fractionalKnapsack(W,arr,N);
	return 0;
}
