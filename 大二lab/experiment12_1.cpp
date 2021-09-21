#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
const double eps = 1e-6;
class tri{
  public:
    double a1,a2,a3;
    bool check(void);
	double C(void);
	double A(void);
	void output(void);
	void set(double a1,double a2,double a3);
};
bool tri::check(void){
	if((a1+a2>a3+eps)&&(a1+a3>a2+eps)&&(a2+a3>a1+eps)){
		return true;
	}else{
		return false;
	}
}
double tri::C(void){
	double c;
	c=a1+a2+a3;
	return c;
}
double tri::A(void){
	double s,p;
	p=(a1+a2+a3)*(a1+a2-a3)*(a1+a3-a2)*(a2+a3-a1);
	s=0.25*pow(p,0.5);
	return s;
}
void tri::set(double a,double b,double c){
	a1=a;
	a2=b;
	a3=c;
}
void tri::output(void){
	if((check())==true){
		cout<<a1<<" "<<a2<<" "<<a3<<endl;
		cout<<"perimeter  is "<<C()<<endl;
		cout<<"area is "<<A();
	}else{
		cout<<"it is not a tirangle";
	}
}
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	tri t;
	t.set(a,b,c);
	t.output();
	return 0;
}

