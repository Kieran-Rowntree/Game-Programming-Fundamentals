//Cat Door
#include <iostream>
using namespace std;
int main()
{
	//Sets a state of the 2 doors
	bool Inner = true;
	bool Outer = true;
	bool Catsafe = true;

	//Loops as long as the cat hasnt escaped
	while (Catsafe) {

		//Asks the user the state of the 2 doors
		cout << "is the Inner door open? (0 = no/1 = yes)" << endl;
		cin >> Inner;
		cout << "is the Outer door open? (0 = no/1 = yes)" << endl;
		cin >> Outer;

		//Checks the state of the cat
		if (Inner && Outer) {
			cout << "The cat has escaped :(" << endl;
			Catsafe = false;
		}
		else
			cout << "The cat is safe inside" << endl << endl;
	}
}



