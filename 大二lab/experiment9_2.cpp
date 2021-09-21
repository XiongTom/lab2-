#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	string str,a;
	cout<<"Enter the string"<<endl;
	getline(cin,str);
	int num;
	num=1;
	for(int i=0;i<str.length();i++){
		a=str[i];
		if((a==" ")&&(i!=0)){
			num=num+1;
		}
	}
	cout<<num;
	return 0;
}

