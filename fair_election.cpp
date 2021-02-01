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
		vector<int>arr(n,0);
		vector<int>brr(m,0);
		for(int i = 0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i = 0;i<m;i++)
		{
			cin>>brr[i];
		}
		sort(arr.begin(),arr.end());
		sort(brr.begin(),brr.end());
		int sum1 = 0;
		int sum2 = 0;
		for(int i = 0;i<n;i++)
		{
			sum1 += arr[i];
		}
		for(int i = 0;i<m;i++)
		{
			sum2 += brr[i];
		}
		
			int count = 0;
			int i = 0;
			int j = m-1;
			while((i <n) && (j >= 0))
			{
				if(sum1 >sum2)
				{
					break;
				}
				else if(arr[i] == brr[j])
				{
					i++;
					j--;
				}
				else if(arr[i] < brr[j])
				{
					sum1 = sum1 + brr[j] - arr[i];
					sum2 = sum2 + arr[i] - brr[j];
					swap(arr[i],brr[j]);
					i++;
					j--;
					count++;
				}
				else
				{
					break;
				}
			}
				if(sum1 >=sum2)
				{
					cout<<count<<endl;
				}
				if(sum1<sum2)
				{
					cout<<-1<<endl;
				}	
	}
	return 0;
}
