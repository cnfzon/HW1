#include <stdio.h>

int main()
{
	float wk=0,hk=0,num=0;
	printf("weightinKilograms : ");
	scanf_s("%f", &wk);
	printf("heightinMeters : ");
	scanf_s("%f", &hk);
	num = wk / hk / hk;
	if(num <18.5)              printf("\nUnderweight\n");
	if(num >18.5 && num <24.9) printf("\nNormal\n");
	if(num >25 && num <29.9)   printf("\nOverweight\n");
	if(num >30)                printf("%f",num);
	return 0;
}