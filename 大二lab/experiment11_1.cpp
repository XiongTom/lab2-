#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int n,*k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	int *p[n];
	for (int i = 0; i < n; i++){
      p[i] = &a[i];
   }
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(*p[i]>*p[j]){
				k=p[i];
				p[i]=p[j];
				p[j]=k;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<*p[i];
	}
	return 0;
}

