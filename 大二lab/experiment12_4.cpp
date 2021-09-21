#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include <time.h> 
using namespace std;
class Rectangle{
	public:
		float m_length=1;
		float m_width=1;
		float Perimeter(void);
		float Area(void);
		float SetWidth(void);
		void GetWidth(void);
		float SetLength(void);
		void GetLength(void);
};
float Rectangle::Perimeter(void){
	return 2*(m_length+m_width);
}
float Rectangle::Area(void){
	return m_length*m_width;
}
float Rectangle::SetWidth(void){
	float w;
	w=20*rand() / double(RAND_MAX);
	return w; 
}
void Rectangle::GetWidth(void){
	m_width=SetWidth();
}
float Rectangle::SetLength(void){
	float l;
	l=20*rand() / double(RAND_MAX);
	return l;
}
void Rectangle::GetLength(void){
	m_length=SetLength();
}
int main()
{
	srand((unsigned)time(NULL));	
	Rectangle r;
	r.SetLength();
	r.SetWidth();
	r.GetWidth();
	r.GetLength();
	cout<<"length is "<<r.m_length<<"   width is "<<r.m_width<<endl;
	cout<<"the preimeter is "<<r.Perimeter()<<endl;
	cout<<"the area is "<<r.Area();
	return 0;
}

