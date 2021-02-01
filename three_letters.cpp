#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int arr[26] = {0};
		int count = 0;
		int n = s.length()/3;
		for(int i = 0;i<s.length();i++)
		{
			if(arr[s[i]-97] == 0)
			{
				arr[s[i]-97]++;
			}
			else
			{
				count++;
				arr[s[i]-97]++;
			}
		}
		for(int i =0;i<26;i++)
		{
			count += floor(arr[i]/2);
		}
		cout<<min(count,n)<<endl;
	}
	return 0;
}
