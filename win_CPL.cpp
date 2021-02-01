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
		for(int i = 0;i<n;i++) cin>>arr[i];
		int sum = 0;
		int sum1 = 0;
		int sum2 = 0;
		int count = 0;
		for(int i = 0;i<n;i++)
		{
			sum += arr[i];
		}
		if(sum/2 <= k)
		{
			return -1;
		}
		else
		{
			sort(arr,arr + n);
			bool flag = false;
			for(int i = n-1;i>=0;i--)
			{
				if(sum1 < k && flag == false)
				{
					sum1 += arr[i];
					if(sum2 < k)
					   flag = true;
					count++;
				}
				 if(sum2 < k && flag == true)
				{
					sum2 += arr[i];
					if(sum1 < k)
					   flag = false;
					count++;
				}
				 if(sum1 >= k && sum2 >= k)
				{
					break;
				}
				
			}
			
		}
		cout<<count<<endl;
	}
	return 0;
}
