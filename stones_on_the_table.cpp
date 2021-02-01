#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char s[n+1];
	for(int i = 0;i<n;i++) cin>>s[i];
	int count_r = 0;
	for(int i = 1;i<n;i++)
		{
			if(s[i] == s[i-1])
				count_r++;
		}
		cout<<count_r<<endl;
	return 0;
}
