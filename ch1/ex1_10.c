#include <stdio.h>
/*
int main(void) {
	char c;
	while ((c = getchar()) != EOF) {
		if (c == '\t'){
			printf("\\t");
		}
		if (c == ' ') {	
			printf("\\b");
		}
		if (c == '\\') {
			printf("\\");
		}
		putchar(c);
	}
}
*/
#include <sys/types.h>
#include <termios.h>
#include <stdio.h>
#include <string.h>


int main(void) {
	int fd=fileno(stdin);
	struct termios oldtio, newtio;
	tcgetattr(fd, &oldtio); /*save current settings */
	memcpy(&newtio, &oldtio, sizeof(oldtio));
	newtio.c_lflag = ICANON;
	newtio.c_cc[VERASE] = 0; /* turn off del */
	tcflush(fd, TCIFLUSH);
	tcsetattr(fd, TCSANOW, &newtio);
	/* process user input here */
	int c, d;
	while((c = getchar()) != EOF) {
		if (c == '\\') {
			putchar('\\');
			putchar('\\');
		}

		if (c == '\b') {
			putchar('\\');
			putchar('b');
		}
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		}


		if (c != '\t' && c != '\b' && c != '\\') 
			putchar(c);
	}

	tcsetattr(fd, TCSANOW, &oldtio); /*restore settings */
	return 0;
	
}
