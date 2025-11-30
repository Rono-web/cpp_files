/*
Description: A program to demonstrate overloading in a Banking Loan system.

*/
#include<iostream>
using namespace std;
class LoanProcessing {
	
	public:
	 
		void processLoan(int amount){
			cout<<"The Loan amount is: "<<amount<<endl;
		}
		
		void processsLoan(double amount, double interestRate){
			cout<<"Loan amount is: "<<amount<<"\n Interest Rate is: "<<interestRate<<endl;
		}
		
		void processLoan(string customerName, int amount, int duration){
			cout<<"Customer Name is: "<<customerName<<"\n The Amount is: "<<amount<<"\n The Duration is: "<<duration<<endl;
		}	
};

int main (){
	LoanProcessing L1;
	L1.processLoan(10000);
	return 0;
}
 
