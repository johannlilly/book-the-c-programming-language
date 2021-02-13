#include <stdio.h>

#define LOWER	0	/* lower limit of table */
#define UPPER	300	/* upper limit */
#define STEP	20	/* step size */

main() {

	float fahr, celsius;
	
	fahr = (float) lower;

	while (fahr <= (float) upper) {
		celsius = 5.0 * (fahr-32.0) / 9.0;
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
