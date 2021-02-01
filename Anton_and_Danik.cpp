#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"enter the data";
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a,d;
	a = d = 0;
	for(int i =0;i<n;i++)
	{
		if(s[i] == 'A')
			a++;
		if(s[i] == 'D')
			d++;		
	}
	if(a > d)
		cout<<"Anton"<<endl;
	if(a<d)
		cout<<"Danik"<<endl;
	if(a == d)
		cout<<"Friendship"<<endl;		
	return 0;
}
