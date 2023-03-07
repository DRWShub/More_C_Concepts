#include <stdio.h>
#include <stdlib.h>

/**
  Comment .............
 */

int main()
{
	int *p, (*q)[5], *r[3], **s;

	printf("sizeof(int): %d\n", sizeof(int));
	printf("sizeof(int *): %d\n", sizeof(int *));
	printf("sizeof(int [5]): %d\n", sizeof(int [5]));
	printf("sizeof(int (*)[5]): %d\n", sizeof(int (*)[5]));
	printf("sizeof(int **): %d\n", sizeof(int **));
	putchar(’\n’);
	printf("p: %p\tp+1: %p\n", p, p+1);
	printf("q: %p\tq+1: %p\n", q, q+1);
	printf("r: %p\tr+1: %p\n", r, r+1);
	printf("s: %p\ts+1: %p\n", s, s+1);
	return 0;
}
