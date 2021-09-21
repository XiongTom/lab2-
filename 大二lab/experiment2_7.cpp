#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int n,a[10000],i,j,k,flag,sum,b[10000];
	cin >> n;
	for(i=0;i<10;i++){
		a[i]=n%10;
		n/=10;
	}
	flag = 0;
	k=1;
	b[0]=0;
	while(flag == 0){
		sum = 0;
		for(i=0;i<10;i++){
			sum =pow(a[i],2)+sum;
		}
		if(sum==1){
			flag =1;
			break;
		}else{
		    for(j=0;j<k;j++){
		        if(b[j]==sum){
		        	break;
				}else{
					b[k-1]=sum;
				}
	        }
	        for(j=0;j<10;j++){
	        	a[j]=sum%10;
		        sum/=10;
			}
	    
		}
		k++;
	}
	if(flag==1){
		cout<<"true";
	}else{
		cout<<"false";
	}
	return 0;
}

