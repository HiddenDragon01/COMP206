// Name: Ryan Sowa
// ID#: 260886668


// include contents from stdio.h and stdlib.h files

#include<stdio.h>
#include<stdlib.h>

// Define main function

int main(int argc, char *argv[]) {

	// define variable size
	
	int size;

	// If the user enters an argument, then convert this argument to integer form
	
	if (argc >= 2) {
		size = atoi(argv[1]);
	}

	// If the user does not enter an argument, prompt the user for an argument
	
	if (argc < 2) {
		scanf("%d",&size);
	}
	
	// If the user enters an invalid size for the triangle, the program exits
	if (size <= 0) {
		puts("An incorrect triangle size was inputted. The size must be greater than 0 and an integer number. Syntax: ./triangles SIZE");
		exit(-1);
	}
	
	// Set a variable, counter, equal to size
	int counter = size;

	// Create a for loop which loops "size" times
	for (int i = 1; i <= size; i++) {
 		
		// If counter is equal to 1, then do nothing. 
		if (counter == 1) {
		}
		
		// Else, begin my printing a number of spaces equal to the value of the counter minus one
		else {

			for (int j = 0; j < counter - 1; j++) {
				printf(" ");

			}	
		}
		
		// Then, print a number of asterisks equal to the current value of the variable i defined in the outer loop
		for (int k = 0; k < i; k++) {
			printf("*");
		}

	// Decrement counter
	counter--;

	// Print a new line and end the for loop
	printf("\n");
	}
	
	// return an error code of zero
	return 0;
}
