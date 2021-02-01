#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int arr[26] = {0};
	int count = 0;
	for(int i = 0;i<s.length();i++)
	{
		if(arr[s[i]-97] == 0)
		{
			count++;
			arr[s[i]-97]++;
		}
	}
	if(count%2 == 1)
	{
		cout<<"IGNORE HIM!"<<endl;
	}
	else
		cout<<"CHAT WITH HER!"<<endl;
	return 0;
}
