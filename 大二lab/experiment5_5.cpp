#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int profit(int n,int a[]){
	int money;
    for(int i=0;i<n-1;i++){
    	for(int j=i+1;j<n;j++){
    		if(a[j]-a[i]>money){
    			money = a[j]-a[i];
			}
		}
	}
   return money;
}
int main()
{
	int n,a[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<profit(n,a);
	return 0;
}

