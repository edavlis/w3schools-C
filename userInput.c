#include <stdio.h>

int main() {
	// take a user input 
	int userInput;

		printf("Enter a number\n");
		scanf("%d", &userInput);
		printf("You entered: %d\n",userInput);


	// mulitple user inputs
	int userInt;
	char userChar[100];

		printf("Enter a number and a string\n");
		scanf("%d %s", &userInt, &userChar);
		printf("You entered:\n%d\n%s\n", userInt, userChar);

	 while (getchar() != '\n'); // clear newline character left in the buffer
				   
	// scanf considers spaces (whitespace, tab etc) terminating characters
	// fgets is much better suited for gettings lines of text.
	
	// fgets implementation
	char fgetsString[100];

		printf("Enter your full name.\n");
		fgets(fgetsString, sizeof(fgetsString), stdin); // fgets(variable), sizeof(variable), stdin);
		printf("Hello, %s\n", fgetsString);

	return 0;
}
