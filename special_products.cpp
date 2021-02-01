#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long key;
		cin>>key;
		long long arr[n] = {0ll};
		long long product[n] = {1ll};
		for(int i = 0;i<n;i++) cin>>arr[i];
		product[0] = arr[0];
		for(int i = 1;i<n;i++)
		{
			product[i] = product[i-1]*arr[i];
		}
		int j = 0;
		for(int i =0;i<n;i++)
		{
			if(key >= product[i])
			{
				j = i;
			}
			else
			{
				break;
			}
		}
		int z = ((j+1)*(j+2))/2;
		cout<<z<<endl;
	}
	return 0;
}
