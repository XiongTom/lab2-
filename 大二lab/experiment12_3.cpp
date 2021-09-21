#include<iostream>
#include<cmath>
#include<cstring>
#include<sstream>
using namespace std;
class toy{
	public:
		double disc;
		string name,pri,add;
		string get_name(void);
		string price(void);
		string address(void);
		void display(void);
};
string toy::get_name(void){
	return name;
}
string toy::address(void){
	return add;
}
string toy::price(void){
	return pri;
}
void toy::display(void){
	double p;
	stringstream stream;
    string text(pri);
    stream << text;
    stream >> p ;
    stream.clear();
	p = disc*p;
	cout<<"name: "<<get_name()<<" price: "<<price()<<" address: "<<address()<<" after discount the price is: "<<p;
}
int main()
{
	toy toy1;
	cout<<"enter the name ,address,price and the discount"<<endl;
	cin>>toy1.name>>toy1.add>>toy1.pri>>toy1.disc;
	toy1.display();
	return 0;
}

