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
		cout<<end;
	}else if(code==2){
		end = num1*num2;
		cout<<end;
	}else if(code==3){
		if(num2==0){
			cout<<"you can not divide 0 !!!!";
		}else{
			end = num1/num2;
			cout<<end;
		}
	}else{
		cout<<"there is no code for the code";
	}
	return 0;
}

