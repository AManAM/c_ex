#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 8

int main(int argc, char* argv[]){
	int m[MAX][MAX], i, j;
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			m[i][j] = j;
			printf("%d %d \n", i, j);		
		}
	}
	return 0;
}
