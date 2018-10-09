// compile, run and analyse it
#include <stdio.h>
#include <stdlib.h>

int x=5; // global variable in data segment

int main(){
	int y = 7; // local variable in stack segment

	// allocate memory for 1 int in heap segment
	int * ptr = (int*)malloc(sizeof(int)); 

	printf("(global/static) &x = %p\n",&x);
	printf("(local/automatic) &y = %p\n",&y);
	printf("(local/automatic) &otr = %p\n",&ptr);
	printf("(dynamic) ptr = %p\n",ptr);
	
	// printing the distance between pointers
	printf("&y - ptr = %ld\n",&y - ptr);
	printf("&y - &ptr = %ld\n",&y - (int*)&ptr);
	printf("&y - &x = %ld\n",&y - &x);
	printf("ptr - &x = %ld\n",ptr - &x);

	// analyse the output
  // and convince yourself that it
	// agrees with logical view of process address space

}
