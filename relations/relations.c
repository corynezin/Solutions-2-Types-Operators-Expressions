/*
Name:

This program checks the following:
* 16 equals 0x10?
* 259 equals 0x103?
* 159 equals 0303?
* 255 equals 0xff?
* -1 equals 0xffff?
* -1 equals 0xffffffff?

* -1 greater than 1U?

Print the question (copied from above) and the answer as a 0 or 1

*/

#include <stdio.h> /* printf */

int main () {
    printf("16 == 0x10: %d\n", 16 == 0x10);
    printf("259 == 0x103: %d\n", 259 == 0x103);
    printf("159 == 0303: %d\n", 159 == 0303);
    printf("255 == 0xff: %d\n", 255 == 0xff);
    printf("-1 == 0xffff: %d\n", -1 == 0xffff);
    printf("-1 == 0xffffffff: %d\n", -1 == 0xffffffff);
    printf("-1 == 0xffffffff: %d\n", -1 == 0xffffffff);
    printf("-1 == 0xffffffffU: %d\n", -1 == 0xffffffffU);
    printf("-1 > 1U: %d\n", -1 > 1U);
}
