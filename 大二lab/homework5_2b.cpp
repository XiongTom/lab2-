#include<iostream>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
	int i;
	double m,n,sum;
	i=1;
	sum=0;
	m=0.01;
	while(i<=64){
		n=m*pow(2,i-1.0);
		sum=sum+n;
		if(sum>1000000){
			cout<<i<<"days"<<endl;
			break;
		}
		i++;	
	}
	
	return 0;
}
