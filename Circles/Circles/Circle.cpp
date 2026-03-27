#include "Framework.h"
#include <stdlib.h>
#include "Circle.h"

Circle::Circle(unsigned char r, unsigned char g, unsigned char b)
{
	radius = rand() % 10 + 2;
	x = rand() % (screenWidth - radius * 2);
	y = rand() % (screenHeight - radius * 2);
	xdir = rand() % 11 - 5;
	ydir = rand() % 11 - 5;

	red = r;
	green = g;
	blue = b;
}

void Circle::Draw()
{
	ChangeColour(red, green, blue, alpha);

	DrawCircle(x, y, radius);
}

void Circle::Move()
{
	x += xdir;
	y += ydir;
}

void Circle::Update()
{
	if (rand() % 100 == 0)
	{
		xdir = rand() % 11 - 5;
		ydir = rand() % 11 - 5;
	}
	if (x<0 || x>screenWidth - radius * 2)
		xdir = -xdir;

	if (y<0 || y>screenHeight - radius * 2)
		ydir = -ydir;
}

void Circle::LMB()
{
	int x, y;

	GetMousePosition(x, y);

	x = x;
	y = y;
}