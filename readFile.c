#include <stdio.h>


int main() {

	FILE *fptr;

	fptr = fopen("writeFile.txt", "r"); // opens file for reading
	// string to sotre contents fo the file
	char fileString[128];

	//fgets to read from the file
	fgets(fileString, 128, fptr); // first parameter is what variable to write to, second param is maximum size off data to read (max can be the variable's size) and final param is the file pointer. 
	printf("\n%s\n", fileString);
	
	// note that the fgets only reads the top line of the file. to read more of the file use a while loop
	while (fgets(fileString, 128, fptr)) {
		printf("\n%s\n", fileString);
	}
	fclose(fptr); // close file

	// if you try to read from a non existent file then fgets will return null.
	FILE *nonExistentFile;
	nonExistentFile = fopen("nonExistentFile.txt", "r");
	
	// you can check for if 
	if (nonExistentFile == NULL) {
  		printf("Not able to open the file.");
	} // if nonExistentFile.txt does not exist, then this if statment will run.
}

