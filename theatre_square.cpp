#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long int n,m,a;
	cin>>n>>m>>a;
	long long int z = 0;
	long long int t = 0;
	if(a == 1)
	{
		cout<<n*m<<endl;
		return 0 ;
	}
	while(n > t*a)
	{
		t++;
	}
	long long int c = 0;
	while(m > c*a)
	{
		c++;
	}
	z = c*t;
	cout<<z<<endl;
	return 0;
}
