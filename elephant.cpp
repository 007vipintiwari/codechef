#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count =0;
	while(n>5)
	{
		n = n-5;
		count++;
	}
	count++;
	cout<<count<<endl;
	return 0;
}
