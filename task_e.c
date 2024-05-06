#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	const char *filename = NULL;
	printf("Enter the filename: ");
	scanf("%s", &filename);

	// Check if the correct number of arguments are passed
	if (argc != 1)
	{
		printf("Error. Expected 1 filename.\n");
		return 1; // Return non-zero to indicate an error
	}

	// Read the filename from the command line argument
	filename = argv[1];

	// Open the file
	FILE *fptr = fopen(filename, "r");
	if (fptr == NULL)
	{
		printf("Error. Could not open file.\n");
		return 1; // Return non-zero to indicate an error
	}

	// Read number from file
	double num;
	if (fscanf(fptr, "%lf", &num) != 1)
	{
		printf("Error. Could not read number from file.\n");
		fclose(fptr);
		return 1; // Return non-zero to indicate an error
	}

	// Close the file
	fclose(fptr);

	// Print JSON output
	const char *name = "Austin Jewell";
	const char *email = "austin.jewell@student.manchester.ac.uk";
	double number1 = num;
	double number2 = num;
	printf("{\"name\": \"%s\",\n", name);
	printf(" \"email\": \"%s\",\n", email);
	printf(" \"number1\": %.2f,\n", number1);
	printf(" \"number2\": %.3e}\n", number2);

	// Loop forever
	while (1)
	{
	}

	return 0;
}
