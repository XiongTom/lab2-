#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
struct Inventory
{
 char description[100];
 int prodnum;
 int quantity;
 double price;
};
int main()
{
	Inventory description[100];
	description[82].prodnum=4355;
	cout<<description[14].price<<endl;
	return 0;
}

