#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	double x,y,z;
	for(x=1;x<=5;x++){
		for(z=2;z<=6;z++){
			if(x==z){
				cout<<"Function Undefined"<<endl;
			}else{
				y = x*z/(x-z);
				cout<<y<<endl;
			}
		}
	}
	return 0;
}

