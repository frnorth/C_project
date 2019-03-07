#include <stdio.h>

#define BE_SET 0177
#define SET_ON ~0177700
#define START 6
#define STOP 7

unsigned getbits (unsigned x, int p, int n);
void showbits (unsigned x);

main() {
	unsigned us;
	
	us = BE_SET;
	printf("%d\n", us);
	printf("%d\n", BE_SET);
	printf("%d\n", SET_ON);
	printf("%d\n", BE_SET & SET_ON);

	printf("%d\n", getbits(us, START, STOP));

	showbits(us);
}

/* getbits: get n bits from position p */
unsigned getbits (unsigned x, int p, int n) {
	return (x >> (p+1-n)) & ~(~0 << n);
}

void showbits (unsigned x) {
	unsigned i, num;

	num = 0;
	i = 1;
	while (i != (~i + 1)) {
		i = i << 1;
		printf("%3d", num++);
	}
	printf("\n");
	while (i != 1) {
		if ((x & i) != 0)
			printf("%3d", 1);
		else
			printf("%3d", 0);
		i = i >> 1;
	}
	printf("\n");
}
