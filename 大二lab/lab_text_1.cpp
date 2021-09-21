#include<iostream>
#include<cmath>
#include<cstring>
#include<fstream> 
using namespace std;
int main()
{
	char chara,ch;
	int num=1;
	ifstream inFile;
	inFile.open("text.txt");
	if (!inFile.fail()){
		while(inFile.get(chara)){
		if((chara==' ' )||(chara=='\n')){
			if((ch!=' ')&&(ch!='\n')){
				num=num+1;
			}
			
		}
		ch=chara;
	}
	}
	cout<<num;
	return 0;
}

