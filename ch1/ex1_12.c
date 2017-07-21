#include <stdio.h>

int main(void) {
	char c;
	int nb;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t') {
			if (nb == 0) {	
				putchar('\n');
				++nb;
			}	
		}
		else {
			putchar(c);
			nb = 0;
		}	
	}
}
