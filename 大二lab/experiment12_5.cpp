#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

class stud{
	public:
	static double sum;
	string sID,sn;
	double score;
	static int n;
	void SetData(string ID,string name,double scores,int num);
	void Disp(void);
	double avg(void);
};
void stud::SetData(string ID,string name,double scores,int num){
	sID=ID;
	sn=name;
	score=scores;
	sum=sum+score;
	n=num;
}
double stud::avg(void){
	return sum/n;
}
void stud::Disp(void){
	cout<<sID<<"  "<<sn<<"  "<<score<<endl;
}
double stud::sum=0;
int stud::n=0;
int main()
{
	string a,b;
	int num;
	double c;
	cout<<"the number of students is "<<endl;
	cin>>num;
	cout<<"enter the information of students"<<endl;
	stud::n=num;
	stud student[num];
	for(int i=0;i<num;i++){
		cin>>a>>b>>c; 
		student[i].SetData(a,b,c,num);
	}
	for(int i=0;i<num;i++){
		student[i].Disp();
	}
	cout<<student[num-1].avg();
	return 0;
}

