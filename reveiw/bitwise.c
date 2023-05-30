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

    unsigned int x = 7; /* 0111 */
    unsigned int y = 4; /* 0100 */

    printf("x & y = %d\n", x & y); /* 0100 = 4 */

    /* Bitwise | [OR] */

    printf("x | y = %d\n", x | y);

    /* Bitwise XOR (^) */

    printf("x ^ y = %d\n", x ^ y);

    /* Bitwise NOT (~) */

    printf("~x = %d\n", ~x);
}