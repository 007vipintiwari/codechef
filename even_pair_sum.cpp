#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		
		ll odda = 0ll;
		ll evena = 0ll;
		ll oddb = 0ll;
		ll evenb = 0ll;
		if(a%2ll == 0ll)
		{
			odda = a/2ll;
			evena = a/2ll;
		}
		else
		{
			evena = floor(a/2ll);
			odda = floor(a/2ll) + 1ll;
		}
		if(b%2ll == 0ll)
		{
			oddb = b/2ll;
			evenb = b/2ll;
		}
		else
		{
			evenb = floor(b/2ll);
			oddb = floor(b/2ll) + 1ll;	
		}
		ll count = evena*evenb + odda*oddb;
		cout<<count<<endl;
	}
	return 0;
}
