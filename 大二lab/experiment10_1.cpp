#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	string str,a;
	getline(cin,str);
	for(int i=0;i<str.length();i++){
		a=str[i];
		if(a=="e"){
			str[i]='x';
		}
	}
	cout<<str;
	return 0;
}

