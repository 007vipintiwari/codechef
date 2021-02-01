#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int n ;//Number of stations
	cout<<"Enter number of stations(Max :: 6 and Min :: 2):";
	cin>>n;
	//Walsh Table
	int walsh[6][6] =   {{1,1,1,1,1,1},
					   {1,-1,1,-1,1,-1},
						{1,1,-1,-1,1,1},
						{1,-1,-1,1,1,-1},
						{1,1,1,1,-1,-1},
						{1,-1,1,-1,-1,1}};
						
	int data[n];
	cout<<"enter data of stations(1 for 1 ,-1 for 0, 0 for silent):";//encoded data
	for(int i = 0;i<n;i++)
	{
		cin>>data[i];	
	}
	//data send by each channel
	for(int j = 0;j<n;j++)
	{
		cout<<"data send by station "<<j+1<<" ";
		cout<<"[";
		for(int i = 0;i<n;i++)
		{
			cout<<data[j]*walsh[j][i]<<" ";
		}	
		cout<<"]"<<endl;
		
	}					
	//data in channel
	int channel[n] = {0};
	for(int j = 0;j<n;j++)
	{
		
		int sum = 0;
		for(int i = 0;i<n;i++)
		{
			sum += data[i]*walsh[i][j];
		}
		channel[j] = sum;
	}
	cout<<"data in the channel :[ ";
	for(int i = 0;i<n;i++)
	{
		cout<<channel[i]<<" ";
	}
	cout<<"]"<<endl;
	//demultiplexing
	for(int j = 0;j<n;j++)
	{
		int sum = 0;
		for(int i = 0;i<n;i++)
		{
			sum += walsh[j][i]*channel[i];
		}
		cout<<"data bit send by station "<<j+1<<" "<<sum/n<<endl;
	}
	return 0;
}
