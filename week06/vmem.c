#include <stdio.h>
#include <stdlib.h>

int x = 1;
int main(){
	// printing address of main function
	printf("location of code : %p\n", main);
	// printing address of global variable
	printf("location of data : %p\n", &x);
	// printing address of dynamically-allocated char
	char *p = (char *) malloc(sizeof(char));
	printf("location of heap : %p\n", p);
	// printing address of automatic (local) variable
	int y = 2;
	printf("location of stack : %p\n", &y);
	return 0;
}
