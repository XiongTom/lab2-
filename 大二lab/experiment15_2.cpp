#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
void mul( struct multiply m);
struct multiply{
	int num;
	int den;
};
int main()
{
	cout<<"enter the numerator and denominator member"<<endl;
	multiply m;
	cin>>m.den>>m.num;
	mul(m);
	return 0;
}
void mul( struct multiply m){
	cout<<m.den*m.num;
}
