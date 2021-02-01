#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n];
		for(int i = 0;i<n;i++) cin>>arr[i];
		ll q;
		cin>>q;
		while(q--)
		{
			ll q1,q2,q3;
			cin>>q1>>q2>>q3;
			
			ll i = q1-1;
			ll j = q2-1;
			while(i <= j)
			{
				arr[i]= arr[i] + q3;
				i++;		
			}
		}
		ll sum = 0ll;
		for(int i = 0;i<n;i++)
		{
			sum += arr[i];
		}
		cout<<sum<<endl;	
	}
	return 0;
}
