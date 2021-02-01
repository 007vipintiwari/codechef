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
		bool flag = false;
		int brr[100000] = {0};
		for(int j = 0;j<n;j++) 
		{
			if(brr[arr[j] - 1] != 0)
				{
					flag = true;
				}
			else
				brr[arr[j]-1]++;	
		}
		if(flag)
			cout<<"ne krasivo"<<endl;
		else
			cout<<"prekrasnyy"<<endl;	
	}
	return 0;
}
