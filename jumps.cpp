#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int count = 1;
		int x =  0;
		while(x <n)
		{
			if(x + count == n)
			{
				break;
			}
			if(x + count < n)
			{
				x = x + count;
				count++;
			}
			
			if(x  + count > n)
			{
				x = x - 1;
				count++;
			}
		}
		cout<<count<<endl;
	}
	
	return 0;
}
