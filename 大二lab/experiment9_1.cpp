#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	string str,c;
	cout<<"Enter the string"<<endl;
	cin>>str;
	cout<<"Enter the character"<<endl;
	cin>>c;
	int l,a;
	l=str.length();
	int i=0;
	int num=0;
	while(i<l){
		a=str.find(c,i);
		if(a!=-1){
			num=num+1;
			i=a+1;
		}else{
			break;
		}
	}
	cout<<num;
	return 0;
}

