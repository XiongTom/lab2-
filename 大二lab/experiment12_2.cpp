#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class box{
	public:
		double m_a;
		void seta(double a);
		double getvolume(void);
		double getarea(void);
		void display(void);
};
void box::seta(double a){
	m_a=a;
}
double box::getvolume(){
	return pow(m_a,3);
}
double box::getarea(){
	return 6*pow(m_a,2);
}
void box::display(){
	cout<<"the cube side length is "<<m_a<<endl;
	cout<<"the volume is "<<getvolume()<<endl;
	cout<<"the area is "<<getarea();
}
int main()
{
	double a;
	cin>>a;
	box box1;
	box1.seta(a);
	box1.display();
	return 0;
}

