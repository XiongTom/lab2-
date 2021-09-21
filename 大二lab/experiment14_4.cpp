#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Person
{
	public:
	   void show();
	   void set(string a, int b,string c){
	   	name=a;
	   	age=b;
	   	gender=c;
	   }
	protected:
		string name;
		int age;
		string gender;
};
class Teacher:public Person{
	public:
		string position;
	void show(){
		cout<<"Name: "<<name<<" age: "<<age<<" gender: "<<gender<<" position "<<position<<endl;
	}
};
class Cadre:public Person{
	public:
		string work,salary;
	void show(){
		cout<<"Name: "<<name<<" age: "<<age<<" gender: "<<gender<<" work: "<<work<<" salary "<<salary<<endl;
	}
};
int main()
{
	int n1,n2;
	cout<<"enter the number of teachers "<<endl;
	cin>>n1;
	cout<<"the number of cadres "<<endl;
	cin>>n2;
	int b[n1+n2];
	string a[n1+n2],c[n1+n2],p[n1],s[n2],w[n2];
	cout<<"enter the information of teachers "<<endl;
	for(int i=0;i<n1;i++){
		cin>>a[i]>>b[i]>>c[i]>>p[i];
	}
	cout<<"enter the information of cadres "<<endl;
	for(int i=0;i<n2;i++){
		cin>>a[i+n1]>>b[i+n1]>>c[i+n1]>>w[i]>>s[i];
	}
	Teacher t;
	Cadre ca;
	for(int i=0;i<n1;i++){
		t.set(a[i],b[i],c[i]);
	    t.position=p[i];
	    t.show();
	}
	for(int i=0;i<n2;i++){
		ca.set(a[i+n1],b[i+n1],c[i+n1]);
		ca.salary=s[i];
		ca.work=w[i];
		ca.show();
	}	
	return 0;
}

