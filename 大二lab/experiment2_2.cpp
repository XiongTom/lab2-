#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int num,num1,i,j;
	cout << " enter the integer: "<<endl;
	cin >> num;
	j = 0;
	num1 = num;
	i = 0;
	if((num > 1 )||(num =1))
	{
		while(j == 0 )
		{
			i = num1;
			j= num1%2;
			num1 = num1/2;
		}
		if (i == 1 && j == 1)
		{
			cout << "true"<<endl;
		}
		else
		{
			j = 0;
		    num1 = i;
		    while(j == 0)
		    {
			    i = num1;
			    j = num1%3;
			    num1 = num1/3;
		    }
		    
		    if (i == 1 && j == 1)
		    {
		    	cout << "true"<<endl;
			}
			else
			{
				j = 0;
		        num1 = i;
		        while(j == 0)
		        {
		        	
			        i = num1;
			        j = num1%5;
			        num1 = num1/5;
		        }
		        if (i == 1 && j == 1)
		        {
			        cout << "true"<<endl;
	            }
	            else
	            {
	            	cout << "false"<<endl;
				}
			}
		} 		
	}
	else
	{
    	cout<<"false"<<endl;
	}
	return 0;
}

