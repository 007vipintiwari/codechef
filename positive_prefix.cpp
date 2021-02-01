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
		int arr[n] = {0};
		bool flag = flag;
		if(n%2 == 0)
			flag = true;
		for(int i = 0;i<n;i++)
		{
			if(flag == true)
			{
				if(i%2 == 0)
				{
					arr[i] = (-1)*(i+ 1);	
				}	
				else
				{
					arr[i] = i + 1;
				}
			
			}	
			else
			{
				if(i%2 == 0)
				{
					arr[i] = i + 1;
				}
				else
				{
					arr[i] = (-1)*(i+1);
				}
			}
		}
		for(int i = 0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;	
		
	}
	
	return 0;
}
