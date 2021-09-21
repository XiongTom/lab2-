#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int a,b,n,max,maxn;
	cout<<"Enter the length of array"<<endl;
	cin>>n;
	cout<<"Enter the array"<<endl;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		a=arr[i];
		for(int j=0;j<n;j++){
			if(a==arr[j]){
				b=b+1;
			}
		}
		if(b>maxn){
	    	max=b;
		    maxn=a; 			
		}
	}
	if(max>n/2){
		cout<<"the majority element is "<<maxn;
	}
	return 0;
}

