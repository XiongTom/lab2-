#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Elevator
{
 private:
 int elNum; // elevator number
 int currentFloor; // current floor
 int highestFloor; // highest floor
 public:
 elevator(int a, int b, int c); // constructor
 void request(int i);
};
void Elevator::request(int i){
	int k;
	k=currentFloor;
	if((i==currentFloor)||(i>=highestFloor)){
		cout<<"the elevator can not go to the floor"<<endl;
	}else if((i<highestFloor)&&(i>currentFloor)){
		while (i>=k){
			cout<<"the floor now is "<<k<<endl;
			k++;
		}
	}else if((i<highestFloor)&&(i<currentFloor)){
		while (i<=k){
			cout<<"the floor now is "<<k<<endl;
			k--;
		}
	} 
}
Elevator::elevator(int a, int b, int c){
	elNum=a;
	currentFloor=b;
	highestFloor=c;
}
int main()
{
	int a,b,c,i;
	cout<<"enter the number of elevator , the current floor and the hignest floor "<<endl;
	cin>>a>>b>>c;
	cout<<"enter the floor you want to go "<<endl;
	cin>>i;
	Elevator e;
	e.elevator(a,b,c);
	e.request(i);
	return 0;
}

