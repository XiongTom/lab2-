#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int i,guess,value;
	srand((unsigned int)(time(NULL)));
	value=rand()%100+1;
	while(i<7){
		cout<<"please enter your number"<<endl;
		cin>>guess;
		if(guess==value){
			cout<<"you win!"<<endl;
			break;
		}else if(guess>value){
			cout<<"the correct number is less than your guess number "<<endl;
			cout<<"you have guessed "<<i+1<<" times"<<endl;
		}else{
			cout<<"the correct number is larger than your guess number"<<endl;
			cout<<"you have guessed "<<i+1<<" times"<<endl;
		}
		i++;
		if(i==7){
		    cout<<"you lose!";
	    }
	}

	return 0;
}

