#include <stdio.h>
#include <string.h>

int main() {

	// find the size of a string
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

		int alphabetLength1 = sizeof(alphabet) / sizeof(alphabet[0]); 
		printf("%d\n", alphabetLength1);
		// instead of doing this to find the length of a string (this method counts the null character), AND returns the size of the size of the array in bytes, not the length of the array
	
		int alphabetLength2 = strlen(alphabet);
		printf("%d\n", alphabetLength2);
		// you can do this.
	
	// combine two strings
	char numbers[] = "123456789";

		strcat(alphabet, numbers); // combines // concattenates alphabet and numbers into a new string, which is stored in the first string (in this case, aphabet)
		printf("%s\n",alphabet);
	
	// copy one string to another string
	char originalString[] = "Hello!! i will be copied into another string";
	char emptyString[10000];
		
		strcpy(emptyString, originalString); // copying the contents of originalString to emptyString
		printf("%s\n", emptyString);
	
	// compare two strings	
	char unchangedString[] = "This string is unchanged";
	char differentString[] = "This string is different";

		printf("%d\n",strcmp(unchangedString, differentString));
		// if it returns 0 there are no differences between the strings.
		// if it doesent return 0, then there are differences

}
