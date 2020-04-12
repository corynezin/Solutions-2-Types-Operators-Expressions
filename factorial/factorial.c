/*
Name:

This program stores the value of 15 factorial in a variable and prints it.  It
is hard coded to compute that number, and would not work in general, though it
does not hard code the answer itself, which is 1307674368000
*/

#include <stdio.h> /* printf */

int main () {
    long int factorial = 15L*14*13*12*11*10*9*8*7*6*5*4*3*2*1;
    printf("%ld\n", factorial);
}
