#include <stdio.h>

int main()
{
	int count;
	printf("number  square  cude\n");
	for (count = 1; count < 11; count++)
		printf("%d\t%d\t%d\t\n",count,count*count, count*count*count);
	return 0;
}