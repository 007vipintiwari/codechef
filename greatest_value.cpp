#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int d = 0;
	if(b > c)
	{
		d = b;
	}
	else 
	{
		d = c;
	}
	if (a > d)
	{
		cout<<"greatest value:"<<a<<endl;
	}
	else
	{
		cout<<"greatest value:"<<d<<endl;
	}
	
	
	
	return 0;
}
