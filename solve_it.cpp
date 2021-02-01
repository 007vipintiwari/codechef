#include<bits/stdc++.h>
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
		for(int i =0;i<n;i++) cin>>arr[i];
		int min_value = INT_MAX;
		int max_value = INT_MIN;
		for(int i =0;i<n;i++)
		{
			if(min_value > arr[i])
				min_value = arr[i];
		}
		for(int i = 0;i<n;i++)
		{
			if(max_value < arr[i])
				max_value = arr[i];
		}
		min_value = min_value - k;
		max_value = max_value + k;
		int absvalue = abs(max_value - min_value);
		cout<<absvalue<<endl;
	}
	
	return 0;
}
