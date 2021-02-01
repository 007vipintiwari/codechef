#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		if(n <= 2)
			cout<<1<<endl;
		else
		{
			int lower = 0;
			int upper = 2;
			int count = 1;
			int t = 1;
			while(true)
			{
				if(n >= lower && n <= upper)
				{
					cout<<count<<endl;
					break;
					
				}
				else
				{
					lower = upper + 1;
					upper = t*x + 2;
					count++;
					t++;
				}
			} 	
		}		
		
	}
	
	return 0;
}
