#include <stdio.h>
#include <stdlib.h>

int **mul(int **a, int **b, int n) {
	int **c, i, j, k, sum;

	c = malloc(sizeof(int*) * n);
	for(i = 0; i < n; ++i)
		c[i] = malloc(sizeof(int) * n);
	
	for(i = 0; i < n; ++i) {
		for(j = 0; j < n; ++j) {
			for(k = 0; k < n; ++k) {
				sum += a[i][k] * b[k][j];
			}
			c[i][j] = sum;
			sum = 0;
		}
	}
	return c;
}

int main(void) {
	int **a, **b, **c, n, i, j;

	scanf("%d", &n);

	a = malloc(sizeof(int*) * n);
	b = malloc(sizeof(int*) * n);
	for(i = 0; i < n; ++i) {
		a[i] = malloc(sizeof(int) * n);
		b[i] = malloc(sizeof(int) * n);
	}

	for(i = 0; i < n; ++i)
	for(j = 0; j < n; ++j)
		scanf("%d", &a[i][j]);

	for(i = 0; i < n; ++i)
	for(j = 0; j < n; ++j)
		scanf("%d", &b[i][j]);

	c = mul(a, b, n);

	for(i = 0; i < n; ++i){
		for(j = 0; j < n; ++j)
			printf("%d ", c[i][j]);
		putchar('\n');
	}
	
	for(i = 0; i < n; ++i) {
		free(a[i]);
		free(b[i]);
		free(c[i]);
	}
	free(a);
	free(b);
	free(c);

	return 0;
}
