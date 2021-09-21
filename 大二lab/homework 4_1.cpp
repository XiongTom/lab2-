#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x1,y1,x2,y2,xc,yc;
	cout<<"the data of point 1 is ";
	cin>>x1>>y1 ;
	cout<<"the data of point 2 is ";
	cin>>x2>>y2 ;
	xc = (x1+x2)/2;
	yc = (y1+y2)/2;
	cout << "The x coordinate of the midpoint is " << setw(3) << fixed<< setprecision(2) << xc<<endl;
	cout << "The y coordinate of the midpoint is " << setw(3) << fixed<< setprecision(2) << yc<<endl;
	
	return 0;
}
