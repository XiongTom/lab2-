#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Student{
	public:
		int ID;
		double grade;
		void display(void);
		void setdata(int a,double b);
};
void Student::display(void){
	cout<<ID<<"   "<<grade<<endl;
}
void Student::setdata(int a,double b){
	ID=a;
	grade=b;
}
int main()
{
	int a=111111;
	int n;
	double b=0.0;
	cout<<"the number of students is "<<endl;
	cin>>n;
	cout<<"enter the information of students"<<endl;
	Student student[n];
	for(int i=0;i<n;i++){
		cin>>a>>b; 
		student[i].setdata(a,b);
	}
	for(int i=0;i<n;i++){
		student[i].display();
	}
	return 0;
}

