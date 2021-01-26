
/*
 * Assignment_1_Class.cpp
 *
 *  Created on: Jan 24, 2021
 *      Author: Dustin Brown
 *
 *      Class definition cpp file
 */

#include "Assignment_1.h"
#include <iostream>
#include <cmath> //for math functions


 //triangle function -- a2 * b2 = c2
double Area_App::Triangle(double a, double b) {
	double c = 0.00;
	double ab = ((a * a) + (b * b));
	c = sqrt(ab);
	return  c;
}

//trapezoid function -- ((base1 + base2)/ 2) * h = area
double Area_App::Trapezoid(double baseOne, double baseTwo, double h) {
	double ab = baseOne + baseTwo;
	double area = ((ab / 2) * h);
	return area;
}

//rectangle function -- volume = length * width * height
double Area_App::Rectangle(double l, double w, double h) {
	double volume = l * w * h;
	return volume;
}