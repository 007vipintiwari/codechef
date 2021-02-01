#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		int arr[n];
		for(int i = 0;i<n;i++) cin>>arr[i];
		int at_risk = 0;
		for(int i = 0;i<n;i++)
		{
			if(arr[i] >= 80 || arr[i] <= 9) at_risk++;
		}	
		int count = 0;
		int risk = at_risk;
		while(at_risk > 0)
		{
			at_risk -= d;
			count++;
		}
		int not_risk = n - risk;
		while(not_risk > 0)
		{
			not_risk -= d;
			count++;
		}
		cout<<count<<endl;	
	}
	
	
	
	return 0;
}
