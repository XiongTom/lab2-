#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int n,m;
	cout<<"the dividend number is ";
	cin>>n;
	cout<<"the divisor number is ";
	cin>>m;
	if (n%m!=0){
		cout<<"the number "<<n<<" can not be evenly divided by "<<m;
	}else{
		cout<<"the number "<<n<<" can be evenly divided by "<<m;
	}
	return 0;
}

