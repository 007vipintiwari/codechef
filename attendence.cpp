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
		int z = 120 - n;
		string s;
		int count = 0;
		cin>>s;
		for(int i = 0;i < n;i++)
		{
			if(s[i] == '1')
			{
				count++;
			}
		}
		
		if((z + count) >= 90)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}	
	}
	return 0;
}
