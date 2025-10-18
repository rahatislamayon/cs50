#include <cs50.h>
#include <stdio.h>

void rows(int bricks);

int main(void)
{
    int height;
    do
    {
        // Get an integer from the user using get_int from the cs50 library.
        height = get_int("Enter the height of the pyramid: ");
    }
    // The loop should continue as long as the height is not within the valid range (1-8).
    while (height < 1 || height > 8);

    // Loop to build the pyramid row by row.
    for (int i = 0; i < height; i++)
    {
        // Print the correct number of spaces for alignment.
        for (int k = 0; k < height - (i + 1); k++)
        {
            printf(" ");
        }
        // Call the rows function to print the bricks for the current row.
        rows(i + 1);
        printf("\n");
    }
}

void rows(int bricks)
{
    // A simple for loop to print the specified number of '#' characters.
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
}
