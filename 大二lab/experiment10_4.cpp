#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int n,flag;
	cin>>n;
	for(int i=0;i<31;i++){
		if(n==pow(2,i)){
			flag=1;
		}
	}
	if(flag==1){
		cout<<"true";
	}else{
		cout<<"false";
	}
	return 0;
}

