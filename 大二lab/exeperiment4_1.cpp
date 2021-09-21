#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int n,result,i;
	cin>>n;
	result = 1;
	for(i=0;i<n;i++){
		result = result*2;
	}
	cout<<result;
	return 0;
}

