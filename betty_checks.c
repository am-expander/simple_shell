#include <unistd.h>

/**
 * main - This is the entry point of the program
 *
 * Description: This is the main function that
 * writes a message to the standard output using the write function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *message = "Hello, Betty!\n";
	size_t len = 13;

	write(1, message, len);

	return (0);
}
