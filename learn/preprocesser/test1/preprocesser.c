#include <stdio.h>

#define VAL 2
#include "preprocesser.h"

#define forever for (;;)
#define max(A, B) ((A) > (B) ? (A) : (B))

#undef hello
void hello(void);

#define dprint(expr) printf(#expr " = %d\n", expr)

#define paste(x, y) x ## y

#define swap(t, x, y) \
{ \
	t tmp; \
	tmp = x; \
	x = y; \
	y = tmp; \
}

main()
{
	int i = 2, j = 6;
	int paste(i, j) = 111;

	hello();
	printf("%d\n", max(i, j));
	printf("%d\n", max((i + j), (j * 2)));
	dprint(i + j);
	dprint(paste(i, j));
	dprint(ij);
	dprint(i);
	swap(int, i, j);
	dprint(i);
	printf("haha"   "yeah!\n");
	//forever;
	HELLO;
	
}

void hello(void)
{
	printf("Hello World!\n");
}
