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
		int arr[n];
		for(int i = 0;i<n;i++)
		{
			if(i%2 == 1)
			{
				arr[i] = -1*(i+1);
			}
			else
			{
				arr[i] = i+1;
			}
		}
		int positive = ceil(n/2);
		if(k == positive)
		{
			for(int i = 0;i<n;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		if(k > positive)
		{
			int need = k - positive;
			int i = n-1;
			while(need != 0)
			{
				if(arr[i] < 0)
				{
					arr[i] = -1*arr[i];
					need--;
				}	
				i--;
			}
			for(int i = 0;i<n;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		if(k < positive)
		{
			int need = positive - k;
			int i = n-1;
			while(need != 0)
			{
				if(arr[i] > 0)
				{
					arr[i] = -1*arr[i];
					need--;
				}
				i--;
			}
			for(int i = 0;i<n;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
	}
	
	return 0;
}
