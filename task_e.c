#include <stdio.h>
int main(int argc, char *argv[]){
	// Enter your code under here to read the filename from the command line
	const char *filename = 0;
	scanf("%s", &filename);
	// Read number from file - do not edit
	double num;
	FILE *fptr;
	fptr = fopen(argv[1], "r");
	fscanf(fptr, "%lf", &num);
	fclose(fptr);
	// Enter your code from Lab D to print JSON output (with name, email, number1, number2) goes under here
	const char *name = "Austin Jewell";
    const char *email = "austin.jewell@student.manchester.ac.uk";
    double number1 = num;
    double number2 = num;
    printf("{\"name\": \"%s\",\n", name);
    printf(" \"email\": \"%s\",\n", email);
    printf(" \"number1\": %.2f,\n", number1);
    printf(" \"number2\": %.3e}\n", number2);
	while (1) {
        // Loop forever
    }
	// Do not edit below here
	return 0;
}