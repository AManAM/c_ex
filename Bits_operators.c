#include  <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	char *string;
	string = malloc(sizeof(char) * 10);
	printf("Enter a string: ");
	fgets(string, 10, stdin);
	printf("You have entered: %s", string);
	free(string);
	return 0;
}
