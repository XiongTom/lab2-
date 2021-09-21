#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int a,b,x;
	cin>>a>>b; 
	cout<<"The GCD of "<<a<<" and "<<b<<" is ";
	x=a%b;
    while(x>0){
    	x=a%b;
    	a=b;
    	b=x;
	}
    cout<<a;
	return 0;
}

