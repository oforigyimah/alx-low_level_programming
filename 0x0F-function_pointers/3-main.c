#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - cal math
 * @argc: args count
 * @argv: char of array
 *
 * Return: 0 on success otherwise 98
 */

int main(int argc, char **argv)
{
		int n1, n2, ans;
		int (*fun)(int, int);

		if ((argc != 4))
			{
			printf("Error\n");
			exit(98);
			}
		fun = get_op_func(argv[2]);
		if (fun == NULL )
			{
			printf("Error\n");
			exit(98);
			}
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);

		if ((*argv[2] == '/' && n2) || (*argv[2] == '%' && n2))
			{
		  printf("Error\n");
			exit(98);
			}
		ans = fun(n1, n2);
		printf("%d\n", ans);
		exit(0);
}
