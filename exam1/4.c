#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned x, i, n = sizeof(unsigned) * 8;

	scanf("%u", &x);

	for(i = 0; i < n; i+=2)
		if(x & (1u<<i) /* != 0 */)
			x -= (1u<<i); 

	printf("%u\n", x);
	return 0;
}
