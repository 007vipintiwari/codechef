#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	
	int b,a,c;
	cout<<"enter of co-officient of x^2 :";
	cin>>a;
	cout<<"enter of co-officient of x :";
	cin>>b;
	cout<<"enter of co-officient of constant term :";
	cin>>c;
	int D = ((b*b) - (4*a*c));
	if(D < 0)
	{
		cout<<"real root do not exist"<<endl;
	}
	else if(D == 0)
	{
		cout<<"equal root exist:"<<endl;
		cout<<"root is: "<<((-1*b)/(2*a))<<endl;
	}
	else
	{
		if(a == 0)
		{
			cout<<"root is"<<(double(-1*c)/double(b))<<endl;
		}
		else
		{
			int r1 = ((-1*b + sqrt(D))/(2*a));
			int r2 = ((-1*b - sqrt(D))/(2*a));
			cout<<"root 1: "<<r1<<endl;
			cout<<"root 2: "<<r2<<endl;
		}
		 
	}
	
	
	return 0;
}
