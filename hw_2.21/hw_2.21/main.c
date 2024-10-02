#include <stdio.h>

int main()
{
	int count;
	printf("*********        ***            *             *    ");
	for (count = 0; count < 7; count++)
	{
		printf("\n*       *     ");                                            //picture_1
		if (count == 0 )              printf(" *     *         ***           * *   "); //picture_2 picture_3
		else if (count == 1)          printf("*       *       *****       ");
		else if (count == 6)          printf(" *     *          *            * *   ");
		else                          printf("*       *         *         ");

		if (count == 1 || count == 5) printf("  *   *  ");                     //picture_4
		if (count == 2 || count == 4) printf(" *     * ");                     //picture_4
		if (count == 3)               printf("*       *");                     //picture_4
	}
	printf("\n*********        ***            *             *    \n");
	return 0;
}