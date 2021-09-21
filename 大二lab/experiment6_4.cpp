#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
	vector<int>obj;
	int i,a,min,k;
	i=0;
	while(i>=0){
		cin>>a;
		if(a<0){
			break;
		}else{
			obj.push_back(a);
		}
		i++;
	}
	min =obj[0];
	k=0;
	for(int j=i-1;j>=0;j--){
		if(min>=obj[j]){
			min=obj[j];
			k=j+1;
		}
	}
	cout<<k;


	return 0;
}

