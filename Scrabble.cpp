/*
 * Exercise for Lesson 2 Scrabble Word/Letter Score
 *
 * This program lets the user enter a word. The Scrabble score of the word is
 * then calculated and printed on the screen.
 */

#include <stdio.h>

int main()
{
	// A character variable you can use to store your letter
	char letter;

	// An integer variable you can use to store the current letter score
	int letterScore = 0;

	// An integer variable to store the total word score
	int wordScore = 0;

	// Ask the user to enter a word
	printf("Please enter a word: ");

	//
	// Task 1 - using a while loop to read a word
	//
	scanf("%c", &letter);

	while (letter != '\n') {

		// Inside the while loop...
		//
		// Task 2 - assigning the letter score depending on the input letter
		//
		switch (letter) {
		case 'a': letterScore = 1; break;
		case 'b': letterScore = 3; break;
		case 'c': letterScore = 3; break;
		case 'd': letterScore = 2; break;
		case 'e': letterScore = 1; break;
		case 'f': letterScore = 4; break;
		case 'g': letterScore = 2; break;
		case 'h': letterScore = 4; break;
		case 'i': letterScore = 1; break;
		case 'j': letterScore = 8; break;
		case 'k': letterScore = 5; break;
		case 'l': letterScore = 1; break;
		case 'm': letterScore = 3; break;
		case 'n': letterScore = 1; break;
		case 'o': letterScore = 1; break;
		case 'p': letterScore = 3; break;
		case 'q': letterScore = 10; break;
		case 'r': letterScore = 1; break;
		case 's': letterScore = 1; break;
		case 't': letterScore = 1; break;
		case 'u': letterScore = 1; break;
		case 'v': letterScore = 4; break;
		case 'x': letterScore = 8; break;
		case 'y': letterScore = 4; break;
		case 'z': letterScore = 10; break;
		}

		// Inside the while loop...
		//
		// Task 3: summing the letter score to the word score
		//
		wordScore += letterScore;
		scanf("%c", &letter);

	}

	//
	// Task 3: printing the word score
	//
	printf("%d", wordScore);

	// Print a newline at the end of the program
	printf("\n");
}
