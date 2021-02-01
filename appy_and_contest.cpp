#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,a,b,k;
		cin>>n>>a>>b>>k;
		ll count   = 0ll;
		long long appy = 0ll;
		long long chef = 0ll;
		for(int i = 1;i<n+1;i++)
		{
			if(i%a == 0 && i%b != 0)
				appy++;
			if(i%a != 0 && i%b == 0)
				chef++;	
		}
		count = appy + chef;
		if(count >= k)
			cout<<"Win"<<endl;
		else
			cout<<"Lose"<<endl;	
	}
	return 0;
}
