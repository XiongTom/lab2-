#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main()
{
	double n,sq;
	cout<<"the number is ";
	cin>>n ;
	sq = pow(n,1.0/4);
	cout << "The fourth root of the number is " << setw(3) << fixed<< setprecision(2) << sq;
	
	return 0;
}
//the fourth root of 42 is 2.55
//the fourth root of 121 is 3.32
//the fourth root of 256 is 4.00
//the fourth root of 257 is 4.92
//the fourth root of 1240 is 5.93
//the fourth root of 16256 is 11.29
