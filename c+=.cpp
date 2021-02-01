#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll a,b,n;
	cin>>a>>b>>n;
	ll count = 0ll;
	while(b <= n  && a <= n)
	{
		if(a <= b)
			a += b;
		else
			b += a;
		count++;		
	}
	cout<<count<<endl;
	return 0;
}
