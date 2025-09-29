/*
Description: A program to output Hello world 
using a Constructor.
Name: Timothy Rono
Reg no: BCS-05-0431/2023
*/
#include<iostream>
using namespace std;

class MyClass { //the class
	public:
		
	MyClass() {
			cout<<"Hello World!"<<endl;
		}
		
	int addition(){
	int	x =5;
	int	y=12;
		return x + y;
	}	
	
	~MyClass (){
		
	}
};

int main(){
	MyClass myobj;
	myobj.addition();
	
	return 0;
	
}

