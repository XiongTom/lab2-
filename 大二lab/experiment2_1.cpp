#include<iostream>
#include<cmath>
#include<cstring>
#include <bits/stdc++.h>
using namespace std;
string maxx = "2147483647";
string minn = "2147483648";
void Print(string s,int tmp)
{
    int cnt = 0;
    while (s[cnt] == '0' && cnt < s.length())
        cnt++;
    if (cnt == s.length())
        cout << "0\n";
        else if(s.length()-cnt==10)
        {
            if(tmp==1 && s>maxx)
            {
                cout<<"0\n";
                return;
            }
            if(tmp==-1 && s>minn)
            {
                cout<<"0\n";
                return;
            }
        }
    else
    {
        if(tmp==-1) cout<<"-";
        for (int i = cnt; i < s.length(); i++)
        {
            cout << s[i];
        }
        cout << '\n';
    }
}
int main()
{
    string s, t;
    cin >> s;
    int temp = 1;
    if (s[0] == '-')
    {
        temp = -1;
        for (int i = 1; i < s.length(); i++)
        {
            t = s[i] + t;
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            t = s[i] + t;
        }
    }
    if (t.length() < 10)
        Print(t,temp);
    else
    {
    	cout<<"0";
    }
}
  
