#include <stdio.h>
/*
int main (void)
{
	int c;
	int inspace;

	inspace = 0;
	while((c = getchar()) != EOF) {
		if (c == ' ')
		{
			if (inspace == 0)
			{
				inspace = 1;
				putchar(c);
			}
		}

		if (c != ' ') 
		{
			inspace = 0;
			putchar(c);
		}
		
	}
	return 0;
}
*/

int main(void) {
	int nb;
	char c;

	while ((c = getchar()) != EOF){
		if (c == ' ') {
			if (nb == 0) {
				putchar(c);
				nb++;
			}
		}
		if (c != ' ') {
			putchar(c);
			nb = 0;
		}
	}
}
