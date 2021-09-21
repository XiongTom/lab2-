#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int a,b,c,max1,max2,max3,flag;
	cin>>a;
	cin>>b;
	cin>>c;
	flag=0;
	if((a==b)&(a==c)){
		flag =3;
	}else if((a==b)||(a==c)){
		flag=2;
	}
	if(flag==3){
		cout<<a<<b<<c;
	}else if(flag==2){
		if((a==b)){
			if(c>a){
				cout<<c<<b<<a;
			} else{
				cout<<b<<a<<c;
			}
		if((a==c)){
			if(b>a){
				cout<<b<<c<<a;
			} else{
				cout<<a<<c<<b;
			}			
		}
		if((c==b)){
			if(a>b){
				cout<<a<<b<<c;
			} else{
				cout<<c<<b<<a;
			}
	}
}
	}else{
		if((a>=b)&(a>=c)){
		    max1 = a;
	    }else if(((a<=b)&(a>=c))||((a>=b)&(a<=c))){
		    max2 =a;
	    }else{
		    max3 =a;
	    }
	    if((b>=a)&(b>=c)){
		    max1 = b;
	    }else if(((b<=a)&(b>=c))||((b>=a)&(b<=c))){
		    max2 =b;
	    }else{
		    max3 =b;
	    }
	    if((c>=a)&(c>=b)){
		    max1 = c;
	    }else if(((c<=a)&(c>=b))||((c>=a)&(c<=b))){
		    max2 =c;
    	}else{
	    	max3 =c;
	    }
	    cout<<max1<<max2<<max3;
	}

	return 0;
}

