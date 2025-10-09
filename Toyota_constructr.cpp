/*
Description: A program to output details of a Toyota car using constructor and a destructor
Name: Timothy Rono
Reg no: BCS-05-0431/2023
*/

#include<iostream>
using namespace std;

class Car{

private:
	string brand;
	string model;
	float price;
	int mileage;
public:
display.Car(string a, string b, float c, int d){
	brand = a;
	model = b;
	price = c;
	mileage = d;
}

~Car(){
	cout<<"BUY NOW!"<<endl;
}	
		
};

int main(){

Car::car1("Toyota", "Corolla", 20000, 5000);
 
cout<<car1.brand<<" "<<car1.model<<" "<<car1.price<<" "<<car1.mileage<<"\n";

return 0;
}
