/*
Name:

This program solves a quadratic equation of the form ax^2 + bx + c = 0
a, b, and c are already given as integers, and we assume a real solution
is possible.  Both solutions are stored in variables root1 and root2, and
the smaller root is printed before the larger.
*/

/*
Instructor Hints (You may delete this when submitting)

You should use the `sqrt` (square root) function provided in math.h (already
included)

sqrt is like a unary operator but called a little differently.  For example,

#include <stdio.h>
#include <math.h>

int main() {
    printf("%f\n", sqrt(4.0));
}

prints 2.0
*/

#include <stdio.h> /* printf */
#include <math.h> /* sqrt */

int main () {
    int a = -1;
    int b = 1;
    int c = 1;
    float root1, root2;
    root1 = (-b - sqrt(b*b - 4*a*c)) / (2 * a);
    root2 = (-b + sqrt(b*b - 4*a*c)) / (2 * a);
    printf("%f\n", root1);
    printf("%f\n", root2);
}
