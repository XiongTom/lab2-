#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int sumodd(int a,int b){
	int sum=0;
	for(int i=a;i<=b;i++){
		if(i%2==1){
			sum=sum+i;
		}
	}
	return sum;
}
int max(int n,int a[]){
    int maxnum=0;
	for(int i=0;i<n;i++){
		if(a[i]>=maxnum){
			maxnum=a[i];
		}
	}
	return maxnum;
}
int main()
{
	int n;
	cin>>n;
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		c[i]=sumodd(a[i],b[i]);
	}
	cout<<max(n,c);
	return 0;
}

