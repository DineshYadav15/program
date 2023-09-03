//primeFunction.cpp
#include<iostream>
using namespace std;
int n,i,flag=0;
int main()
{

	int prime(int n);
	cout<<"enter any number:";
	cin>>n;
	prime(n);
}
int prime(int n)
{
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"it is prime number";
	}
	else
	{
		cout<<"it is not prime number";
	}
}
