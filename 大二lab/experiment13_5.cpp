#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class company{
	public:
		int ID;
		double pay;
		double hour;
		void display(void);
		void setdata(int a,double b,double c);
};
void company::display(void){
	cout<<ID<<"   "<<pay<<"   "<<hour<<endl;
}
void company::setdata(int a,double b,double c){
	ID=a;
	pay=b;
	hour=c;
}
int main()
{
	int a=111111;
	int n;
	double b,c;
	cout<<"the number of employers is "<<endl;
	cin>>n;
	cout<<"enter the information of employers"<<endl;
	company employer[n];
	for(int i=0;i<n;i++){
		cin>>a>>b>>c; 
		employer[i].setdata(a,b,c);
	}
	for(int i=0;i<n;i++){
		employer[i].display();
	}
	return 0;
}
