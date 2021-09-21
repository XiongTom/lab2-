#include<iostream>
#include<cmath>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
	double a[1000],n[1000],i,j,k, num,sum,p[1000];
	char c,b;
	k=0;
	ifstream infile("numbers.dat");	
	if(!infile.fail()){
		string str;
		getline(infile,str);
		for(int i=0;i<str.length();i++){
			b=str[i];
			if(b==' '){
				while(j<i){
					c=str[j];
					num = (c-'0')*pow(10,i-j-1)+num;
					if(j==i-1){
						a[k]=num;
						k++;
					}
					j++;
				}
			}
		}
	}
	j=0;
	int x=0;
	int y=0;
	while(x<k){
		n[y]=a[x];
		x=x+a[x];
		p[y]=x;
		y++;
	}
	for(int i=0;i<y;i++){
		sum=0;
		for(int j=p[i]+1;j<=n[i];j++){
			sum=sum+a[j];
		}
		cout<<sum/n[i];
	}	
	return 0;
}

