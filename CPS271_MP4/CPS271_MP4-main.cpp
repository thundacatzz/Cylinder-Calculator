#include <iostream>
#include "pointType.h"
#include "circleType.h"
#include "cylinderType.h"

// This program receives user input and calculates various geometric shapes and x/y coordinates based on that input.
int main()
{
	// These variables are declared here because they throw an error when declared inside the switch.
	char decision = 'x';
	char whatPrint = 'x';
	pointType point;
	circleType circle;
	cylinderType cylinder;
	
	// This loop allows the user to experiment with each feature as much as they'd like and exit when they're finished.
	while (true)
	{
		std::cout << '\n' << "Enter the character corresponding to the feature you would like to test. P for point, C for circle, Y for cylinder, R to print data of one of your previous objects, or Q to quit." << '\n';
		std::cin >> decision;
		switch (decision)
		{
		case 'P':
			std::cout << "make a point" << '\n' << std::endl;
			point.SetCoords();
			std::cout << "This point's coordinates are: ";
			point.PrintCoords();
			break;
		case 'C':
			std::cout << "make a circle" << '\n' << std::endl;
			circle.SetCoords();
			std::cout << "This circle's center is at: ";
			circle.PrintCoords();
			std::cout << std::endl << "The area of this circle is " << circle.GetArea() << std::endl << "The circumference of this circle is " << circle.GetCirc() << '\n' << std::endl;
			break;
		case 'Y':
			std::cout << "make a cylinder" << '\n' << std::endl;
			cylinder.SetDimensions();
			std::cout << "The center of this cylinder's base is at: ";
			cylinder.PrintDimensions();
			std::cout << std::endl << "The surface area of this cylinder is " << cylinder.GetSurfArea() << std::endl << "The volume of this cylinder is " << cylinder.GetVolume();
			break;
		// This case allows the user to revisit and print out the data for the objects they've provided input for so far.
		case 'R':
			std::cout << "Enter the character corresponding to the object whose data you'd like to print to the console. P for point, C for circle, Y for cylinder, or Q to go back to the first step." << '\n';
			std::cin >> whatPrint;
			switch (whatPrint)
			{
			case 'P':
				std::cout << "This point's coordinates are: ";
				point.PrintCoords();
				break;
			case 'C':
				std::cout << "This circle's center is at: ";
				circle.PrintCoords();
				std::cout << std::endl << "The area of this circle is " << circle.GetArea() << std::endl << "The circumference of this circle is " << circle.GetCirc() << '\n' << std::endl;
				break;
			case 'Y':
				std::cout << "The center of this cylinder's base is at: ";
				cylinder.PrintDimensions();
				std::cout << std::endl << "The surface area of this cylinder is " << cylinder.GetSurfArea() << std::endl << "The volume of this cylinder is " << cylinder.GetVolume();
				break;
			case 'Q':
				break;
			default:
				break;
			}
			break;
		case 'Q':
			return 0;
		default:
			std::cout << decision << " is not a valid choice. Enter P, C, Y, or Q to quit.";
			break;
		}
	}
}