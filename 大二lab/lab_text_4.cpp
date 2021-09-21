#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Person
{
	public:
	   void show();
	protected:
		string name;
		int age;
		string gender;
};
class Teacher:public Person{
	public:
		string position;
	void set(string a, int b,string c,string d){
	   	name=a;
	   	age=b;
	   	gender=c;
	   	position=d;
	}
	void show(){
		cout<<"Name: "<<name<<" age: "<<age<<" gender: "<<gender<<" position "<<position<<endl;
	}
	
};
class Student:public Person{
	public:
		string studentNo,classNo;
	void set(string a, int b,string c,string d,string e){
	   	name=a;
	   	age=b;
	   	gender=c;
	   	studentNo=d;
	   	classNo=e;
	}
	void show(){
		cout<<"Name: "<<name<<" age: "<<age<<" gender: "<<gender<<" student no "<<studentNo<<" class no "<<classNo<<endl;
	}
};
void showPerson(Person person){
	person.show();
}
int main()
{
	int n1,n2;
	n1=1;
	n2=10;
	int b[n1+n2];
	string a[n1+n2],c[n1+n2],p[n1],cl[n2],id[n2];
	cout<<"enter the information of teachers "<<endl;
	for(int i=0;i<n1;i++){
		cin>>a[i]>>b[i]>>c[i]>>p[i];
	}
	cout<<"enter the information of students"<<endl;
	for(int i=0;i<n2;i++){
	  cin>>a[i+n1]>>b[i+n1]>>c[i+n1]>>id[i]>>cl[i];
	}
	Teacher teacherWang;
	Student student[10];
	for(int i=0;i<n1;i++){
		teacherWang.set(a[i],b[i],c[i],p[i]);
	    teacherWang.position=p[i];
	    teacherWang.show();
	}
	Person *p_students;
	for(int i=0;i<10;i++)
		{
			p_students=&student[i];
			(p_students)->show();
		} 
	return 0;
}

