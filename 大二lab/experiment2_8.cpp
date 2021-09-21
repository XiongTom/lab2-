#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int n,a[34],i,j,m,fis,dis[34],flag;
	cin>>n;
	i=0;
	while (n>0)   
	{
        a[i] = n%2;
        i = i+1;
        n = n/2;
		
    }
    flag = 0;
    j= 0;
    for(m=0;m<i;m++){

		if((a[m]==1)&&(flag==1)){
			dis[j] = m-fis;
			fis = m;
			j++;
		}
	    if((a[m]==1)&&(flag==0)){
    		fis = m;
    		flag =1;
		}
		
	}
	int max = 0;
	for(i=0;i<j;i++){
		if(max<=dis[i]){
			max=dis[i];
		}
	}
	cout<<max;
	return 0;
}

