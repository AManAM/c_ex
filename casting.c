#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(int argc, char* argv[]){
	int a = 900;
	int *u = &a;
	*u+=100;
	return 0;
}
