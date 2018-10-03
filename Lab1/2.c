#include <stdio.h>

int global=5;

void function(){
	printf("Function is running!\n");
}

int main(){
	printf("Hello!\n");
	function();
	printf("Global variable is equal to %d\n", global);
	return 0;
}