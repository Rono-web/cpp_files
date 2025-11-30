/*
Description: 2D Array
Name: Timothy Rono
Regno:BCS-05-0431/2023
*/
#include<iostream>
#include<fstream>
using namespace std;

int main() {
	
	int i,j;
	int sum = 0;
	
//create file
ofstream MyFile("C:\\Users\\TIMO\\OneDrive\\Desktop\\C++\\C++ REPO\\array_2D.txt");

//Declare and initialize
int score[2][3] = {
	{20, 30, 40},
	{50, 60, 70}
};

//for(start, stop, step)
for(i=0;i<2;i++){
	for(j=0;j<3;j++){
		cout<<score[i][j]<<endl;
		sum +=score[i][j];
		MyFile<<score[i][j]<<endl;
	}
}
	
cout<<"Printed the array successfully"<<endl;
cout<<"The sum is: "<<score[i][j]<<endl;
cout<<"Average: "<<sum/6<<endl;

//write to file
MyFile<<"Printed the array successfully"<<endl;
MyFile<<"The sum is: "<<score[i][j]<<endl;
MyFile<<"Average: "<<sum/6<<endl;
//close file
MyFile.close();	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
