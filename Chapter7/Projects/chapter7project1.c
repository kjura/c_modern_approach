#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
// Chapter 7 Project1
// for short int Overflow 182 * 182
// for int Overflow for 

int main(void)
{
	int i, n;
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);	


	for (i = 1; i <= n; i++) {

		/*if (i*i > INT_MAX / i)
		{ 
			printf("Integer overflow for int on %d * %d\n", i, i);
			return 0;
		}
		if ((i*i < INT_MIN / i))
		{ 
			printf("Integer overflow for int on %d * %d\n", i, i);
			return 0;
		}*/

		printf("Iteration number %d. Value for i*i is: %d\n", i, i*i);

	}

	/*for (i = 1; i <= n; i++) {

		/*if (i*i > SHRT_MAX / i )
		{
			printf("Integer overflow for short int on %d * %d\n", i, i);
			//return 0;
		}
		if ((i*i < SHRT_MIN / i))
		{
			printf("Integer overflow for short int on %d * %d\n", i, i);
			//return 0;
		}

		printf("Iteration number %d. Value for i*i is: %hd\n", i, i*i);

	}*/


	return 0;
}
