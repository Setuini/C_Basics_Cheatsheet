#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv){
	
	printf("ARGC: %d\n",argc);

	printf("ARGV: ");
	for (int i = 0; i < argc; i++){
		printf("[%s]",argv[i]);
	}
	printf("\n");

	return EXIT_SUCCESS;
}