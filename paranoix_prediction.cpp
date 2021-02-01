#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	bool flag = false;
	for(int i = n+1;i<m;i++)
	{
		for(int j = 2;j < i;j++)
		{
			if(i%j == 0)
			{
				flag = true;
				break;
			}
		}
		if(flag == true)
		{
			break;
		}
	}
	if(flag == false)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}
	return 0;
}
