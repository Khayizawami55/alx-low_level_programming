#include <stdio.h>

/**
 * main - prints the value of 24
 * Return: 0
 */
int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 24; // Set the initial value of i to 24

        while (i < 10) // The condition will be false, and the loop won't be executed
        {
                i++; // Increment i
        }

        printf("%d\n", i); // Print the value of i

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
