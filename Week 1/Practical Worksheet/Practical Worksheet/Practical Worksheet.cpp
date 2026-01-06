//Hello world

/*#include <iostream>
using namespace std;
int main()
{
	cout << "Hello world!" << endl;
}*/

//Basic sums

//#include <iostream>
//using namespace std;
//int main()
//{
//	int value1;
//	cout << "Enter value 1" << endl;
//	cin >> value1;
//
//	cout << "Thanks.Now enter value 2" << endl;
//	int value2;
//	cin >> value2;
//
//	//Calculate result
//	int result = value1 + value2;
//	int result2 = value1 * value2;
//	int result3 = value2 / value1;
//
//	cout << "The result of adding " << value1 << " and " << value2 << " is " << result << endl;
//	cout << "The result of multiplying " << value1 << " and " << value2 << " is " << result2 << endl;
//	cout << "The result of dividing " << value1 << " and " << value2 << " is " << result3 << endl;
//	return 0;
//}

//Fahrenheit to celsius

#include <iostream>
using namespace std;
int main()
{
	int Fahrenheit;
	cout << "Enter your Fahrenheit temperature: ";
	cin >> Fahrenheit;

	//Calculates the temperature
	int result1 = Fahrenheit - 32;
	float result2 = result1/1.8f;

	cout << "Your temperature in Celcius is " << result2 << endl;
	return 0;
}

//Observing type behaviour

//#include <iostream>
//using namespace std;
//int main()
//{
//	//the different values asked to enter thoughout the questions
//
//	/*int value1=20;
//	int value2 = 60;*/
//	/*float value1 = 4.5f;
//	float value2 = 6.0f;*/
//	//float value1{ 4.5f };
//	//float value2{ 6.0f };
//	//int value1{ 22 };
//	//int value2{ 7 };
//	//float value1{ 22 };
//	//float value2{ 7 };
//	//unsigned int value1{ -10 };
//	//unsigned int value2{ -4 };
//	int value1{ 1000000 };
//	//int value2{ 10000000 };
//	int value2{ 3000000000 };
//
//	//the different equations i was asked to use thoughout the questions
//
//	//int result = value1 + value2;
//	//float result = value1 + value2;
//	//int result = value1 / value2;
//	//float result = value1 / value2;
//	//unsigned int result = value1 + value2;
//	int result = value1 * value2;
//
//	cout << "The result is " << result << endl;
//	return 0;
//}

//Questions:

/*
2)
	a)It purges the decimal as the output is a int
	b)Now the decimal is kept since the output is a float
	c)The output is the same
3)
	a)It returns 3, since again it purges the decimal and rounds since the result is an int
	b)It now returns 3.14... as the output is a float once again
4) It lead to a crash
5) 1316134912 due to memory capacity
6) Resulted in the same number "1316134912" for the same reason
*/

//Advanced

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a{ 20 };
//
//	cout << "The memory address of a is " << &a << endl;
//}

//Further applications

//Hello "name"

//#include <iostream>
//using namespace std;
//int main()
//{
//	//Takes the users name
//	string name;
//	cout << "Hello. What is your name?" << endl;
//	cin >> name;
//
//	//Greets the user
//	cout << "Nice to meet you " << name << "!" << endl;
//	return 0;
//}

//Volume of a room

//#include <iostream>
//using namespace std;
//int main()
//{
//	//Takes 3 values from the user
//	float length;
//	cout << "Enter length: " << endl;
//	cin >> length;
//
//	float width;
//	cout << "Enter width: " << endl;
//	cin >> width;
//
//	float height;
//	cout << "Enter height: " << endl;
//	cin >> height;
//
//	//Multiplies the 3 given measurements
//	float volume{ length * width * height };
//
//	cout << "The volume of your room is: " << volume << endl;
//	return 0;
//}

//Display a menu

//#include <iostream>
//using namespace std;
//int main()
//{
//    //Asks the user to choose an option
//	cout << "Make a choice:" << endl << endl;
//    //Creates the menu
//	cout << "|   A   |   B  |    C   |    Q   |" << endl << "----------------------------------" << endl
//		<<  "| Hello |  Bye |   #3   |  Quit  |" << endl;
//    char choice;
//    //Loops the choice
//    do {
//        cin >> choice;
//        switch (choice) {
//        case 'A':
//            cout << "Hello\n";
//            break;
//        case 'B':
//            cout << "Bye\n";
//            break;
//        case 'C':
//            cout << "#3\n";
//            break;
//        case 'Q':
//            cout << "Exiting the program. Goodbye!\n";
//            void exit(int const status);
//            break;
//        //Catches an invalid input
//        default:
//            cout << "Invalid choice. Please try again.\n";
//        }
//    //Keeps the loop going until "Q" is chosen
//    } while (choice != 'Q');
//}

//More Primative Data Types (worksheet 2)

//Determine the size of primitive data types

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "The size of an int is: " << sizeof(int) << endl;
//	cout << "The size of an char is: " << sizeof(char) << endl;
//	cout << "The size of an unsigned int is: " << sizeof(unsigned int) << endl;
//	cout << "The size of an float is: " << sizeof(float) << endl;
//	cout << "The size of an double is: " << sizeof(double) << endl;
//	cout << "The size of an bool is: " << sizeof(bool) << endl;
//	cout << "The size of an char* is: " << sizeof(char*) << endl;
//	cout << "The size of an int* is: " << sizeof(int*) << endl;
//	
//	return 0;
//}

//Arithmetical operators

////Modulus gives the remainder of a division
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a;
//	cout << "Give me a number: ";
//	cin >> a;
//
//	int b;
//	cout << "Give me your 2nd number: ";
//	cin >> b;
//
//	int c{ a % b };
//	cout << a << " % " << b << " = " << c << endl;
//}

//Average with 2 variables

//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//}

//Exchange A and B

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a;
//	std::cout << "Enter value A: ";
//	cin >> a;
//
//	int b;
//	std::cout << "Enter value B: ";
//	cin >> b;
//
//	int temp = b ;
//	b = a;
//	a = temp;
//
//	std::cout << "Value A now = " << a << " and B now equals " << b << endl;
//}

//Potato tax

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "How much is 1 Kilogram of potatoes? (pre tax): ";
//	float perkg;
//	cin >> perkg;
//
//	cout << "What is the current tax on potatoes?: ";
//	float taxpercent;
//	cin >> taxpercent;
//
//	cout << "How many KGs do you want?: ";
//	float amount;
//	cin >> amount;
//
//	float cost_pretax = perkg * amount;
//	cout << cost_pretax << " (pre-tax)" << endl;
//	float tax = (taxpercent + 100) / 100;
//	float cost = cost_pretax * tax;
//	cout << cost << "(post-tax)";
//}

//Distance between 2 points

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	cout << "Please enter the first set of coordinates" << endl << "X: ";
//	int x1;
//	cin >> x1;
//	cout << "Y: ";
//	int y1;
//	cin >> y1;
//
//	cout << "Please enter the second set of coordinates" << endl << "X: ";
//	int x2;
//	cin >> x2;
//	cout << "Y: ";
//	int y2;
//	cin >> y2;
//
//	float distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
//	cout << distance;
//}