#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/*
 * Desc: Header file that defines a function-like macro ABS(x)
 *	that computes that absolute value of a number x.
 */

#define ABS(x) (((x) < (0)) ? ((x) * (-1)) : (x))

#endif
