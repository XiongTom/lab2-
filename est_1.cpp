#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int bijiao(string x,string y){
	cout<<x<<endl<<y<<endl;
	int n=0;
	while(x[n]==y[n]){
		n++;
	}
	printf("%d\n",x[n]>y[n]);
	return x[n]>y[n];
}
int main()
{	
	string a,b;
	a="88888888";
	b="wdwdwdwd"; 
	bijiao(a,b);
	bijiao(b,a);
	return 0;
}

