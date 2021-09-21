#include<iostream>
#include<cmath>
#include<cstring>
#include <fstream>
#include <vector>
using namespace std;
vector<string> getl;
void clear(){
	string line,c;
	int i=0,a=0;
	for(i=0;i<getl.size();i++){
		line=getl[i];
		if(line.find("//")!='/n'){
			a=line.find("//");
			if(a==0){
				getl.erase(getl.begin()+i);
				i-=1;
			}else{
				getl[i]=line.substr(0,a);
				
			}
		}
	}
}
int main()
{
	//从文件中读取每一行并且存入vector中 
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
	//处理符号和备注
	 
	return 0;
}

