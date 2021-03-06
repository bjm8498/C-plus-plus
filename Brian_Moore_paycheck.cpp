// ConsoleApplication9.cpp : Defines the entry point for the console application.
// This program takes two numbers (payRate & hours)
// and multiplies them to get grosspay.
// It then calculates net pay by subtracting 15%
/*
1.  The values are returned and printed from the computePaycheck function
payrate and time are inputted via the cin statements, then they are calculated
through the computePaycheck function.  After the calculations, the values then
are brought out in the cout statements in the end after the calculations happen
with the variables.

2.  It is done, the only difference being that I have floats for values instead of
int.

3.  They are passed by reference.  No value is given and they are marked as reference
variables with the & character, thus allowing the mutability for both
gross and net values.
*/
// Brian Moore


#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes 
void printDescription();
void computePaycheck(float, int, float&, float&);

int main()
{
	float payRate;
	float grossPay;
	float netPay;
	int hours;

	cout << setprecision(2) << fixed;
	cout << "Welcome to the Pay Roll Program" << endl;

	printDescription();		// Call to Description function 

	cout << "Please input the pay per hour" << endl;
	cin >> payRate;

	cout << endl << "Please input the number of hours worked" << endl;
	cin >> hours;

	cout << endl << endl;

	computePaycheck(payRate, hours, grossPay, netPay);

	// Fill in the code to output grossPay.  Gross and net are commented out
	// and inputted in the computePaycheck function per assignment.

	//cout << "The gross pay is $" << grossPay << endl;

	//cout << "The net pay is $" << netPay << endl;

	cout << "We hope you enjoyed this program" << endl;

	return 0;
}

//	********************************************************************
//	printDescription
//
//	task:	  This function prints a program description
//	data in:  none
//	data out: no actual parameter altered
//
//	********************************************************************

void printDescription() // The function heading
{
	cout << "************************************************" << endl << endl;
	cout << "This program takes two numbers (payRate & hours)" << endl;
	cout << "and multiplies them to get gross pay " << endl;
	cout << "it then calculates net pay by subtracting 15%" << endl;
	cout << "************************************************" << endl << endl;
}

//	*********************************************************************
//	computePaycheck
//
//	task:	  This function takes rate and time and multiples them to
//	          get gross pay and then finds net pay by subtracting 15%.
//	data in:  pay rate and time in hours worked
//	data out: the gross and net pay
//
//	********************************************************************

void computePaycheck(float rate, int time, float& gross, float& net)
{
	// Fill in the code to find gross pay and net pay
	gross = rate * time;
	net = gross * 0.85;
	cout << "The gross pay is $" << gross << endl;
	cout << "The net pay is $" << net << endl;
}