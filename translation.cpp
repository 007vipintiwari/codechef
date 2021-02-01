#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int j = s1.length()-1;
	int i = 0;
	for(;j>=0 &&i<s2.length();j--,i++)
	{
		if(s1[j] != s2[i])
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
