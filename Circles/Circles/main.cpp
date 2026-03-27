/*
Circle Drawing start code for Week 9
*/

#include "Framework.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "Circle.h"

// Global variables - do not rename them, feel free to change values though

// Screen dimensions
int screenWidth{ 800 };
int screenHeight{ 600 };

// Delay to slow things down (needed for Windows but does nothing much on Linux)
int timeDelayMS{ 10 };

using namespace std;

// Declare a Circle structure


int main()
{
	// Seed the random
	srand((unsigned)time(0));

	// Create a vector container to hold our circles
	vector<Circle> circleVector;

	// Create a circle and add it to our vector
	Circle newCircle(200, 50, 150);			     //Changes the colour of the balls (RGB)

	circleVector.push_back(newCircle);

	while (UpdateFramework())
	{
		// Loop through all circles in the vector
		for (auto &p : circleVector)
		{
			// Set the draw colour
			// Draws a circle at x, y

			p.Draw();

			p.Move();

			p.Update();

			if (IsButtonPressed(EButton::eLeft))
			{
				p.LMB();
			}
		}
		//Right spawns in new balls for as long as it is pressed
		if (IsButtonPressed(EButton::eRight))
		{
			Circle newCircle(250, 50, 150);
			circleVector.push_back(newCircle);
		}
	}
	return 0;
}
