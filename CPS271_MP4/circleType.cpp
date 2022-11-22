#include <iostream>
#include "circleType.h"
#include "pointType.h"

// This class is a circle. It contains an element of class type pointType as its center and also has a radius, from which is calculated the circumference and the area of the circle.

// Default constructor.
circleType::circleType()
{
	center = pointType();
	radius = 1;
}
circleType::circleType(float x, float y, float r)
{
	center = pointType(x, y);
	radius = r;
}
// This function calls the SetCoords function of the pointType class for its center element and then adds on the funcitonality for the user to input the radius.
void circleType::SetCoords()
{
	float r;
	center.SetCoords();
	std::cout << "Enter value for radius" << std::endl;
	std::cin >> r;
	radius = r;
}
// This function prints the coordinates of the center of the circle and the size of the radius.
void circleType::PrintCoords()
{
	std::cout << "(" << center.GetXCoord() << ", " << center.GetYCoord() << ")" << std::endl << "The radius is : " << radius;
}
// These 2 functions return the area or the radius of the circle.
float circleType::GetArea()
{
	return (3.14159 * radius * radius);
}
float circleType::GetCirc()
{
	return (2 * 3.14159 * radius);
}