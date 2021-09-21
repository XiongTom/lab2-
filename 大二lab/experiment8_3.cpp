#include<iostream>
#include<cmath>
#include<cstring>
#include<fstream>
using namespace std;
void printLine(ifstream&infile,int i){
	if(!infile.fail()){
	    int n=1;
	    string str0bj;
        while(n<=i){
        	str0bj="";
        	getline(infile,str0bj);
        	if(n==i){
        		cout<<str0bj;
			}
			n++;
		}
		
	}	
}	

int main()
{
	ifstream inFile("text.dat");
	printLine(inFile,3);
	return 0;
}

