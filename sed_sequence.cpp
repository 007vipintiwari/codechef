#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i = 0;i<n;i++) 
		{
			cin>>arr[i];
		}
		long long int sum = 0;
		for(int i = 0;i<n;i++)
		{
			sum += arr[i];
		}
		if(sum%k == 0)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<1<<endl;
		}
		
	}
	
	
	
	
	return 0;
}
