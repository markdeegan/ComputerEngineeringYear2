/* Mark Deegan 2022 12 01 */
/* Sample code to demonstrate the use of functions */

/* include the definitions of functions contained in stdio.h, i.e. the printf function */
/* stdio.h comes with the c compiler */
#include <stdio.h>

/* include the definitions of functions (only one) contained in mdeegan.h */
/* mdeegan.h does not come with the c compiler, I wroter it myself to illuistrate a point */
#include "mdeegan.h"

/* define the main function, which is where all C programmes start executing */
/* don't worry abouy the parameters in the main function (argc and argv), I may explain those later */
int main(int argc, char** argv)
{
	/* declare a variable to hold the result returned  by the whatis3plus4 function */
	/* iniutially that will have value 0 */
	int result = 0;

	/* assign the return value from the whatis3plus4 function to the result variable */
	/* that funciton is not a built-in C function */
	/* neither is it defined in this code fiule, but instead */
	/* it is defined in mdeegan.h and implemented in mdeegan.c */
	result = whatis3plus4();

	/* print out the usual Hello World! message */
	printf("Hello World!\n");

	/* print the message 3 plus 4 is and then the result variable */
	printf("3 plus 4 is: %d\n",result);
	
}
