#include <unistd.h>
#include <string.h>
/**
 * main - Entry point of the program
 * Description: Prints a message to the standard error
 * Return: 1
 */
int main(void)
{
	const char msg[] = "and that piece of art is useful\" - ";
	const char add[] = "Dora Korpar, 2015-10-19\n";
	char new_msg[sizeof(msg) + sizeof(add)];

	strcpy(new_msg, msg);
	strcat(new_msg, add);

	write(STDERR_FILENO, new_msg, sizeof(new_msg) - 1);
	return (1);
}

