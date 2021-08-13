#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main() {
	float x[2];
	printf("Enter the number : ");
	scanf("%f", &x[0]);
	printf("Enter another number : ");
	scanf("%f", &x[1]);
	printf("%f + %f= %f \n", x[0], x[1], x[0] + x[1]);
	printf("%f - %f = %f \n", x[0], x[1], x[0] - x[1]);
	printf("%f * %f = %f \n", x[0], x[1], x[0] * x[1]);
	printf("%f / %f = %f \n", x[0], x[1], x[0] / x[1]);

	return 0;
}