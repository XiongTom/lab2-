#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
struct Students{
	string ID;
	double grade;
	int money;
};
int main()
{	
	int N,K;
	double G;
	cin>>N>>G>>K;
	Students student[N];
	for(int i=0;i<N;i++){
		cin>>student[i].ID>>student[i].grade;
	}
	double k;
	string id;
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(student[j].grade>student[i].grade){
				k=student[i].grade;
				student[i].grade=student[j].grade;
				student[j].grade=k;
				id=student[i].ID;
				student[i].ID=student[j].ID;
				student[j].ID=id;
			}
		}
	}
	for(int i=0;i<N;i++){
		if(student[i].grade>=G){
			student[i].money=50;
		}else if(student[i].grade>=60){
			student[i].money=20;	
		}else{
			student[i].money=0;
		}
	}
	int tm=0;
	for(int i=0;i<N;i++){
		tm=student[i].money+tm;
	}
	cout<<tm<<endl;
	int level=1;
	int t=1;
	int i=0;
	while(level<=K){
		if(i==0){
			cout<<level<<" "<<student[i].ID<<" "<<student[i].grade<<endl;
			i++;
		}else{
			if(student[i].grade==student[i-1].grade){
				cout<<level<<" "<<student[i].ID<<" "<<student[i].grade<<endl;
				t++;
				i++;
			}else{
				level=level+t;
				if(level<=K){
				    cout<<level<<" "<<student[i].ID<<" "<<student[i].grade<<endl;
				    t=1;
				    i++;
				}else{
					break;
				}
				
			}
		}
	}
	return 0;
}

