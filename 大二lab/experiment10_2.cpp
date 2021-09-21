#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	string j,str,a,b;
	int num;
	cin>>j>>str;
	for(int i=0;i<j.length();i++){
		a=j[i];
		for(int k=0;k<str.length();k++){
			b=str[k];
			if(b==a){
				num++;
			}
		}
	}
	cout<<num;
	return 0;
}

