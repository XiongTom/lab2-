#include<iostream>
#include<cmath>
#include<cstring>
#include <fstream>
#include <vector>
#include <stack>>
using namespace std;
int main()
{
	//���ļ��ж�ȡÿһ�в��Ҵ���vector�� 
	cout<<"please enter the file name:"<<endl;           
	string file_name;                                    
	cin>>file_name;
	int level;
	cout<<"please enter the level:"<<endl;
	cin>>level;
	ifstream file; 
    file.open(file_name);	
    string line;
    if(!file){
    	cout<<"wrong"<<endl;
	}else{
		while(getline(file,line)){
			getl.push_back(line);
		}
		file.close();
	}
	//������źͱ�ע
	 clear();
	  countwords();
	  findswitchcase();
	  findifelse(level);
	return 0;
}
