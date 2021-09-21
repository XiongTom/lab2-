#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
void bubble_sort1(int a[], int n)
{
    int i,j;

    for (i=n-1; i>0; i--)
    {
        // 将a[0...i]中最大的数据放在末尾
        for (j=0; j<i; j++)
        {
            if (a[j] > a[j+1])
                swap(a[j], a[j+1]);
        }
    }
    for(int k=0;k<n;k++){
		cout<<a[k]<<" "; 
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
bubble_sort1(a,i);
	return 0;
}
