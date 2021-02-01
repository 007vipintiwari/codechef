#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[26] = {0};
	int arr1[26] = {0};
	string s = "it was disclosed yesterday that several informal but direct contacts have been made with political representatives of the viet cong in moscow";
				
					
	int len = s.length();
	for(int  i = 0;i<len;i++)
	{
		if(s[i] != ' ')
		{
			arr[s[i]-97]++;
		}
					}	
					
					
	for(int i = 0;i<26;i++)
	{
		cout<<arr[i]<<endl;
									}								
	return 0;
}
