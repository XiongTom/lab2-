#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	string str,a,b;
	int sum,t,flag;
	cin>>str;
	while(1){
		for(int i=0;i<str.length();i++){
		    sum=0;
			a=str[i];
		    for(int j=0;j<str.length();j++){
		    	b=str[j];
		    	if(b==a){
		    		sum=sum+1;
		    		t=i;
				}
			}
			if(sum==1){
				cout<<t;
				flag=1;
				break;
			}
	    }
	    if(flag!=1){
	    	cout<<-1;
	    	break;
		}
    }
	return 0;
	}
	

