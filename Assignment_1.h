
/*
 * Assignment_1.h
 *
 *  Created on: Jan 24, 2021
 *      Author: Dustin Brown
 *      Header file for Assignment 1
 */

#ifndef ASSIGNMENT1_H
#define ASSIGNMENT1_H

//class definition for AreaApp class

class Area_App
{
private:
	//no private data fields at this time
public:

	//function declarations

	//triangle function -- a2 * b2 = c2
	double Triangle(double a, double b);

	//trapezoid function -- ((base1 + base2)/ 2) * h = area
	double Trapezoid(double baseOne, double baseTwo, double h);

	//rectangle function -- volume = length * width * height
	double Rectangle(double length, double width, double h);
};
#endif 