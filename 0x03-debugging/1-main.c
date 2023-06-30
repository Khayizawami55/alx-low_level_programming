#include <stdio.h>

/**
 * main - prints the value of 24
 * Return: 0
 */
int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                i++; // Increment i
        }

        printf("%d\n", i); // Print the value of i after the loop

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
