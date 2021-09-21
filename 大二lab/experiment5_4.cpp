#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int sumnum(int a,int b){
	int sum;
	sum=a;
	int c=a;
	for(int i=2;i<=b;i++){

		c = c*10+a;
		sum =sum+c;

	}
	return sum;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<sumnum(a,b);
	return 0;
}

