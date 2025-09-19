/*
Name:Timothy Rono
Reg no:BCS-05-0431/2023
DEscription:program to enter a users name and age.

*/

#include<iostream>
using namespace std;

int main()
{
	string name;
	int age;
	
	cout<<"Enter your name: "<<endl;
	cin>>name;
	
	cout<<"Enter your age: "<<endl;
	cin>>age;
	
	cout<<"Hello " <<name<< " You are "<<age<<" years old."<<endl;
	return 0;
}
