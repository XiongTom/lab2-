#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	char s[200];
	string c;
	int x[26];
	cin>>s;
    for(int i=0;i<26; i++){
    x[i]=0;
    }
    for(int i=0;i<strlen(s);i++){
    	if(s[i]>='a'&&s[i]<='z'){
    		x[s[i]-'a']++;
		}else if( s[i] >= 'A' && s[i] <= 'Z' ){
            x[s[i]-'A']++;
		}
	}
	for(int i=0;i<26;i++){	
	    c='a'+i;
	    if(x[i]>0){
	    	cout<<"the number of "<<c<<" is "<<x[i]<<endl;
		}
		
	}
	
	return 0;
}

