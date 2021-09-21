#include<iostream>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;
void dec(int n,int a[100][100]){
	int m,k,t;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i][0]>a[j][0]){
				m=a[i][1];
				a[i][1]=a[j][1];
				a[j][1]=m;
				k=a[i][0];
				a[i][0]=a[j][0];
				a[j][0]=k;
			}
		}
	}
	cout<<"------"<<endl;
	cout<<"part no.     quantify"<<endl;
	for(int i=0;i<n;i++){
		t=0;
		m =a[i][0];
		while(m>0){
			m=m/10;
			t=t+1; 
		}
		cout<<a[i][0]<<setw(15-t)<<" "<<a[i][1]<<endl;
	}	
}
int main()
{
	int n;
	cout<<"enter the number of tupes of component"<<endl;
	cin>>n;
	int arr[100][100];
	cout<<"enter part no. and quantify "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i][0]>>arr[i][1];
	}
	dec(n,arr);
	return 0;
}
