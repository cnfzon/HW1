#include <stdio.h>

int main()
{
	int count,num_1,num_2=1;
	for (count = 0; count < 5; count++)
	{
		for (num_1 = 5; num_1 > num_2; num_1--) printf(" ");
		for (num_1 = 0; num_1 < num_2; num_1++) printf("*");
		if (count > 0) for (num_1 = 1; num_1 < num_2 ; num_1++)  printf("*");
		printf("\n");
		num_2++;
	}
	return 0;
}