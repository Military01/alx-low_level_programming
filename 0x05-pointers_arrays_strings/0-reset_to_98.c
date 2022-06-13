#include <stdio.h>
#include "main.h"

int main(void)
{
	    int n;
	    int *p;

	    n = 402;
	    p = &n;
	    printf("n=%d\n", n);
	    *p = 98;
	    printf("n=%d\n", n);
	    return (0);
}
