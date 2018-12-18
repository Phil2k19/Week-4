Class : COP1334-2924
Assignment: page 150, Problem 14
Description: Pizza Slice: Joes pizza palace needs a program to calculate the number of slices a pizza 
of any size can be divided into. The program should perform the following steps:
A) Ask the user for the diameter of the pizza in inches.
B) Calculate the number of slices that may be taken from the pizza of the size if each slice has an area of 14.125
square inches.
C) Display a message telling the number of slices. (Area = Pi * r * r)

Extra Stuff:
a. One .cpp file has the  CelciusToFahrenheit function.
b. One .cpp file has the  FahrenheitToCelsius function.
c. the file containing main() which will:
1. prompt the user for the temperature in celsius and print the corresponsing temperature in fahrenheit returned 
from calling  CelciusToFahrenheit
2.  prompt the user for the temperature in fahrenheit and print the corresponsing temperature in celsius returned
from calling  FahrenheitToCelsius
*/ 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Functions.h"

int main()
{
	double diameter;
	const double PI = 3.14159;
	double radius;
	double Fahrenheit = 0;
	double Celcius = 0;


	cout << " Enter the diameter of your pizza in inches?\n";
	cin >> diameter;
	radius = diameter / 2;
	double area = PI * radius * radius;
	cout << " The area of your pizza is: " << area << endl;
	cout << " The number of slices available are : " << area / 14.125 <<endl;
	//Fahrenheit and Celcius section
	//First celcius to fahrenheit, accepts formal parameter of double.
	cout << "Enter temperature in Celcius to be converted to Fahrenheit: \n";
	cin >> Celcius;
	cout << "The Celcius value in Fahrenheit is: " << CelciusToFahrenheit(Celcius) << endl;
	cout << "Enter temperature in fahrenheit to be converted to celcius: \n";
	cin >> Fahrenheit;
	cout << "The Fahrenheit value in Celcius is: " << FahrenheitToCelcius(Fahrenheit) << endl;
	return 0;
}
