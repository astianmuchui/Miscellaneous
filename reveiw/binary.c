#include <stdio.h>

/**
 * binRep - prints a number in binary form
 * @num: number to print in binary
 * Return: none
*/
void binRep(unsigned int num)
{
    unsigned int i;

    for (i = 1 << 31; i > 0; i = i / 2)
    {
        if (num & i)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}

/**
 * bin - print a number in binary
 * @num: number to print in binary
 * Return: 0
*/

void bin(unsigned int num)
{
    if (num > 1)
        bin(num >> 1);

    printf("%d", num & 1);   
}

/**
 * main - test binRep
 * Return: 0
*/

int main(void)
{
    binRep(7);
    printf("\n");
    bin(7);
    printf("\n");


    return (0);
}