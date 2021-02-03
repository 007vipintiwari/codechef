#include<iostream>
#include<cmath>
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
		int notsolve = 0;
		int maxtime = 0;
		for(int i = 0;i<n;i++)
		{
			if(arr[i] == -1) notsolve++;
			else maxtime = max(maxtime,arr[i]);
		}
		if(notsolve > ceil(n/2)) cout<<"Rejected"<<endl;
		else if(maxtime > k) cout<<"Too Slow"<<endl;
		else if(notsolve == 0 && maxtime <= 1) cout<<"Bot"<<endl;
		else if(notsolve <= ceil(n/2) && maxtime <= k) cout<<"Accepted"<<endl;
	}
	
	
	return 0;
}
