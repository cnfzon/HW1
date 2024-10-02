#include <stdio.h>

int main()
{
	float a, b, c, d, e, num = 0;
	printf("Total miles driven per dey : ");
	scanf_s("%f", &a);
	printf("Cost per gallon of gasoline : ");
	scanf_s("%f", &b);
	printf("Average miles per gallon : ");
	scanf_s("%f", &c);
	printf("Parking fees per day : ");
	scanf_s("%f", &d);
	printf("Tolls per day : ");
	scanf_s("%f", &e);
	num = a / c * b + d + e;
	printf("Total cost : %.2f\n\n", num);
	return 0;
}