#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
	int a, b, c, d, denominator;
	printf("Give me the numerator of the first one: ");
	scanf("%d",&a);
	printf("Give me the denominator of the first one: ");
	scanf("%d",&b);
	printf("Give me the numerator of the second one: ");
	scanf("%d",&c);
	printf("Give me the denominator of the second one: ");
	scanf("%d",&d);
	if(b==d)
		denominator = b;
	else
		denominator = b*d;
	printf("%d/%d + %d/%d = %d/%d", a, b, c, d, (a+c),(denominator));
	return 0;
}
