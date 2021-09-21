#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double slope,x1,x2,y1,y2;
	x1 = 3;
	y1 = 7;
	x2 = 8;
	y2 = 12;
	slope = (y2-y1)/(x2-x1);
	cout << "the value of slope is " << setw(3) << fixed<< setprecision(2) << slope;
}
