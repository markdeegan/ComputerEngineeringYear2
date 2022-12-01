/* Mark Deegan, 20221201 */
/* This file defines, or provides the implementation of the function whatis3plus4 */
/* this is being used to illustrate how to iuncl;uide files that we have declared and defined in files other than the cource fode fiule that contains the main() function */
/* This approach supports reusing code between different projects and beteween different developers working on the same project */

/* This line includes the tet from the file mdeegan.h */
/* that file simply declares a single function, the */
#include "mdeegan.h"


/* This next block defines the operation of, or provides gthe implementation for the function whatis3plus4 */
int whatis3plus4(void)
{ /* start block for function whatis 3 plus 4 */
	int a = 3; /* declare a variable, a, and assign it an initial value of 3 */
	int b = 4; /* declare a variable, b, and assign it an initial value of 4 */
	int c = 0; /* declare a variable, c, and assign it an initial value of 0 */
	c = a + b; /* assign c the calue of addint a and b */
	return c; /* return the value of c, and exit this function */
} /* end block for function whatis 3 plus 4 */
