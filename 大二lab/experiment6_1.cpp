#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
void find(int a[], int len)
{
    int max, second, i;
    max = 0;
    second = 0;
    for(i = 0; i < len; i++)
    {
        if (a[i] > max)
        {
            second = max;        
            max = a[i];          
        }
        else if (a[i] > second)
            second = a[i];       
    }
    if(second==max){
    	printf("The Second number is: -1");
	}else{
		printf("The Second number is: %d\n", second);
	}
   
}
int main()
{
	int a[100],i,m;
	i=0;
	while(i<100){
		cin>>m;
		if(m<0){
			break;
		}else{
			a[i]=m;
		}
		i++;
	} 
	find(a,i);
	return 0;
}

