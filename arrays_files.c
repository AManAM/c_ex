#include <stdio.h>

int main(){
	//int values[] = {1,2,4,5,6,7,8,9,0};
	//int j = values[6];
	//values[j] = values[3];
	//printf("%d", values[j]);
	//int values[2][2] = {{0,1},{0,1}};
	//values[0][0] = 6;
	FILE *file = fopen("sample.txt","w+");
	fclose(file);
	return 0;
}
