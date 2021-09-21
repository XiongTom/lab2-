#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int cha(int a,string b){
	int p=0,num=0;
	while(p<a){
		num=0;
		for(int i=0;i<a;i++){
			if((b[p]==b[i])&(p!=i)){
				num+=1;
			}
		}
		if(num==0){
			break;
		}
		p++;
	}
	if(p==a){
		return -1;
	}else{
		return p;
	}	       
}
int main()
{
	int n;
	string s;
	cin>>n;
	cin>>s;
	cout<<cha(n,s);
	return 0;
}


