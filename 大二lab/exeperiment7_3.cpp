#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the length of array"<<endl;
	cin>>n;
	cout<<"Enter the array"<<endl;
	int arr[n],m[n],b;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]==i){
			m[b]=i;
			b=b+1;
		}
	}
	for(int i=0;i<b;i++){
		cout<<m[i]<<";";
	}
	return 0;
}

