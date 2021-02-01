#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	char temp = 'v';
	for(int i=1;i<=k;i++)
	{
		if(s[i-1] == 'B' && s[i] == 'G')
		{
			temp = s[i];
			s[i-1] = s[i];
			s[i-1] = temp;
		}
	}
	cout<<s<<endl;
	return 0;
}
