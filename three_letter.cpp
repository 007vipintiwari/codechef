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
		string s,p;
		cin>>s>>p;
		int counts0 = 0;
		int counts1 = 0;
		int countp0 = 0;
		int countp1 = 0;
		for(int i = 0;i<n;i++)
		{
			if(s[i] == '0')
			{
				counts0 += 1;
			}
			if(s[i] == '1')
			{
				counts1 += 1;
			}	
			if(p[i] == '0')
			{
				countp0 += 1;
			}
			if(p[i] == '1')
			{
				countp1 += 1;
			}	
		}	
		if(counts0 == countp0 && counts1 == countp1)
		{
			int i = 0;
			int j = 0;
			bool flag = false;
			for(int k = 0;k<s.length();k++)
			{
				if(s[k] != p[k] && s[k] == '1')
				{
					i++;
					s[k] = '0';
				}
				else if(s[k] != p[k] && s[k] == '0')
				{
					if(i <=0)
					{
						flag = true;
						break
					}
					else
					{
						s[k] = '1';
						i--;
					}
				}
			}
			
			/*for(int k = 0;k<s.length();k++)
			{
				if(s[k] != p[k])
				{
					flag = true;
					break;
				}
			}*/
			if(flag == true)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
