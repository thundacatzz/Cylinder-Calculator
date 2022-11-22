#pragma once
// This header contains the member objects and functions for the pointType class. They are defined within the pointType.cpp file.
class pointType
{
	float xCoord = 0;
	float yCoord = 0;
public:
	pointType();
	pointType(float x, float y);
	void SetCoords();
	void PrintCoords();
	float GetXCoord();
	float GetYCoord();

};

