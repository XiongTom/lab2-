#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Shape 
{
public:
   virtual double getPerimeter() = 0;
   void setWidth(double w)
   {
      width = w;
   }
   void setHeight(double h)
   {
      height = h;
   }
   void setsides(double a,double b,double c){
   	   sidea=a;
   	   sideb=b;
   	   sidec=c;
   }
   void setradius(double r){
   	   radius =r;
   }
protected:
   double width;
   double height;
   double sidea;
   double sideb;
   double sidec;
   double radius;
};
class Rectangle: public Shape
{
public:
   double getPerimeter()
   { 
      return (2*width +2* height); 
   }
};
class Triangle: public Shape
{
public:
   double getPerimeter()
   { 
      return (sidea+sideb+sidec); 
   }
};
class Circle: public Shape
{
public:
   double getPerimeter()
   { 
      return (2.0*3.14*radius); 
   }
};
int main(void)
{
	double a,b,c,w,h,r;
   Circle cir;
   Rectangle Rect;
   Triangle  Tri;
   cout<<"enter the sides of a triangle "<<endl;
   cin>>a>>b>>c;
   Tri.setsides(a,b,c);
   cout << "Total Triangle Perimeter: " << Tri.getPerimeter() << endl; 
   cout<<"enter the width and height of a rectangle "<<endl;
   cin>>w>>h;
   Rect.setWidth(w);
   Rect.setHeight(h);
   cout << "Total Rectangle Perimeter: " << Rect.getPerimeter() << endl;
   cout<<"enter the radius of circle "<<endl;
   cin>>r;
   cir.setradius(r);
   cout << "Total circle Perimeter: " << cir.getPerimeter() << endl;
   return 0;
}


