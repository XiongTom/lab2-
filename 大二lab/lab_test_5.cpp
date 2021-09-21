#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<algorithm>
using namespace std;
class Cube
{
	private:
		static double total_area;
		static double total_volume;
		double side_length;
	public:
		Cube(double s=10)
			{
				side_length=s;
				total_area+=s*s*6;
				total_volume+=s*s*s;
			}
		void showCube()
		{
			cout<<"side length="<<side_length<<endl;
		}
		void setCube()
		{
			double ss;
			cout<<"input a new side length value:";
			cin>>ss;
			total_area+=ss*ss*6-side_length*side_length*6;
			total_volume+=ss*ss*ss-side_length*side_length*side_length;
			side_length=ss;
		}
		static void totalArea()
		{
			cout<<total_area<<endl;
		}
		static void totalVolume()
		{
			cout<<total_volume<<endl;
		}
};
double Cube::total_area=0;
double Cube::total_volume=0;
int main()
{
	Cube a(3);
	Cube::totalArea();
	Cube::totalVolume();
	return 0;
}

