#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class circle{
	public:
		double r;
		void setData(double a);
		double perimeter(void);
		double area(void);
		void showdata(void);
};
void circle::setData(double a){
	r=a;
}
double circle::area(void){
	double s;
	s=3.14*pow(r,2);
	return s;
}
double circle::perimeter(void){
	double c;
	c = 2.0*3.14*r;
	return c;
}
void circle::showdata(void){
	cout<<"the radius is "<<r<<endl;
	cout<<"the area is "<<area()<<endl;
	cout<<"the perimeter is "<<perimeter()<<endl;
}
int main()
{
	double a;
	cin>>a;
	circle cir;
	cir.setData(a);
	cir.area();
	cir.perimeter();
	cir.showdata();
	return 0;
}

