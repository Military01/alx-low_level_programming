#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
        int n;

        n = 402;
        printf("n=%d\n", n);
        int *p;
        p = &n;
        *p = 98;
        printf("n=%d\n", n);
        return (0);
}
