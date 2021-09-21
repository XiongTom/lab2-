#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
void turn(int a[],int time){
	int n;
	for(int i=1;i<=time;i++){
		n=a[0];
		for(int j=0;j<=5;j++){
			a[j]=a[j+1];
		}
		a[6]=n;
	}
	for(int k=0;k<7;k++){
		cout<<a[k]<<" "; 
	}
}
int main()
{
	int a[7],t;
	cout<<"Enter an array which length is 7"<<endl;
	for(int i=0;i<7;i++){
		cin>>a[i];
	}
	cout<<"Enter a number";
	cin>>t;
	turn(a,t);
	return 0;
}

