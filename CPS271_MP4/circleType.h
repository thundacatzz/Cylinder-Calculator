#pragma once
#include "pointType.h"
// This header contains the member objects and functions for the circleType class. They are defined within the circleType.cpp file.
class circleType
{
	pointType center;
	float radius = 1;
public:
	circleType();
	circleType(float x, float y, float r);
	void SetCoords();
	void PrintCoords();
	float GetArea();
	float GetCirc();

};

