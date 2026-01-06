//Comparing Values:

#include <iostream>
using namespace std;

int main()
{
	cout << "Value 1: ";
	float Val1;
	cin >> Val1;

	cout << "Value 2: ";
	float Val2;
	cin >> Val2;

	if (Val1 < Val2)
	{
		cout << "Value 1 is smaller than value 2.";
	}
	else if (Val1 > Val2)
	{
		cout << "Value 1 is larger than value 2.";
	}
	else if (Val1 = Val2)
	{
		cout << "Value 1 is equal to than value 2.";
	}
}
