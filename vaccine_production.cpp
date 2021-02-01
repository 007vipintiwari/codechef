#include<bits/stdc++.h>
using namespace std;
int main()
{
	int d1,v1,d2,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	int sum = 0;
	int count = 0;
	if(d1<d2)
	{
		sum += (d2-d1)*v1;
		count += d2-d1;
		if(sum >= p)
		{
			cout<<count-1<<endl;
			return 0;
		}		
		else
		{
			while(sum < p)
			{
				sum = sum + (v1 + v2);
				count++;
			}
			count += d1-1;
		}	
	}
	if(d1>d2)
	{
		sum += (d1-d2)*v2;
		count += d1-d2;
		if(sum >= p)
		{
				cout<<count-1<<endl;
				return 0;
		}
		
		else
		{
			while(sum < p)
			{
				sum = sum + (v1 + v2);
				count++;
			}
			count += d2 -1;		
		}	
			
	}
	if(d1 == d2)
	{
		while(sum < p)
		{
			sum += v1 + v2;
			count++;
		}
		count += d1-1;
	}
	cout<<count<<endl;
	return 0;
}
