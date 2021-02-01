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
		int arr[n*k];
		for(int i = 0;i<n*k;i++)
			cin>>arr[i];
		int z = 1;
		int sum_value = 0;
		vector<int>vec(n,0);
		int mid = ceil(n/2);
		for(int i = 0;i<n*k;i++)
		{
			
			if(z <= n)
			{
				vec.push_back(arr[i]);
				z++;
			}	
			if(z > n)
			{
				
				sum_value += vec[mid-1];
				vec.clear();
				z = 1;
			}
		}	
		cout<<sum_value<<endl;
	}
	return 0;
}
