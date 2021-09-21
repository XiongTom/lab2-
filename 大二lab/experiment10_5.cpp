#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	string str,min,k;
	int n,t,m,flag;
	cin>>str;
	n=str.length();
	string a[n];
	min="z";
	for(int i=0;i<n;i++){
        k=str[i];
		if(k<min){
        	min=str[i];
        	t=i;
		}
	}
	a[0]=min;
	m=1;
	for(int j=t+1;j<n+1;j++){
		k=str[j];
		flag=0;
		for(int i=0;i<n;i++){
			if(k==a[i]){
				flag=1;
			}
		}
		if(flag!=1){
			a[m]=k;
			m++;
		}
	}
	for(int i=0;i<m+1;i++){
		cout<<a[i];
	}
	return 0;
}

