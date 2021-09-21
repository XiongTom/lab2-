#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Students{
	public:
		double grade[2];
		string name;
		friend int compare(Students student);
		void set(double a,double b);
};
void Students::set(double a,double b){
	grade[0]=a;
	grade[1]=b;
}
int compare(Students student){
	if(student.grade[0]>=student.grade[1]){
		return 0;
	}else{
		return 1;
	}
}
int main()
{
	cout<<"the number of Students "<<endl;
	int n;
	cin>>n;
	Students student;
	double g[n];
	string name[n];
	cout<<"enter the information of students "<<endl;
	for(int i=0;i<n;i++){
		cin>>name[i]>>g[i];
	}
	double k;
	string nm;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			student.set(g[i],g[j]);
			if(compare(student)==1){
				k=g[i];
				g[i]=g[j];
				g[j]=k;
				nm=name[i];
				name[i]=name[j];
				name[j]=nm;
			}
		}
	}
	cout<<"the max grade is "<<g[0]<<"  the student is "<<name[0]<<endl;
	cout<<"the min grade is "<<g[n-1]<<"  the student is "<<name[n-1];
	return 0;
}

