/*
	GPF Week 6 - Maze Start Code
*/

#include <iostream>
#include <vector>
#include <time.h>
#include <stdio.h>
#include <fstream>

#include "Framework.h"
using namespace std;

// Screen dimensions
int gScreenWidth{ 800 };
int gScreenHeight{ 600 };

// Delay to slow things down
int gTimeDelayMS{ 100 };

// Maze size as constants
constexpr int kMazeColumnsX{ 20 };
constexpr int kMazeRowsY{ 20 };

/*
	2 Dimensional Arrays
	You can think of these as being an array of arrays
	
	The maze has kMazeColumnsX columns across (20 by default) represented by an array
	We then have kMazeRowsY (20) of these arrays, one for each row
	
	Columns and rows can be confusing so we tend to prefer working with x and y
	x is the horizontal axis (columns) across and y is the vertical axis (rows) down.

	Each single item is called a cell. 
	
	E.g. to output the value of the cell at 16 X (column 16) and 1 Y (row 1) we would write:
	cout << map[1][16] << endl; // outputs G
*/

char map[kMazeRowsY][kMazeColumnsX] = {
	// 20 columns (x axis) by 20 rows (y axis)
	// X0   X1   X2   X3   X4   X5   X6   X7   X8   X9   X10  X11  X12  X13  X14  X15  X16  X17  X18  X19 
	{ 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W' },	//Y0
	{ 'W', '.', '.', '.', '.', 'W', '.', '.', '.', 'W', 'W', '.', '.', '.', '.', 'W', 'G', '.', '.', 'W' },	//Y1
	{ 'W', '.', 'W', 'W', 'W', 'W', 'W', 'W', '.', 'W', '.', '.', 'W', 'W', 'W', 'W', 'W', 'W', '.', 'W' },	//Y2
	{ 'W', '.', 'W', '.', '.', '.', 'W', '.', '.', 'W', '.', 'W', 'W', '.', 'W', '.', '.', '.', '.', 'W' },	//Y3
	{ 'W', '.', 'W', '.', 'W', '.', 'W', '.', 'W', 'W', '.', 'W', 'W', '.', 'W', 'W', 'W', '.', 'W', 'W' },	//Y4
	{ 'W', '.', 'W', '.', 'W', '.', '.', '.', '.', '.', '.', '.', 'W', '.', 'W', '.', '.', '.', '.', 'W' },	//Y5
	{ 'W', '.', 'W', '.', 'W', 'W', 'W', '.', '.', 'W', 'W', '.', 'W', '.', 'W', '.', 'W', '.', '.', 'W' },	//Y6
	{ 'W', '.', 'W', '.', 'W', '.', 'W', 'W', 'W', 'W', 'W', '.', 'W', '.', 'W', '.', 'W', 'W', 'W', 'W' },	//Y7
	{ 'W', '.', '.', '.', '.', '.', '.', '.', '.', '.', 'W', '.', '.', '.', 'W', '.', '.', '.', '.', 'W' },	//Y8
	{ 'W', '.', 'W', '.', 'W', '.', 'W', 'W', '.', 'W', 'W', 'W', '.', 'W', 'W', 'W', 'W', '.', 'W', 'W' },	//Y9
	{ 'W', '.', 'W', 'W', 'W', 'W', 'W', 'W', '.', 'W', 'W', 'W', '.', 'W', '.', 'W', 'W', '.', 'W', 'W' },	//Y10
	{ 'W', '.', '.', '.', '.', 'W', '.', '.', '.', 'W', 'W', '.', '.', '.', '.', 'W', '.', '.', '.', 'W' },	//Y11
	{ 'W', '.', 'W', 'W', 'W', 'W', 'W', 'W', '.', '.', '.', '.', 'W', '.', 'W', 'W', 'W', 'W', '.', 'W' },	//Y12
	{ 'W', '.', 'W', '.', '.', '.', 'W', '.', '.', 'W', 'W', '.', 'W', '.', 'W', '.', '.', '.', '.', 'W' },	//Y13
	{ 'W', '.', 'W', '.', 'W', '.', 'W', '.', 'W', 'W', 'W', '.', 'W', '.', 'W', '.', 'W', 'W', 'W', 'W' },	//Y14
	{ 'W', '.', 'W', '.', 'W', '.', '.', '.', '.', '.', 'W', '.', 'W', '.', 'W', '.', '.', '.', 'W', 'W' },	//Y15
	{ 'W', '.', 'W', '.', 'W', 'W', 'W', '.', '.', 'W', 'W', '.', 'W', '.', '.', '.', 'W', '.', '.', 'W' },	//Y16
	{ 'W', '.', 'W', '.', 'W', '.', 'W', 'W', 'W', 'W', '.', '.', 'W', 'W', 'W', '.', 'W', 'W', '.', 'W' },	//Y17
	{ 'W', 'P', '.', '.', '.', '.', '.', '.', '.', 'W', '.', '.', '.', '.', '.', '.', '.', '.', '.', 'W' },	//Y18
	{ 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W' },	//Y19
};

bool CanMoveThere(int col, int row)
{
	if (map[row][col] == 'W')
		return false;
	return true;
}

void DrawMap()
{
	int cellWidth = gScreenWidth / kMazeColumnsX;
	int cellHeight = gScreenHeight / kMazeRowsY;

	int topLeftY = 0;
	for (int row = 0; row < kMazeRowsY; row++)
	{
		int topLeftX = 0;
		for (int col = 0; col < kMazeColumnsX; col++)
		{
			switch (map[row][col])
			{
			case 'W':
				ChangeColour(0, 0, 0);
				break;
			case '.':
				ChangeColour(255, 255, 255);
				break;
			case 'P':
				ChangeColour(0, 0, 255);
				break;
			case 'G':
				ChangeColour(255, 0, 0);
				break;
			default:
				ChangeColour(254, 1, 154);
				break;
			}

			DrawRectangle(topLeftX, topLeftY, cellWidth, cellHeight);
			topLeftX += cellWidth;
		}
		topLeftY += cellHeight;
	}
}

void FindPlayer(int& playerRow, int& playerCol)
{
	bool found = false;
	for (int row = 0; row < kMazeRowsY && !found; row++) {
		for (int col = 0; col < kMazeColumnsX; col++) {
			if (map[row][col] == 'P') {
				playerRow = row;
				playerCol = col;
				found = true;
				break;
			}
		}
	}

	// Did we find a player anywhere?
	// If not, exit.
	if (!found) {
		cout << "It appears that there is no player - Oooops!!" << endl;
	}
}

void FindFreeCell(int& row, int& col)
{
	do {
		row = rand() % kMazeRowsY;
		col = rand() % kMazeColumnsX;
	} while (!CanMoveThere(col, row));
}


int main()
{
	//find the coordinate of the player
	int playerRow;
	int playerCol;

	FindPlayer(playerRow, playerCol);

	StartClock();

	while (UpdateFramework())
	{
		DrawMap();

		map[playerRow][playerCol] = '.';

		EKeyPressed key = GetLastKeyPressed();
		switch (key)
		{
		case EKeyPressed::eNone:
			break;
		case EKeyPressed::eLeft:
			if (CanMoveThere(playerCol - 1, playerRow))
				playerCol--;

			break;
		case EKeyPressed::eUp:
			if (CanMoveThere(playerCol, playerRow - 1))
				playerRow--;
			break;
		case EKeyPressed::eRight:
			if (CanMoveThere(playerCol + 1, playerRow))
				playerCol++;
			break;
		case EKeyPressed::eDown:
			if (CanMoveThere(playerCol, playerRow + 1))
				playerRow++;
			break;
		default:
			break;
		}

		if (map[playerRow][playerCol] == 'G')
		{
			cout << "You win" << endl;

			float timeTaken = GetElapsedTime();

			cout << " it took " << timeTaken << " seconds " << endl;

			int goalRow, goalCol;
			FindFreeCell(goalRow, goalCol);

			map[goalRow][goalCol] = 'G';

			StartClock();
		}

		map[playerRow][playerCol] = 'P';

	}
	return 0;
}