#include <stdio.h>

void sumarCien(int* a){
	*a+=100;
}

int main(){
	int paraSumar = 100;
	sumarCien(&paraSumar);
	printf("%d",paraSumar);
	return 0;
}
