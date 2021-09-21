#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
char *mystrcat (char *strDest, const char *strSrc){
	int len1,len2;
	len1=strlen(strDest);
	len2=strlen(strSrc);
	for(int i=0;i<len2;i++){
		if(strSrc[i]!='\0'){
			strDest[i+len1]=strSrc[i];
		}
	}

	return 0;
}
int main()
{
	char a[200]=" ";
    char b[200]=" ";
    cin>>a;
    cin>>b;
	mystrcat(a,b);
	for(int i=0;i<strlen(a);i++){
		cout<<a[i];
	}
	return 0;
}

