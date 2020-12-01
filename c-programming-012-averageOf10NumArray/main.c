/****************************************************
* Description: Count average of 10 grades using array
*****************************************************/

#include <stdio.h>

int main() {
	int grades[10]; // array storing 10 numbers
	int count = 10; // number of values to be read
	long sum = 0; // sum of all numbers
	float average = 0.0; // average of the numbers

	printf("\nEnter the 10 grades:\n"); // prompt for the input

	// read 10 numbers to be averaged
	int i;
	for (i = 0; i < count; ++i) {
		printf("%2u> ", i + 1);
		scanf_s("%d", &grades[i]); // read a grade
		sum += grades[i]; // add it to sum
	}

	average = (float)sum / count; // average

	printf("\nAverage of 10 grades is: %.2f\n", average);

	return 0;
}