#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		string s;
		cin>>s;
		int n = s.length();
		if(n%2 == 1)
		{
			cout<<-1<<endl;
		}
		else
		{
			int count0 = 0;
			int count1 = 0;
			for(int i = 0;i<n;i++)
			{
				if(s[i] == '0')
					count0++;
				if(s[i] == '1')
					count1++;	
			}
			if(count0 == count1)
				cout<<0<<endl;
			else	
			    cout<<min(count0,count1)<<endl;
		}
		
	}
	
	return 0;
}
