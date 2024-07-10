#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxi=arr[0];
	for(i=0;i<n;i++)
	{
		sum +=arr[i];
		maxi=max(maxi,sum);
		cout<<"\t"<<maxi<<i<<"th";
	}
	cout<<"\n"<<maxi<<endl;
}
