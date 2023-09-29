//factorial.cpp
#include<iostream>
using namespace std;
int main()
{
	int n,fact=1;
	cout<<"enter the numbers :";
	cin>>n;
//	while(n>0)
for(;n>0;n--)
	{
			fact=fact*n;
		//	n--;
	}

	cout<<"factorial = "<<fact;
}
