#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main()
{
	double E,R,RC,t,i;
	double e = 2.71828;
	cout<<"Enter the voltage of the battery:";
	cin>>E;
	cout<<"Enter the value of resistance:";
	cin>>R;
	cout<<"Enter the value of time constant:";
	cin>>RC;
	cout<<"Enter the value of time:";
	cin>>t;
	i=(E/R)*pow(e,-t/RC);
	cout << "The current i is " << setw(3) << fixed<< setprecision(5) << i<<endl;
	
	
	return 0;
}
