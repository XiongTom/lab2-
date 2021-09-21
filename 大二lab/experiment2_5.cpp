#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<bits/stdc++.h>
using namespace std;
string itc(int x)
{
	string s;
	while(x!=0)
	{
		s=(char)(x%10+48)+s;
		x/=10;
	}
	return s;
}
int main()
{
	string s;
	string t;
	cin>>s;
	int tmp=1;
	for(int i=1;i<s.length();i++)
	{
		if(s[i]!=s[i-1])
		{
			t=t+s[i-1]+itc(tmp);
			tmp=1;
		}
		else tmp++;
	}
	t=t+s[s.length()-1]+itc(tmp);
	if(s.length()>t.length()) cout<<t;
	else cout<<s;
return 0;
}

