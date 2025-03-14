#include <stdio.h>

int main() {

FILE *fptr; // "create file"

fptr = fopen("writeFile.txt", "w"); // open file in writing mode
fprintf(fptr, "Hello file!"); // write to the file, note that this will remove all that is currently in the file.
fclose(fptr); // close file
	      
// appending to file


fptr = fopen("appendFile", "a"); // open another file in writing mode
fprintf(fptr, "Hello!"); // write to file
fprintf(fptr, "\nHello again!"); // write to file
fclose(fptr); // close file
}
