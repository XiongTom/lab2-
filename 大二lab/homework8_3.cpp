#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	string str,a,word,n[10];
	int k=0;
	getline(cin,str);
	for(int i=0;i<str.length();i++){
		a=str[i];
		if(a==" "){
			k++;
		}else{
			n[k]=n[k]+a;
		}
	}
	for(int i=0;i<5;i++){
		cout<<n[i*2+1]<<" "<<n[2*i]<<endl;
	}
	return 0;
}

