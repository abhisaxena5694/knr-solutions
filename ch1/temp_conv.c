#include <stdio.h>

/* print Farenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main(void) 
{
	float fahr, celcius;
	float lower, upper, step;

	lower = 300;
	upper = 0;
	step = 20;
	
	fahr = lower;
	while (fahr >= upper) {
		celcius = 5 * (fahr-32) / 9;
		printf("%3.0f%6.1f\n", fahr, celcius);
		fahr = fahr - step;
	}

}

