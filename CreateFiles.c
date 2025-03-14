#include <stdio.h>

int main() {
	FILE *fptr; // to do anything file related create a point of type file and use the fopen() function
	fptr = fopen("filename.txt", "w"); // fopen(filename, mode)
	// the different modes: w - writes to a file, a - appends new data to a file, r - reads from a file 
	// w is used to write to a file, if the file doesent exist, then it will create a file. w will overwrite whatever is in that file.
	fclose(fptr); // closing the file
}
