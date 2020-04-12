/*
Name:

This program prints the given character in binary.  It assumes a character is 8
bits.  The program will still work if you replace the hard coded character 'A'
with something else.
*/

/*
Instructor Hints (You may delete this when submitting)

You can use bitwise operators to extract each bit.  To get the rightmost bit,
you can use & with 1.  You can shift the bits to the right with the right bit
shift operator (>>).

You can also do the same with just arithmetic operators, though this may be the
one case where the bitwise operators are easier to read.
*/

#include <stdio.h> /* printf */

int main () {
    char c = 'A';
    int b0, b1, b2, b3, b4, b5, b6, b7;

    b0 = c & 1;
    c = c >> 1;
    b1 = c & 1;
    c = c >> 1;
    b2 = c & 1;
    c = c >> 1;
    b3 = c & 1;
    c = c >> 1;
    b4 = c & 1;
    c = c >> 1;
    b5 = c & 1;
    c = c >> 1;
    b6 = c & 1;
    c = c >> 1;
    b7 = c & 1;
    c = c >> 1;

    printf("%d%d%d%d%d%d%d%d\n", b7, b6, b5, b4, b3, b2, b1, b0);
}
