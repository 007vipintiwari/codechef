#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,x,y;
		cin>>n>>k>>x>>y;
		if(x == y)
		{
			cout<<n<<" "<<n<<endl;
		}
		int xcord[4] = {0};
		int ycord[4] = {0};
		if(x > y)
		{
			
				int minval = min(n-x,n-y);
				x += minval;
				y += minval;
				xcord[0] = x;
				ycord[0] = y ;
				//cout<<x<<" "<<y<<endl;
				
				int minval1 = n - y;
				y = y + minval1;
				x = x - minval1;
				xcord[1] = x;
				ycord[1] = y;
				//cout<<x<<" "<<y<<endl;
				
				int minval2 = x;
				x = x - minval2;
				y = n - minval2;
				xcord[2] = x;
				ycord[2] = y;
				//cout<<x<<" "<<y<<endl;
				
				int minval3 = y;
				y = y - minval3;
				x = x + minval3;
				xcord[3] = x;
				ycord[3] = y;
				//cout<<x<<" "<<y<<endl;
				
				int z = k%4;
				cout<<xcord[z-1]<<" "<<ycord[z-1]<<endl;
			
		}
		if(x < y)
		{
			int minval1 = n - y;
			y += minval1;
			x += minval1;
			xcord[0] = x;
			ycord[0] = y;
			
			int minval2 = n - x;
			x = x + minval2;
			y = y - minval2;
			xcord[1] = x;
			ycord[1] = y;
			
			int minval3 = y;
			y = y - minval3;
			x = n - minval3;
			xcord[2] = x;
			ycord[2] = y;
			
			int minval4 = x;
			x = x - minval4;
			y = y + minval4;
			xcord[3] = x;
			ycord[3] = y;
			
			int z = k%4;
			cout<<xcord[z-1]<<" "<<ycord[z-1]<<endl;
		}
		
	}
	return 0;
}
