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
    string mess,mess1,mess2;
    cin>>k;
    char data[1000];
    ofstream outfile;
    outfile.open("text.docx");
    cout << "Writing to the file" << endl;
    while(i<=k){
    	if(i!=0) cout << "Enter city data: ";
        cin.getline(data, 1000);
        outfile << data ;
        if(i!=0)outfile<< endl;
        i++;
	}
    outfile.close();
    infile.open("text.docx"); 
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
    outfile.open("text.txt");
    i=0;
    while(i<n){
        cin>>str[i];
        outfile << str[i];
        cout<<"0";
        i++;
	}
	return 0;
}

