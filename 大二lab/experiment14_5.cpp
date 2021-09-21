#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Animal{
	private:
		string name;
		double weight;
		
	public:
		void who(){
    		cout<<"Name: "<<name<<" weight: "<<weight<<endl;
    	}
		void set(string a, double w){
			name=a;
			weight=w;
		}
};
class Lion:public Animal{
	public:
};
class Aardvark:public Animal{
	public:
};
int main()
{
	Lion lion;
	Aardvark ard;
	int n1,n2;
	cout<<"the number of lion "<<endl;
	cin>>n1;
	cout<<"the number of aardvark "<<endl;
	cin>>n2;
	string n[n1+n2];
	int w[n1+n2];
	cout<<"enter the information of lion "<<endl;
	for(int i=0;i<n1;i++){
		cin>>n[i]>>w[i];
	}
	cout<<"enter the information of aardvark "<<endl;
	for(int i=0;i<n2;i++){
		cin>>n[i+n1]>>w[i+n1];
	}	
	for(int i=0;i<n1;i++){
		lion.set(n[i],w[i]);
	    lion.who();
	}
	for(int i=0;i<n2;i++){
		ard.set(n[i+n1],w[i+n1]);
	    ard.who();
	}
	return 0;
}

