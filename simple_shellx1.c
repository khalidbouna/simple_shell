#include "simple_shell.h"

/**
 * main - Entry point for the simple_shell program.
 * 
 * Return: Always 0.
 */
int main(void)
{
    char *input;
    int status;

    do {
        printf("$ ");
        input = read_line();
        if (input == NULL)
        {
            printf("\n");
            break;
        }
        status = execute_command(input);
        free(input);
    } while (status);

    return 0;
}
