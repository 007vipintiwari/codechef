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
		for(int i = 0;i<n;i++) cin>>arr[i];
		int odd = 0;
		for(int i = 0;i<n;i++) {
			if(arr[i]&1)
				odd++;
		}
		if(odd&1)
		{
			cout<<2<<endl;
		}
		else
		{
			cout<<1<<endl;
		}
	}
	
	
	
	return 0;
}
