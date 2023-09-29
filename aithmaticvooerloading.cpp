//method overloading 
#include<iostream>
using namespace std;
class airthmatic
{
	public:
		int x,y,z;
		double a,b,c;
		void add(int x,int y)
		{
			cout<<"\n answer1 = "<<x+y;
		}
		void add(int x,int y,int z)
		{
			cout<<"\n answer2 = "<<x+y+z;
		}
		void add(double a,double b)
		{
			cout<<"\n answer3 = "<<a+b;
		}
		void add(double a,double b,double c)
		{
			cout<<"\n answer4 = "<<a+b+c;
		}
		
};
int main()
{
	airthmatic a;
	a.add(1,2);
	a.add(1,2,3);
	a.add(1,4);
	a.add(1,3,5);
}
