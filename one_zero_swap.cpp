#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		int low = -1;
		int high = -1;
		for(int i = 0;i<s1.length();i++)
		{
			if(s1[i] != s2[i] && s1[i] == '1' )
			{
				low = i;
			}	
			if(s1[i] != s2[i] && s1[i] == '0'&& low != -1)
			{
				high = i;
				char x = s1[low];
				s1[low] = s1[high];
				s1[high] = x;
				low = high;
			}
		}
		bool flag = false;
		for(int i = 0;i<s1.length();i++)
		{
			if(s1[i] != s2[i])
			{
				flag = true;
				break;
			}
		}
		if(flag == false)
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
