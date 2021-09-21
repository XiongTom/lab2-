#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
string panduan(string a){
	string k;
	int flag;
	for(int i=0;i<a.length();i++){
		k=a[i];
		if(k=="."){
			flag=1;
		}
	}
	if(flag==1){
		return ".";
	}else{
		return "1";
	} 
}
string xiaoxie(string a){
	for(int i=0;i<a.length();i++){
		if((a[i]>='A')&&(a[i]<='Z')){
			a[i]=a[i]-'A'+'a';
		}
	}	
	return a;
}
int main()
{
	string a,words[100],b;
	int n=0;
	int det;
	a=" ";
	while(panduan(a)!="."){
		cin>>a;
		words[n]=a;
		n=n+1;
	}
	for(int j=0;j<n;j++){
		if(j==0){
			a=words[j];
			if(a>="a"){
			    det=a[0]-'a';
			    b='A'+det;
			    cout<<b;
			}else{
				cout<<a;
			}
			for(int i=1;i<a.length();i++){
				cout<<a[i];
			}
		}else{	
		    a=words[j];
		    cout<<" "<<xiaoxie(a);
		}
	}
	return 0;
}

