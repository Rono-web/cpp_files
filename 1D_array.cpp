/*
Description: Creating a 1D array called GPA 
Name: Timothy Rono
Regno: BCS-05-0431/2023
*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
 int score[5] = {20,30,40,50,60};
 int i;
 int sum = 0;
 
 //create a file
 ofstream Myfile ("C:\\Users\\TIMO\\OneDrive\\Desktop\\C++\\C++ REPO\\array.txt ");
 
 for(i=4; i>=0; i--){
 
 	cout<<score[i]<<endl;
	 Myfile <<score[i]<<endl;
 	sum += score[i];
 	
 	
 	}
	cout<<"The sum is: "<<sum<<endl;
	cout<<"Average: "<<sum/5<<endl;
	
	//write to a file
	Myfile <<"The sum is: "<<sum<<endl;
	Myfile <<"Average: "<<sum/5<<endl;
	
	//close a file
	Myfile.close();	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 return 0;	
}
