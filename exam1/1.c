#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char *indexafteruint(char *s) {
	int i, j;

	i = 0;
	while(s[i] /* != '\0' */) {
		if(isdigit(s[i])) {
			j = 0;
			while(isdigit(s[i+j])){
				putchar(s[i+j]);
				++j;
			} 
			putchar('\n');
			return s+i+j;
		}	
		++i;
	}
	return NULL;
}


int main(void) {
	char s[101];
	char *p;

	scanf("%100s", s);
	p = indexafteruint(s);

	if(p /* != NULL */)
		do
			p = indexafteruint(p);
		while(p /* != NULL */);

	return 0;
}
