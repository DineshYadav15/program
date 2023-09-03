//area of rectangle in inline function
#include<iostream>
using namespace std;
int area(int l,int w)
{
	return(l*w);
}
int main()
{ 
	int l,w,ans;
	cout<<"enter any numbers:";
	cin>>l>>w;
ans=area(l,w);
	cout<<"Rectangle :"<<ans;
}
