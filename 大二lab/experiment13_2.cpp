#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class sphere{
	public:
		double r;
		void showData(void);
		void setData(double a);
		void surfaceArea(void);
		void volume(void);
}; 
void sphere::showData(void){
	r=1.0;
	cout<<"the radius is "<<r<<endl;
}
void sphere::setData(double a){
	r=a;
}
void sphere::surfaceArea(void){
	double s;
	s = 4.0*3.14*pow(r,2);
	cout<<"the surface is "<<s<<endl;
}
void sphere::volume(void){
	double v;
	v = 4.0/3.0*3.14*pow(r,3);
	cout<<"the volume is "<<v<<endl;
}
int main()
{
	double a;
	cin>>a;
	sphere b;
	b.setData(a);
	b.showData();
	b.surfaceArea();
	b.volume();
	return 0;
}

