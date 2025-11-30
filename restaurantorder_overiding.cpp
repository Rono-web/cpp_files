/*
Description: A program to demonstrate function overloading in a restaurant ordering system.
Name: Timothy Rono
Regno: BCS-05-0431/2023
*/
#include<iostream>
using namespace std;

class RestaurantOrder {
	public:
		void placeOrder(string itemName){
			cout<<"Food item: "<<itemName<<endl;
			
		}
		
		void placeOrder(string itemName, int quantity){
			cout<<"Food item: "<<itemName<<"Food Quantity: "<<quantity<<endl;
		}
		
		void placeOrder(string itemName, int quantity, bool takeout){
			cout<<" Food item: "<<itemName<<"\n Food Quantity: "<<quantity<<"\n Takeout: "<<(takeout ? "yes " : "No")<<endl;
		}
		
};

int main () {
	RestaurantOrder service;
	
	service.placeOrder("Pizza", 2, true);
	
	return 0;
}

