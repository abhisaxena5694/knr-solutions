#include <stdio.h>

/* print Farenheit-Celsius table for fahr = 0, 20, ..., 300 */
/*
print Celcius-Farenheit table for cel = 0, 10, 20,..., 100
formula = fahr = cel * 9 /5 + 32
*/
int main(void) 
{
	float fahr, cel;
	float lower, upper, step;

	lower = 0;
	upper = 100;
	step = 10;
	
	cel = lower;
	printf("\tTemperature conversion table\n");
	while (cel <= upper) {
		fahr = (cel * 9/5.0) + 32;
		printf("%3.0f %6.1f\n", cel, fahr);
		cel = cel + step;
	}

}

