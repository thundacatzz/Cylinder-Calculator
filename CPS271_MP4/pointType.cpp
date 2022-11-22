#include <iostream>
#include "pointType.h"

// This class is simply a point in the x/y plane.

// This default constructor initializes the point to (0,0).
pointType::pointType()
{
	xCoord = 0;
	yCoord = 0;
}
pointType::pointType(float x, float y)
{
	xCoord = x;
	yCoord = y;
}
// This function allows the user to input the coordinates they want for the point.
void pointType::SetCoords()
{
	std::cout << "Enter value for X coordinate" << std::endl;
	std::cin >> xCoord;
	std::cout << "Enter value for Y coordinate" << std::endl;
	std::cin >> yCoord;
}
// This function prints the coordinates of the point to the console.
void pointType::PrintCoords()
{
	std::cout << "(" << xCoord << ", " << yCoord << ")" << '\n' << std::endl;
}
// These 2 functions return the x or y coordinate of the point.
float pointType::GetXCoord()
{
	return xCoord;
}
float pointType::GetYCoord()
{
	return yCoord;
}