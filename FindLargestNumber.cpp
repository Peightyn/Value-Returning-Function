// FindLargestNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Name: Peightyn Boyd
//Date: 10/17/2022
//Program Title: FindLargestNumber
//Program Description: Using Value-Returning Functions to find the largest Number of three numbers. 

//Preprocessor directives
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std; 

//Constant Declarations 

//Function Declarations/Prototypes - must be placed before main, so that program will compile (function is defined below main).
double larger(double x, double y); 

double compareThree(double x, double y, double z);




int main()
{
	//Variable Declarations 
	double num1, num2, num3, answer; 

	//Collect Two Numbers from the User 
	cout << "Find the Largest of Three Numbers" << endl << endl; 
	cout << "Enter Number 1: "; 
	cin >> num1; 
	cout << "Enter Number 2: "; 
	cin >> num2; 
	cout << "Enter Number 3: ";
	cin >> num3;

	answer = compareThree(num1, num2, num3); 
	

	//Output Results 
	cout << "The Largest of the Three Numbers you entered is: " << answer << endl;


	return 0; 
}

//Function Definitions

double larger(double x, double y)
{
	double max; //local variable to store largest value

	if (x >= y) //Test to Determine which Value is Largest 
		max = x;
	else
		max = y; 

	return max; //Return the Largest Value to the Main Program 
}

double compareThree(double x, double y, double z)
{
	
	return larger(x, larger(y,z)); //Recalling the function twice, first between x and y, and then secondly y and z
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
