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
		int odd = 0;
		int even = 0;
		for(int i = 0;i<n;i++) cin>>arr[i];
		for(int i = 0;i<n;i++)
		{
			if(arr[i]&1) odd++;
			else even++;
		}
		cout<<min(odd,even)<<endl;
	}
	return 0;
}
