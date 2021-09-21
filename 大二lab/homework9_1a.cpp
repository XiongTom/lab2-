#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Savings {
	public:
		float balance;
		float rate;
		float interest;
		void set(float a,float b);
		void setf(void);
		void out(void);
};
void Savings::set(float a,float b){
	balance=a;
	rate=b;
	interest=balance*(rate/100);
}
void Savings::setf(void){
	balance=0.0;
	rate=0.0;
	interest=0.0;
}
void Savings::out(void){
	cout<<"the balance is "<<balance<<endl;
	cout<<"the rate is "<<rate<<"%"<<endl;
	cout<<"the interest is "<<interest<<endl;
}
int main()
{
	Savings saving;
	float a,b;
	cout<<"please enter the balance and rate "<<endl;
	cin>>a>>b;
	saving.setf();
	saving.set(a,b);
	saving.out();
	return 0;
}

