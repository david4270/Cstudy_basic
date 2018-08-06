#include <stdio.h>
//#include includes header file
//<stdio.h> is required for using printf
//How to make C file: https://stackoverflow.com/questions/45785786/visual-studio-2017-c-win32-console-project-template

//<Unit 3>

//main is required to run the program
int main() {
	printf("Hello, world! \n");
	// printf prints "Hello, world!"
	// \n is not printed, but needed to print "Hello, world!" in each line

	printf("%s\n", "Hello,world!");
	//%s changes into (string) "Hello,world!"


	//Print Hello 1234
	printf("%s %s\n", "Hello", "1234");
	//first %s changes into "Hello" and second %s changes into "1234"
	

	//Print Hello, 1234
	printf("%s %s\n", "Hello,", "1234");

	printf("%s, %s\n", "Hello", "1234");

	//print Hello1234
	printf("%s%s\n", "Hello", "1234");
	//no space

	//how to print Hello 1234 when using "%s%s\n"
	printf("%s%s\n", "Hello ", "1234"); // put space after Hello
	printf("%s%s\n", "Hello", " 1234"); // put space before 1234

	//%s means string

	/*
	There MUST be only one 'main' in the project;
	if there are multiple 'main' in the project, then compile error would be occurred
	*/
	

	return 0;
}
