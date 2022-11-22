#include <iostream>
#include "circleType.h"
#include "pointType.h"
#include "cylinderType.h"

// This class is a cylinder. It contains an element of class type circleType which serves as the cylinder's "base." From all these elements there is functionality to calculate the cylinder's surface area and volume.

// Default constructor.
cylinderType::cylinderType()
{
	circleType base;
	float height = 1;
}
cylinderType::cylinderType(float x, float y, float r, float h)
{
	base = circleType(x, y, r);
	height = h;
}
// This function calls the SetCoords function of the base, which also the SetCoords function of its own center. It then adds functionality for the user to input a number for the height of the cylinder.
void cylinderType::SetDimensions()
{
	float h;
	base.SetCoords();
	std::cout << "Enter value for height" << std::endl;
	std::cin >> h;
	height = h;
}
// This function calls the PrintCoords function of the base, which also calls the printing function of its own center. It then adds the cylinder's height to all of that information.
void cylinderType::PrintDimensions()
{
	base.PrintCoords();
	std::cout << std::endl << "The height of this cylinder is " << height << std::endl;
}
// These functions return the volume or surface area of the cylinder, using the GetArea and GetCirc functions of the cylinder's base element when necessary.
float cylinderType::GetVolume()
{
	return (base.GetArea() * height);
}
float cylinderType::GetSurfArea()
{
	return (base.GetArea() * 2) + (base.GetCirc() * height);
}