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
		int k = 0;
		int x = 0;
		while(true)
		{
			if(x == n )
			{
				cout<<k<<endl;
				break;
				return 0;
			}
			if(x < n)
			{
				x += k;
				if(x == n)
				{
					cout<<k<<endl;
					break;
					return 0;
				}
				k++;
			}
			if(x > n)
			{
				x -= 1;
				if(x == n)
				{
					cout<<k<<endl;
					break;
					return 0;
				}
				k++;
			}
		}
	}
	return 0;
}
