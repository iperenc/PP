#include <stdio.h>

int main () {

	int a=5;
	float b=5;
	double c=5;

	printf(" %%d: %d %d %d\n",a,b,c); //C promotes floats to doubles for functions that take variable arguments. Pointers aren't promoted to anything.
	printf(" %%f: %f %f %f\n",a,b,c);
	printf("%%lf: %lf %lf %lf\n",a,b,c);
	return 0;
}

// flag: -Wall