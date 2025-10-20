//#include <cs50.h>
#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Error: Cannot divide by zero.\n");
        return 0;
    }
    return a / b;
}

int main(void)
{
    printf("Simple Command-Line Calculator\n");
    printf("------------------------------\n");
    printf("Available operations:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    int choice;
    float x, y;

    // Input for operation choice and numbers will be handled by cs50.h functions
    float y = get_float("Enter second number: ");

    float result;

    switch (choice)
    {
        case 1:
            result = add(x, y);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = subtract(x, y);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = multiply(x, y);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            result = divide(x, y);
            if (y != 0)
            {
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Invalid choice.\n");
    }
}
