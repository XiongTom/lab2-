#include<iostream>
using namespace std;
int main()
{
	double vin,vout,rin,rout;
	vin = 1;
	rin = 0.75;
	rout = 0.5;
	vout =vin*(rin/rout)*(rin/rout);
	cout << "the output velocity is "<<vout<<"ft/sec" ;
	
	return 0;
} 
