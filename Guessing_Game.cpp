#include <iostream>
#include <stdlib.h>
#include <cstdio>
using namespace std;
int number;
int i;
int guess;
int random() { //function to randomise the number
	srand(time(0));
	for (i = 1; i <= 1; i++) { //I have no idea what this is
		number = rand() % 100; //100 here is the largest number
	}
	return 0;
}
int guesser() {
	cout << "Guess the number (between 0 and 100)!\n ";
	cin >> guess;
	if (guess < number) { //if the guess is too low, print this, too high print this, etc...
		cout << "Too Low, Guess Again!\n";
		gueser();
	}
	else if (guess > number) {
		cout << "Too High, Guess again!\n";
		gueser();
	}
	else {
		cout << "Well done, thats the score!";
		getchar();
	}
	return 0;
}
int main() {
	random();
	gueser();
}
