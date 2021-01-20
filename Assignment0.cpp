/*
 * Name - Dustin Brown
 * Class CIS 227 21/WI
 * Assignment - C++ ASSIGNMENT 0
 * Date - 1/20/21
 * Purpose - Review C++ basics
 *
 */

//includes section
#include <iostream>
#include <cmath> //for math functions
#include <iomanip> //for precision


//namespace declarations
using namespace std;

//Global scope variables and constants section
//Inputs
double dUserSideOne, dUserSideTwo, dUserSideThree;

//Outputs
double answer = 0.0;

//function declarations and definitions
// triangle function a2 * b2 = c2
double triangle(double a, double b){
	double c = 0.00;
	double ab = ((a*a) + (b*b));
	c =  sqrt(ab);
	return  c;
}

//trapezoid function ((base1 + base2)/ 2) * h = area
double trapezoid(double baseOne, double baseTwo , double h){
	double ab = baseOne + baseTwo;
	double area = ((ab/2) * h);
	return area;
}

//rectangle volume = length * width * height
double rectangle(double l, double w, double h){
	double volume = l * w * h;
	return volume;
}

//main function
 int main () {
	 //local variables
	 bool bMainLoop = false;
	 char cContinue;
	 char cUserChoice;

	 cout << "***Units Calculator***" << endl;

	 //begin loop for calculator
	 do{
		 //user chooses which formula to use
		 cout << "||'1' for hypotenuse of a triangle || '2'  for area of a trapezoid || '3' for volume of a rectangle ||"<< endl;
		 cin >> cUserChoice;

		 //option 1 -- triangle hypotenuse
		 if (cUserChoice == '1'){
			 cout << "Enter the length of side one:" << endl;
			 cin >> dUserSideOne;
			 cout << "Enter the length of side two:" << endl;
			 cin >> dUserSideTwo;

			 //return hypotenuse
			 answer = triangle(dUserSideOne, dUserSideTwo);
			 cout << "Your hypotenuse is "<< setprecision(3) << answer << " units long." << endl;
		 }

		 //option 2 -- area of trapezoid
		 else if (cUserChoice == '2'){
			 cout << "Enter length of the first base:" << endl;
			 cin >> dUserSideOne;
			 cout << "Enter length of the second base:" << endl;
			 cin >> dUserSideTwo;
			 cout << "Enter the height:" << endl;
			 cin >> dUserSideThree;

			 //return area
			 answer = trapezoid(dUserSideOne, dUserSideTwo, dUserSideThree);
			 cout <<"Your trapezoid's area is " << setprecision(3) << answer << " units squared." << endl;
		 }

		 //option 3 -- volume of rectangle
		 else if (cUserChoice == '3'){
			 cout << "Enter the length:" << endl;
			 cin >> dUserSideOne;
			 cout << "Enter the width: "<< endl;
			 cin >> dUserSideTwo;
			 cout << "Enter the height: " << endl;
			 cin >> dUserSideThree;

			//return volume
			 answer = rectangle(dUserSideOne, dUserSideTwo, dUserSideThree);
			 cout <<"Your rectangle has a volume of " << setprecision(3) << answer << " cubic units. " << endl;
		 }

		 //invalid input
		 else{
			 cout << "Invalid choice, please try again..." << endl;
		 }

		 //prompt user for continue
		 cout << "Would you like to calculate another object?(Y/N)" << endl;
		 cin >> cContinue;
		 if ((cContinue == 'y') || (cContinue == 'Y')){
			 bMainLoop = true;
		 }
		 else{
			 bMainLoop = false;
		 }

	 }while (bMainLoop == true);
	 //end program
	 cout << "Thank you for using our program\n" << "Program has ended." << endl;
	 return 0;

 }

