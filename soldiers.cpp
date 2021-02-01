#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll k,n,w;
	cin>>k>>n>>w;
	ll i = 1ll;
	ll sum = 0ll;
	while(i <=w)
	{
		sum += i*k;
		i++;
	}	
	if(sum > n)
	{
		cout<<sum - n<<endl;	
	}
	else
	{
		cout<<0<<endl;
	}
	
	
	
	return 0;
}
