#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <ctime>

using namespace std;

int number;

void guess() {
	cout << "Guess the number (between 0 and 100)!\n ";

	int input;
	cin >> input;
	
	// If the guess is too low, print this, too high print this, etc...
	if (input < number) {
		cout << "Too Low, Guess Again!\n";
		guess();
	}
	else if (input > number) {
		cout << "Too High, Guess again!\n";
		guess();
	}
	else {
		cout << "Well done, thats the number!";
	}

	// ! Using guess() inside of guess() is called a recursive function!
}

int main() {
	srand(time(0)); // srand sets the randomness.
	number = rand() % 100; // This generates a number from 0 - 100, and gives it to number, so we can use it in a global scope.
	guess();
}
