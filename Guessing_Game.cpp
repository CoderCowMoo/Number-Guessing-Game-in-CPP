#include <iostream>
#include <stdlib.h>
#include <cstdio>
using namespace std;
int number;
int i;
int guess;
int random() {
	srand(time(0));
	for (i = 1; i <= 1; i++) {
		number = rand() % 100;
	}
	return 0;
}
int gueser() {
	cout << "Guess the number (between 0 and 100)!\n ";
	cin >> guess;
	if (guess < number) {
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