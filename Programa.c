#include <stdio.h>

void sumarCien(int* a){
	*a+=100;
}

int main(){
	int paraSumar = 100;
	sumarCien(&paraSumar);
	printf("100 + 100 = %d",paraSumar);
	return 0;
}
