#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int a,b,c,sum,flag,n;
	cin>>a;
	cin>>b;
	cin>>c;
	flag =0;
	if((a==1)||(b==1)||(c==1)){
		flag =1;
	}
	if(flag==0){
		if(a>10){
		    a = 10;
	    }
    	if(b>10){
    		b = 10;
    	}
    	if(c>10){
		    c = 10;
    	}
     	sum = a+b+c;
	}else{
		if(a>10){
		    a = 10;
	    }
    	if(b>10){
    		b = 10;
    	}
    	if(c>10){
		    c = 10;
    	}		
		if(a==1){
			n+=1;
			a =11;
		}
		if(b==1){
			n+=1;
			b=11;
		}
		if(c==1){
			n+=1;
			c=11;
		}
		sum = a+b+c-10*(n-1);
		if(sum>21){
			sum=sum-10;
		}
		}
	cout<<sum;
	return 0;
}

