#include <stdio.h>
#include "mylib.h"

int main(void) {
	int a = 3, b = 5;
	printf("(initial) a=%d, b=%d\n", a, b);
	
	swap(&a, &b);
	printf("(swapped) a=%d, b=%d\n", a, b);
	printf("(mult) a * b = %d * %d = %d\n", a,b,mult(a,b));
	printf("(div) a / b = %d / %d = %d\n", a,b,div(a,b));
	return 0;
}
