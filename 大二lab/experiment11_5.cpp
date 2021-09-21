#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    double*miles[10],*gallons[10], *mpg[10];
    double a[10]={240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4,192.3};
    double b[10]={10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3,8.4};
    double c[10];
    for (int i = 0; i < 10; i++){
      miles[i] = &a[i];
   }   	
   for (int i = 0; i < 10; i++){
      gallons[i] = &b[i];
   }
   for(int i=0;i<10;i++){
   	    c[i]=(*miles[i])/(*gallons[i]);
   }
    for (int i = 0; i < 10; i++){
      mpg[i] = &c[i];
   }
   for (int i = 0; i < 10; i++){
      cout<<*mpg[i]<<endl;
   }   
	return 0;
}

