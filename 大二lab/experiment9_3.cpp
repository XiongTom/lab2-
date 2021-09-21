#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	string str,a,b;
	cin>>str;
	int flag=0;
	while(flag==0){
		for(int i=0;i<str.length()/2;i++){
			a=str[i];
			b=str[str.length()-i-1];
			if(a!=b){
				flag=1;
			}
		}
		break;
	}
	if(flag==0){
		cout<<"true";
	}else{
		cout<<"false";
	}
	return 0;
}

