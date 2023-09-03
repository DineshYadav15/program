//areaofcircle.cpp
#include<iostream>
using namespace std;
int area(float r)
{
 return(3.14*r*r);	
}
int main()
{
	float r;
	cout<<"enter the radius:";
	cin>>r;
	area( r);
	cout<<"radius"<<area;
}
