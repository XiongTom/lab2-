#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int h,money;
	cin>>h;
	if (h<=40){
		money = 12*h;
	} else{
		money = 480+17*(h-40);
	}
	cout<<"the money the people can earn is"<<" $"<<money;
	return 0;
}

