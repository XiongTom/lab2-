#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
struct Employees
{ 
 char staff[50];
 string name;
 int age;
 int year;
 int number;
 double wage;
};
int main()
{
	Employees emp[50];
	cout<<"the name : "<<emp[24].name<<"the year: "<<emp[24].year<<endl;
	for(int i =0;i<50;i++){
		emp[i].wage=emp[i].wage+emp[i].year*0.5;
	}
	return 0;
}

