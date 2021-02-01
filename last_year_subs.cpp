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
		string s;
		cin>>s;
		string s1 = "2020";
		int low = 0;
		bool flag = false;
		if(n < 3)
		{
			flag = false;
		}
		else
		{
			if((s[n-1] == '0' && s[n-2] == '2' && s[0]=='2' && s[n-3] == '0') || (s[n-1] == '0' && s[n-2] == '2' && s[0]=='2' && s[1] == '0'))
			{
				flag = true;
			}
		}

		if(flag)
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
