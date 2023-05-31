#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>

/**
* main - Re-learn C Bit level algorithms
* Return: 0
*/

int main(void)
{
    
    /* Bitwise & [AND] */

    unsigned int x = 7; /* 00111 */
    unsigned int y = 4; /* 00100 */
    unsigned int z = 5; /*00101*/

    printf("x & y = %d\n", x & y); /* 0100 = 4 */

    /* Bitwise | [OR] */

    printf("x | y = %d\n", x | y);

    /* Bitwise XOR (^) */

    printf("x ^ y = %d\n", x ^ y);

    /* Bitwise NOT (~) */

    printf("~x = %d\n", ~x);

    /* Left shift  << */
    printf(" 5 << 1 = %d\n", z << 1);

    /* Right shift >> */

    printf("4 >> 1 = %d\n", y >>1);
}