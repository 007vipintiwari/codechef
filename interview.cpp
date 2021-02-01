#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i = 0;i<n;i++) cin>>arr[i];
		int rej = 0;
		int tooslow = 0;
		int bot = 0;
		int maxtime = 0;
		for(int i = 0;i<n;i++)
		{
			if(arr[i] == -1)
			{
				rej++;
			}
			else if(arr[i] != -1)
			{
				if(arr[i] >= k)
				{
					tooslow++;
				}
				else
				{
					maxtime = max(maxtime,arr[i]);
				}
			}
		}
		if(rej >= ceil(n/2))
		{
			cout<<"Rejected"<<endl;
		}
		else if(tooslow != 0)
		{
			cout<<"Too Slow"<<endl;
		}
		else if(rej == 0 && maxtime == 1)
		{
			cout<<"Bot"<<endl;
		}
		else if(rej != 0 && tooslow == 0 )
		{
			cout<<"Accepted"<<endl;
		}
		
	}
	return 0;
}
