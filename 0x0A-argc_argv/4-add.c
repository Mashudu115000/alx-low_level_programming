#include <stdio.h>

/**
 * main - Print the result
 * @argv: number of arguments
 * @argc: arguments vector 
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;
	
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(arg[i]);
	}
	printf("%d\n, add");
	return (0);
}

