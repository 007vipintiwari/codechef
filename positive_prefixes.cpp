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
		for(int i = 0;i<n;i++)
			arr[i] = i+1;
		int count = 1;
		for(int i =0;i<n;i++)
		{
			if(count <= k)
			{
				continue;
				break;
			}
			else
			{
				arr[i] = -1*arr[i];
			}
				
				
			}	
		for(int i = 0;i<n;i++)
			cout<<arr[i]<<" ";
		cout<<endl;		
	}
	return 0;
}
