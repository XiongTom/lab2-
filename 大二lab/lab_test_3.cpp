#include<iostream>
#include<cmath>
#include<cstring>
#include<fstream>
#include<vector> 
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
    vector<string> words;
    int k,i;
    i=0;
    string str[100];
    string mess,mess1,mess2;
    cin>>k;
    char data[1000];
    ofstream outfile;
    outfile.open("text.txt");
    cout << "Writing to the file" << endl;
    while(i<=k){
    	if(i!=0) cout << "Enter student information: ";
        cin.getline(data, 1000);
        outfile << data ;
        if(i!=0)outfile<< endl;
        i++;
	}
    outfile.close();
    ifstream infile("text.txt"); 
    if(!infile.fail()){
        string line; 
        while (getline(infile, line)){
		    words.push_back(line);
        }
	}
	for(int i=0;i<k-1;i++){
    	for(int j=i+1;j<k;j++){
    	    mess1=words[i];
    	    mess2=words[j];
    	    if(bijiao(mess1,mess2))
			{
    	    	mess= words[i];
    	    	words[i]=words[j];
    	    	words[j]=mess;
				}
			}
	    }
	infile.close();
    outfile.open("text.txt");
    i=0;
    while(i<k){
        outfile << words[i]<<endl;
        i++;
	}
	infile.open("text.txt");
	string line;
	while(getline(infile,line)){
		cout<<line<<endl;
	}
	return 0;
}

