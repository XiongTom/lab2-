#include<iostream>
#include<cmath>
#include<cstring>
 #include<iomanip>
 using namespace std;
struct point
{
    float a[3];
    float b[3];
};
int main()
{
    point c;
    point out;
    int i;
    cout<<"Enter triangle vertices:"<<endl;
    for(i=0;i<=2;i++) 
        cin>>c.a[i]>>c.b[i];
    out.a[0]=(c.a[0]+c.a[1])/2;
    out.b[0]=(c.b[0]+c.b[1])/2;
    out.a[1]=(c.a[1]+c.a[2])/2;
    out.b[1]=(c.b[1]+c.b[2])/2;
    out.a[2]=(c.a[2]+c.a[0])/2;
    out.b[2]=(c.b[2]+c.b[0])/2;
    cout<<"Midpoint triangle verts:"<<endl;
	for(i=0;i<=2;i++){
    	cout<<setiosflags(ios::fixed)<<setprecision(1)<<out.a[i]<<' '<<setiosflags(ios::fixed)<<setprecision(1)<<out.b[i]<<endl;
	}
    
}

