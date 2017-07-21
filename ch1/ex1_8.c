#include <stdio.h>

int main(void) {
	int nl = 0, b = 0, t = 0;

	char c;
	while ((c = getchar()) != EOF) {
		if (c == '\n') 
			++nl;
		else if (c == ' ')
			++b;
		else if (c == '\t')
			++t;
	}

	printf ("Newlines: %d\nBlanks: %d\nTabs: %d\n",nl, b, t);
}
