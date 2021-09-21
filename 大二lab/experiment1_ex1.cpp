#include<iostream>
using namespace std;
int main()
{
	int n,s,m;
	cout<<"input a number "<<endl;
	cin>>n;
	s=n;
	m = 0;
	while(s>0){
		m = m*10+s%10;
		s = s/10;
	}
	if(m==n){
		cout<<"true";
	}else{
		cout<<"false";
	}
	
	return 0;
} 
