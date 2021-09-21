#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int pn(int num){
	int a=0,b[1000],sum=0;
	for(int i=1;i<num;i++){
		if(num%i==0){
			b[a]=i;
			a+=1;
		}
	}
	for(int i=0;i<a;i++){
		sum=sum+b[i];
	}
	if(sum==num){
		return sum;
	}else{
		return -1;
	}
}
int main()
{
	int n;
	cin>>n;
	if(n==pn(n)){
		cout<<"true";
	}else{
		cout<<"false";
	}
	return 0;
}

