#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int *k;
	int a[10];
	int max,min;
	for(int i=0;i<10;i++){
		cin>>a[i];
	} 
	int *p[10];
	for (int i = 0; i < 10; i++){
      p[i] = &a[i];
   }
   max=*p[0];
   min=*p[0];
	for(int i=0;i<10;i++){
		if(*p[i]>max){
			max=*p[i];
		}
		if(*p[i]<min){
			min=*p[i];
		}
	}
	cout<<"The difference between the maximum and the minimum is "<<max-min;
	return 0;
}

