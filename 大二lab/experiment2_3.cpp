#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cout<<"the number of array you want:" <<endl;
	cin>>n;
	cout<<"input a number in the array"<<endl;
	int a[n],max1,max2,max3,i,nump,flag,v,z,neg;
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	nump =0;
	z=0;
	neg =0;
	for(i=0;i<=n-1;i++){
		if(a[i]>0){
			nump+=1;
		}else if(a[i]==0){
			z = 1;
		}else{
			neg+=1;
		}
	}
	max1=0;
	max2=0;
	max3=0;
	i=0;
	flag = 0;
	if(nump>=3){
		for(i=0;i<=n-1;i++){
			if(a[i]>max1){
				max1=a[i];
				flag =1;
			}
			
		}
		i=0;
		while(flag ==1){
			for(i=0;i<=n-1;i++){
				if(a[i]==max1){
					flag=2; 
				} 
			    if((a[i]>max2)&&(flag==1)){
				    max2=a[i];
		        }
		    }
    	}
		while(flag ==2){
			for(i=0;i<=n-1;i++){
				if(a[i]==max2){
					flag=3; 
				} 
			    if((a[i]>max3)&(flag==2)){
				    max3=a[i];
		        }
	        }
        }
    }else if(z==1){
    	if (neg<3){
    		cout<<"0";
		}
	}else{
		if(nump>0){
			for(i=0;i<=n-1;i++){
			    if(a[i]>max1){
				    max1=a[i];
			}		
		}
		    for(i=0;i<=n-1;i++){
			    if(a[i]<max2){
				    max2=a[i];
				    flag =1;
			}		
		}
		    while(flag ==1){
			    for(i=0;i<=n-1;i++){
				    if(a[i]==max2){
					    flag=2; 
				    } 
			        if((a[i]<max3)&(flag==1)){
				        max3=a[i];
		            }
	            }
            }		
	    }else{
			for(i=0;i<=n-1;i++){
			if(a[i]<max1){
				max1=a[i];
				flag =1;
			}
			
		}
		while(flag ==1){
			for(i=0;i<=n-1;i++){
				if(a[i]==max1){
					flag=2; 
				} 
			    if((a[i]<max2)&&(flag==1)){
				    max2=a[i];
		        }
		    }
    	}
		while(flag ==2){
			for(i=0;i<=n-1;i++){
				if(a[i]==max2){
					flag=3; 
				} 
			    if((a[i]<max3)&(flag==2)){
				    max3=a[i];
		        }
	        }
        }    	
		}
	}
		
    v = max1*max2*max3;
    cout<<v;
	return 0;
}

