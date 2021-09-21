#include<iostream>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
	int i;
	double m,n,sum;
	i=1;
	sum=0;
	m=0.01;
	cout<<"Day"<<"                          "<<"Amount  Owed"<<endl;
	cout<<"---"<<"                          "<<"-------------"<<endl;
	while(i<=64){
		n=m*pow(2,i-1.0);
	    cout << i << setw(35) << fixed<< setprecision(2) << n<<endl;
		sum=sum+n;
		if(sum>1000000){
			cout<<i<<"days"<<endl;
		}
		i++;	
	}
	
	return 0;
}

