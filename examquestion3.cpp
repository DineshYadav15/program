/*
Write a program which will implement hierarchical inheritance.   
*/
#include<iostream>
using namespace std;
class Animal
{
	public:
	void eat()
	{
		cout<<"Animal is eating"<<endl;
	}
};
class Dog:public Animal
{
	public:
		void bark()
		{
			cout<<"dog is barking"<<endl;
		}
};
class Cat:public Animal
{
	public:
		void meaws()
		{
			cout<<"cat is milk drinking"<<endl;
		}
};
int main()
{
	Dog s1;
	cout<<"Animal Action"<<endl;
	s1.eat();
	s1.bark();
	cout<<"-------------------------------"<<endl;
		Cat s2;
	cout<<"Animal Action"<<endl;
	s2.eat();
	s2.meaws();
}
