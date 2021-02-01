#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll d1,v1,d2,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	ll sum  = 0ll;
	ll count = 0ll;
	ll p1 = d1;
	ll p2 = d2;
	if(d1<d2)
	{
		while(d1 < d2)
		{
			sum += v1;
			count++;
			if(sum >= p)
			{
				cout<<d1 + count-1<<endl;
				return 0;
			}
			d1 += 1;
		}
	}
	if(d1>d2)
	{
		while(d2 < d1)
		{
			sum += v2;
			count++;
			if(sum >= p)
			{
				cout<<d2 + count-1<<endl;
				return 0;
			}
			d2 += 1;
		}	
	}
	if(d1 == d2)
	{
		while(sum < p)
		{
			sum += v1 + v2;
			count++;
			
		}
		
	}
	if(p1 <= p2)
		cout<<p1+count-1<<endl;
	else
		cout<<p2 + count - 1<<endl;
	return  0;	
}
