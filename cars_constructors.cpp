/*
Description: A program to show the brand , model and year of cars using constructors
inside the class.
Name: Timothy Rono
Reg no: BCS-05-0431/2023
*/

#include<iostream>
using namespace std;

class Car{
	
	public:
		
		string brand;
		string model;
		int year;
		
	Car(string x, string y, int z){
	
		brand = x;
		model = y;
		year = z;	
}

	~ Car(){
	
	cout<<"BUY NOW!"<<endl;
	}

};

int main(){
	
	Car obj1("BMW", "M5", 2024);
	Car obj2("Porsche", "GT3-RS", 2025);
	Car obj3("Toyota", "Probox", 2023);
	
	cout<< obj1.brand <<" " <<obj1.model<<" "<<obj1.year<<"\n";
	cout<< obj2.brand <<" " <<obj2.model<<" "<<obj2.year<<"\n";
	cout<< obj3.brand <<" " <<obj3.model<<" "<<obj3.year<<"\n";
	return 0;
}
