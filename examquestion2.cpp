/*
2.Create class product, take data members as product_id , 
product_name ,  manufacturing_date , and price. 
Write constructor which will give default values to the object.
 Write one parameterised constructor. 
Create 3 objects and print values of 3 objects
*/
#include<iostream>
using namespace std;
class product
{
	private:
	    int product_id;
		string product_name;
		int manufacturing_date;
		double price;
	public:
		product()
		 {
		 	product_id=0;
		 	product_name=" ";
		 	manufacturing_date=0;
		 	price=0.0;
		 }
			product(int product_id,string product_name,
			int manufacturing_date,double price)
		 {
		 this->product_id=product_id;
		 this->product_name=product_name;
		 this->manufacturing_date=manufacturing_date;
		 this->price=price;
		 }
		 void displayproduct()
		 {
		 	cout << "Product ID: " << product_id << endl;
            cout << "Product Name: " << product_name << endl;
            cout << "Manufacturing Date: " << manufacturing_date << endl;
            cout << "Price: $" << price <<endl;
		 }
	};

int main() {
    // Create three Product objects
    product s1;
	s1.displayproduct();
    product s2(101, "Laptop", 2023-10-04, 999.99);
	 s2.displayproduct();
    product s3(102, "Smartphone", 2023-10-04, 599.99);
	s3.displayproduct();

    // Print values of the three objects
    
}
