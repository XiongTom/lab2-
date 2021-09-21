#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	double *p[10];
	double a[10];
	for(int i=0;i<10;i++){
		cin>>a[i];
	} 
	for (int i = 0; i < 10; i++){
      p[i] = &a[i];
   }
    double *sum,s;
    s=0;
    sum=&s;
    for(int i=0;i<10;i++){
    	*sum=*p[i]+*sum;
	}
	cout<<"The sum of ";
	for(int i=0;i<10;i++){
		cout<<*p[i]<<" ";
	}
	cout<<"is ";
	cout<<*sum;
	return 0;
}

