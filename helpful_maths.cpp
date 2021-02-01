#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<int>vec;
	for(int i = 0;i<s.length();i+= 2)
		vec.push_back(s[i]);
	sort(vec.begin(),vec.end());
	int j = 0;
	for(int i = 0;i<vec.size();i+=1)
	{
		s[j] = vec[i];
		j += 2;
	}
	cout<<s<<endl;	
	return 0;
}
