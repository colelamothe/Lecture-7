// Lecture 7 supplement program

#include <iostream>
#include <string>

using namespace std;

int main() {
	//Variable declaration 
	int sum(55), count(10); 
	double avg;

	//demonstrating loss of data with integer mathematics for fractional operations.
	avg = sum / count;
	cout << "average with integers = " << avg << endl; // outputs 5.0 since the integer truncates the decimal remainder

	avg = (double)sum / count; // casting the double data type onto the sum variable for a one off function allows the full fractional output.

	cout << "average with data type double cast onto sum = " << avg << endl; // outputs 5.5


	avg = (double)(sum / count); 
	// since the order of operations tells the compiler to start with the parenthesis the fractional component is already truncated before it can be casted.
	cout << "average with improper casting = " << avg << endl; //outputs 5.0

	// part 2 overflow and underflow

	float over = 3E23;
	cout << "float at 3E23 = " << over << endl; // variable outputs no problem as it is in range.
	over = over * 1E25;
	cout << "float overflow = " << over << endl; // variable returns 'inf' as it has overflowed and does not have enough bits to store the value anymore.

	//Increment & Decrement

	int increment = 10;

	increment = increment++; // adds 1 after evaluating the value of the variable
	cout << "increment in the form var++ = " << increment << endl;
	cout << "++increment = " << ++increment << " increment++ = " << increment++ << endl; //++ before the variable adds one before the variable is used for the function. ++ after adds it after evaluation.


	int decrement = 10;
	decrement = decrement--; // subtracts 1 after evaluating the value of the variable
	cout << "Decrement in the form var-- = " << decrement << endl;
	cout << "--decrement = " << --decrement << " decrement-- = " << decrement-- << endl; // decrements based on the pre and post decrement rules

	int result = ++increment + decrement--;
	cout << result << " is the result due to incrementing by one and evaluating before subtracting from decrement" << endl;
	//pre-increment will add 1 to the variable before anything else. Post-increment will add 1 to the variable at the end of the current command ';'

	//short expression writing

	int quick = 10;

	quick += 7; // same as quick = quick + 7;

	cout << quick << endl;
	quick *= 10; //quick = quick * 10;
	quick /= 10; // division
	quick -= 7; // subtraction
	quick %= 5; // modulo

	//operator precedence

	int y;

	y = 2 * 5 + 3 * 5 + 7; 
	cout << y << endl; // multiplication left to right then addition left to right
	

	//rounding error 

	double price = 4.35; // no exact binary representation so it is a very tiny bit smaller than 4.35. 
	int cents = price * 100;

	// outputs 434 as due to a round off error when converting to an integer. the original value was a tiny bit smaller than 4.35 so the output is slightly smaller than 435 so it is truncated.
	cout << cents << endl;

	cents = (price * 100) +0.5; // since the integer will truncate the decimal this bumps and number 0.5 and above into the next integer value
	cout << cents << endl; // outputs the expected 435 since we manually removed the rounding error.


	//using cin 
	string myName;
	cout << "Insert your name: " << endl;
	cin >> myName; // cin as an operator will ignore whitespace characters. So in this usage it will only be able to take the first name and will drop anything after a space
	cout << myName << endl;


	char letter;
	cout << "One letter only: " << endl;
	cin.get(letter); // if this comes after a standard cin it will pick up the return character that was not previously picked up. Only use one or the other in each program.
	cout << myName << endl;


	
	system("pause");
	return 0;
}