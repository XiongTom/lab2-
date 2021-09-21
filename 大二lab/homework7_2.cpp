#include<iostream>
#include<cmath>
#include<cstring>
#include <fstream>
#include <iomanip>
using namespace std;
char grade(int a){
	if((a>=90)&(a<=100)){
		return 'A';
	}else if(a>=80){
		return 'B';
	}else if(a>=70){
		return 'C';
	}else if(a>=60){
		return 'D';
	}else{
		return 'F';
	}
}
int main()
{
	double n,e1[20],e2[20],h[20],f[20],fg[20],m;
	string name[20];
	cout<<"the number os student "<<"is "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter the Name"<<endl;
		cin>>name[i];
		cout<<"enter the Exam 1"<<endl;
		cin>>e1[i];
		cout<<"enter the Exam 2"<<endl;
		cin>>e2[i];
		cout<<"enter the Homework"<<endl;
		cin>>h[i];
		cout<<"enter the final exam grade"<<endl;
		cin>>f[i];		
		fg[i]=0.2*e1[i]+0.2*e2[i]+0.35*h[i]+0.25*f[i];
	}
	ofstream outfile;
	outfile.open("grade.docx");
    int i=0;
    outfile <<"Name     Exam 1 Grade     Exam 2 Grade     Homework Grade     Final Exam Grade     Final Grade"<<endl;
    while(i<n){
    	m=name[i].length();
        outfile <<name[i]<<setw(16-m)<<" "<<grade(e1[i])<<setw(15)<<" "<<grade(e2[i])<<setw(15)<<" "<<grade(h[i])<<setw(15)<<" "<<grade(f[i])<<setw(15)<<" "<<grade(fg[i])<<endl;
        i++;
	}
	return 0;
}

