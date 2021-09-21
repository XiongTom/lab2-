#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
const int size=100;
void matrix(int m,int n,int a[size][size]){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}
void turn(int m,int n,int a[size][size]){
	int x,b[size],k,c[size],flag;
	k=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==0){
				b[k]=i;
				c[k]=j;
				k+=1;
			}
		}
	}
    for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		    flag=0;
			for(int l=0;l<k;l++){
				if((i==b[l])||(j==c[l])){
					flag=1;
				}
			}
			if(flag==0){
				cout<<a[i][j]<<" ";
			}else{
				cout<<"0"<<" ";
			}
		
		}
		cout<<endl;
	}
}
int main()
{
	int a,b;
	cout<<"Enter the number of row and column"<<endl;
	cin>>a>>b;
	int mat[size][size];
	cout<<"Enter the matrix"<<endl;
	matrix(a,b,mat);
	turn(a,b,mat);
	return 0;
}

