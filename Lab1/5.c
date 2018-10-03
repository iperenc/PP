#include <stdio.h>

int main(){
	char a=127;
	a++;
	printf("%d\n", a);

	unsigned char b=255;
	b++;
	printf("%d\n", b);

	unsigned char c=127+129;
	printf("%d\n", c);

	return 0;
}