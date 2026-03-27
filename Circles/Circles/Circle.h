#pragma once
class Circle
{
public:
	int x;
	int y;
	int xdir;
	int ydir;
	int radius;

	unsigned char GetRed() const { return red; }
	unsigned char GetGreen() const { return green; }
	unsigned char GetBlue() const { return blue; }
	unsigned char GetAlpha() const { return alpha; }

	Circle(unsigned char r = 255, unsigned char g = 0, unsigned char b = 0);

	void Draw();

	void Move();

	void Update();

	void LMB();


private:
	unsigned char red{ 200 };
	unsigned char green{ 50 };
	unsigned char blue{ 150 };
	unsigned char alpha{ 255 };
};