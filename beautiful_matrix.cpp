#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5][5];
	for(int i = 0;i<5;i++)
	{
		for(int j = 0;j<5;j++)
		{
			cin>>arr[i][j];	
		}
	}
				
	int count = 0;
	for(int i = 0;i<5;i++)
	{
		for(int j = 0;j<5;j++)
		{
			if(arr[i][j] == 1)
			{
				if(i != 2)
				   count += i%2 ?1:2;
				if(j != 2)   
				   count += j%2 ?1:2;
			}			
		}	
	}
	cout<<count<<endl;
	return 0;
}
