#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 * @address: address of the main function
 * @num_bytes: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *address, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%.2hhx", address[i]);
		if (i < num_bytes -1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always O
 */
int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes((char *)&main, num_bytes);

	return (0);
}
