#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0;i<n;i++) cin>>arr[i];
		int q;
		cin>>q;
		while(q--)
		{
			int q1,q2;
			cin>>q1>>q2;
			int sum = 0;
			int i = q1-1;
			int j = q2-1;
			while(i <= j)
			{
				sum += arr[i];
				i++;		
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}
