#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
void level(double a){
	if((a>=90)&(a<=100)){
		cout<<"A";
	}else if(a>=80){
		cout<<"B";
	}else if(a>=70){
		cout<<"C";
	}else if(a>=60){
		cout<<"D";
	}else{
		cout<<"F";
	}
}
int main()
{
	double n,grade[1000];
	int k=0;
	while(1){
		cin>>n;
		if(n>=0){
			grade[k]=n;
			k=k+1;
		}else{
			break;
		}
	}
	double sum,average,m;
	for(int i=0;i<k;i++){
		sum=sum+grade[i];
	}
	average =sum/k;
	cout<<"sum = "<<sum<<"  average = "<<average<<endl;
	for(int i=0;i<k;i++){
		m=grade[i];
		if(grade[i]<average){
			cout<<"*"<<m;
			level(m);
			cout<<endl;
		}else{
			cout<<m;
			level(m);
			cout<<endl;
		}
	}
	return 0;
}

