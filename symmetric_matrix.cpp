#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[2*n][2];
		for(int i =0;i<(2*n);i++)
		{
			cin>>arr[i][0]>>arr[i][1];
		}
		int count = 0;
		for(int i = 0;i<(2*n -1);i+= 2)
		{
			if(arr[i][1] == arr[i+1][0])
			{
				count++;
			}
		}
		if((count != 0) && (m%2 == 0))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}
