#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	double avg = 0.0;
	int i, sum;

	for(i = 1; i < argc; ++i){
		avg += atof(argv[i]);
	}
	avg /= (argc-1);
	printf("%.2f\n", avg);
	return 0;
}
