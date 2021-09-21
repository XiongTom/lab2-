#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cout<<"the number of array you want:" <<endl;
	cin>>n;
	cout<<"input a number in the array"<<endl;
	int a[n],i,tar,j,k,x;
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
    cout<<"input the target "<<endl;
    cin>>tar;
	j = 0;
	k = 0;
	while(j<=n-1){
		if(a[j]==tar){
			k = k+1;
		}
		j++;
	}
	int b[k];
	j = 0;
	x = 0;
	while(j<=n-1&&k!=0){
		if(a[j]==tar){
			b[x]=j;
			x=x+1;
		}
		j++;
	}
	if(k==0){
		cout<<"[-1,1]";
	}else{
		cout<<"["<<b[0]<<" "<<b[x-1]<<"]";
	}
	return 0;
} 
