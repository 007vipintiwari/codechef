#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i =0;i<n;i++) cin>>arr[i];
		int sum = arr[0];
		int count = 0;
		for(int i =1;i<n;i++)
		{
			sum =(sum-1) + arr[i];
			count++;
		}
		cout<<sum+count<<endl;
	}
	
	
	return 0;
}
