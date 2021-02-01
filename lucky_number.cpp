#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll a;
	cin>>a;
	bool flag = false;
	while(a)
	{
		if(a%10 != 4ll && a%10 != 7ll)
		{
			flag = true;
			break;	
		}
		a = a/10ll;	
	}
	if(flag == true)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;	
	
	return 0;
}
