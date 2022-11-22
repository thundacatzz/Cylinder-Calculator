#pragma once
#include "pointType.h"
#include "circleType.h"
// This header contains the member objects and functions for the cylinderType class. They are defined within the cylinderType.cpp file.
class cylinderType
{
	circleType base;
	float height;
public:
	cylinderType();
	cylinderType(float x, float y, float r, float h);
	void SetDimensions();
	void PrintDimensions();
	float GetVolume();
	float GetSurfArea();
};