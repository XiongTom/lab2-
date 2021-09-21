#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class circle{
	public:
		virtual double getArea(){
			return(3.14*pow(R,2));
		}
		virtual double getVolumn()=0;
		void setR(int r){
			R=r;
		}
		void setH(int h){
			H=h;
		}
		protected:
			double R;
			double H;
		
};
class cylindrical:public circle{
	public:
		double getVolumn(){
			return (3.14*pow(R,2)*H);
		}
		double getArea(){
			return (2*3.14*R*H+2*3.14*pow(R,2));
		}		
};	
class cone:public circle{
	public:
		double getVolumn(){
			return (3.14*pow(R,2)*H/3.0);
		}
		double getArea(){
			return (3.14*R*H+3.14*pow(R,2));
		}
};
class sphere:public circle{
	public:
		double getArea(){
			return (4.0*3.14*pow(R,2));
		}
		double getVolumn(){
			return(4.0/3.0*3.14*pow(R,3));
		}
};
int main()
{
	double h,r;
	cout<<"enter the height and the radius "<<endl;
	cin>>h>>r; 
	cout<<"the radius is "<<r<<" the area of circle is "<<3.14*pow(r,2)<<endl;
	cylindrical cy;
	cone co;
	sphere sp;
	cy.setH(h);
	cy.setR(r);
	cout<<"the radius is "<<r<<" the height is "<<h<<" the area of cylindrical is "<<cy.getArea()<<" the volunm of cylindrical is "<<cy.getVolumn()<<endl;
	co.setH(h);
	co.setR(r);
	cout<<"the radius is "<<r<<" the height is "<<h<<" the area of cone is "<<co.getArea()<<" the volunm of cone is "<<co.getVolumn()<<endl;
	sp.setH(h);
	sp.setR(r);
	cout<<"the radius is "<<r<<" the height is "<<h<<" the area of sphere is "<<sp.getArea()<<" the volunm of sphere is "<<sp.getVolumn()<<endl;
	return 0;
}

