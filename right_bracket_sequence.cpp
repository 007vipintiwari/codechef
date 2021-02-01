#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1;
		cin>>s1;
		int count1= 0;
		int count2 = 0;
		int moves = 0;
		for(int i = 0;i<s1.length();i++)
		{
			if(count1 == 0 && s1[i] == ')' && i != 0)
			{
				continue;
			}
			if(count2 == 0 && s1[i] == ']' && i != 0)
			{
				continue;
			}
			if(s1[i] == '(')
			{
				count1++;
			}
			if(s1[i] == '[')
			{
				count2++;
			}
			if(s1[i] == ']' && count2 > 0)
			{
				moves++;
				count2--;
			}
			if(s1[i] == ')' && count1 > 0)
			{
				moves++;
				count1--;
			}
		}
		cout<<moves<<endl;
	}
	
	
	return 0;
}
