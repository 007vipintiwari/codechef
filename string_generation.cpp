#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a,b,c;
		a = b = c = k;
		int leng = 0;
		string s1;
		while(leng < n)
		{
			if(a != 0)
			{
				s1 += 'a';
				leng++;
				a--;
			}
			else if(b != 0)
			{
				s1 += 'b';
				leng++;
				b--;
			}
			else if(c != 0)
			{
				s1 += 'c';
				leng++;
				c--;
				
			}
			if(a == 0 && b == 0 && c == 0)
			{
				a = b = c = k;
			}
		}
		cout<<s1<<endl;
	}
	
	return 0;
}
