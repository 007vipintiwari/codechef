#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0;i<n;i++) cin>>arr[i];
		int sum = 0;
		int maxsum = INT_MIN;
		for(int i = 0;i<n;i++)
		{
			sum += arr[i];
			maxsum = max(maxsum,sum);
			if(sum < 0) sum = 0;
		}
		cout<<maxsum<<endl;
	}
	
}
int main()
{
	solve();
	
	return 0;
}
