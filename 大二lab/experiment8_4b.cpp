#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int bijiao(string x,string y){
	int n=0;
	while(x[n]==y[n]){
		n++;
	}
	return x[n]>y[n];
}
int main()
{
	ifstream infile("text.docx"); 
    if(!infile.fail()){
	    int j=0;
		char ch;
        while(j<n){
        	str0bj="";
        	getline(infile,str0bj);
        	str[j]=str0bj;
			j++;
		}
		for(int i=0;i<n-1;i++){
    	    for(int j=0;j<n;j++){
    	    	mess1=str[i];
    	    	mess2=str[2];
    	    	if(bijiao(mess1,mess2)){
    	    		mess = str[i];
    	    		str[i]=str[j];
    	    		str[j]=mess;
    	    		cout<<"1 ";
				}
			}
	    }
	}
	infile.close();
    outfile.open("text.docx");
    i=0;
    while(i<n){
        cin>>str[i];
        outfile << str[i];
        cout<<"0";
        i++;
	}
	return 0;
}

