#include<iostream>
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
		int count_odd = 0;
		int count_even = 0;
		for(int i = 0;i<n;i++)
		{
		    if(arr[i]&1)
		    {
		        count_odd++;
		    }
		    else
		    {
		    	count_even++;
			}
		}
		if(count_odd == count_even)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<min(count_odd,count_even)<<endl;
		}
	}
	return 0;
}

