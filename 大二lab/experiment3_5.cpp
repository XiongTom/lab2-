#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	double num1,num2,code,end;
	cout<<"enter two numbers here "<<endl;
	cin>>num1;
	cin>>num2;
	cout<<"enter the code number from 1 to 3 "<<endl;
	cin>>code;
	if(code == 1){
		end = num1+num2;
	}else if(code==2){
		end = num1*num2;
	}else if(code==3){
		end =num1/num2;
	}else{
		cout<<"there is no code for the code";
	}
	cout<<end;
	return 0;
}

