#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n ;
		cin>>n;
		int arr[n] = {0}; int brr[n] = {0};
		int turn = 0;
		for(int i = 0;i<n;i++) cin>>arr[i];
		int low = 0;
		int high = n-1;
		int t = 0;
		while(low<=high)
		{
			if(turn == 0)
			{
				brr[t] = arr[low];
				low++;
				turn = 1;
				t++;
			}
			else
			{
				brr[t] = arr[high];
				high--;
				t++;
				turn = 0;
			}
		}
		for(int i =0;i<n;i++)
		{
			cout<<brr[i]<<" ";
		}
		cout<<endl;
		
	}	
	return 0;
}
