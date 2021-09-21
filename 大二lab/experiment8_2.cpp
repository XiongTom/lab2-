#include<iostream>
#include<cmath>
#include<cstring>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
	char ch;
	ifstream inFile;
	inFile.open("text.dat");
	if(inFile.fail()){
		cout<<"fail";
	}
	int i=1;
	while(inFile.get(ch)){
		if(i%2==0){
			cout<<ch;
		}
		i++;
	}	
	return 0;
}

