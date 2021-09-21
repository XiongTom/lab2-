#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int rotate(int row,int len,int m)
{
	int a;
	if ((len-m)>=0)
	{
		a = len - m;
	}
	else
	{
		a = len + m;
	}
	return a;
	
};

int main()
{
	int r,c,m;
	int n,len1;
	cin>>r>>c>>m;
	int matrix[r][c];
	for(int i = 0;i < r;i++)
	{
		for(int j = 0;j<c;j++)
		{
			cin>>n;
			matrix[i][j]=n;
		}
	}
	int matrix2[r][c];
	for(int i = 0;i < r;i++)
	{
		for(int j = 0;j<c;j++)
		{
			len1 = rotate(i,j,m);
			matrix2[i][len1] = matrix[i][j];
		}
	}
	for(int i = 0;i < r;i++)
	{
		for(int j = 0;j<c;j++)
		{
			cout<<" "<<matrix2[i][j];
		}
		cout<<endl;
	}
	return 0;
}

