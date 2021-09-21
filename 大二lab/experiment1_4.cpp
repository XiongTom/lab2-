#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	double pi1,pi2,pi3;
	pi1 = 4*(1-1.0/3);
	cout << "when the serie is 2,the pi is "<<setw(3) << fixed<< setprecision(3)<<pi1<<endl;
	pi2 = 4*(1-1.0/3+1.0/5);
	cout << "when the serie is 3,the pi is "<<setw(3) << fixed<< setprecision(3)<<pi2<<endl;
	pi3 = 4*(1-1.0/3+1.0/5-1.0/7);
	cout << "when the serie is 4,the pi is "<<setw(3) << fixed<< setprecision(3)<<pi3;
	
	return 0;
} 
