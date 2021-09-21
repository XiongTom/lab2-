#include<iostream>
#include<cmath>
#include<cstring>
#include <iostream>
#include <list>
using namespace std;
int main()
{
    char key_words[32]={'auto','break','case','char','const','continue','default','do','double','else','enum','extern','float','for','goto','if',
	'int','long','register','return','short','signed','sizeof','static','struct','switch','typedef','union','unsigned','void','volarile','while'};
	cout<<"please enter the file name:"<<endl;
	string file_name;
	cin>>file_name;
	int level;
	cout<<"please enter the level:"<<endl;
	cin>>level;
	ifstream infile; 
    infile.open(file_name);	
    
    stirng line;
	while(true){
    	getline(infile,line);
    	if(line!=EOF){
    		break;
		}
	}
    
    
	return 0;
}

