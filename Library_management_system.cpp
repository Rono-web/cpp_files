/*
CAT TWO
Description: A program for a libaray management system that uses inheritance.
Name: Timothy Rono
Reg no: BCS-05-0431/2023 
*/

#include<iostream>
using namespace std;

//base class
class Person{
	
	protected:
		string name;
		
	public:
		
		void setName(string n){
			name = n;
		}
		
		string getName(){
			return name;
		}
			
};
//Derived clas  one
class LibraryMember: public Person{
		private:
			int memberID;
			int booksBorrowed;
		public:
			LibraryMember(string n, int mID, int bksB){
				setName(n);
				memberID= mID;
				booksBorrowed= bksB;
			}
			
			int getMemberID(){
				return memberID;
			}
			
			int getBooksBorrowed(){
				return booksBorrowed;
			}		
};
//Derived class two
class PremiumMember: public LibraryMember{
	private:
		double membershipfee;
	public:
	PremiumMember(string n, int mID, int bksB, double mFee)	
		:LibraryMember(n, mID, bksB){
		membershipfee= mFee;
	}
	
		double getMembershipFee(){
			return membershipfee;
		}
	
};
//Main function
int main(){
	
	PremiumMember userdetails("Timothy Rono", 12345, 5, 2000);
	
	cout<<"Member's name: "<<userdetails.getName()<<endl;
	cout<<"Member's ID: " <<userdetails.getMemberID()<<endl;
	cout<<"You Borrowed: " <<userdetails.getBooksBorrowed()<<" Books"<<endl;
	cout<<"Membership Fee: $"<<userdetails.getMembershipFee()<<endl;
	return 0;
}
















