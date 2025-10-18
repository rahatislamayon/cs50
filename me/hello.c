// This line includes the CS50 library, which provides useful functions like get_string.
#include <cs50.h>


// This line includes the standard input/output library, which is needed for printf.
#include <stdio.h>


// This is the main function, where the program execution begins.
int main(void)
{
    // The get_string function prompts the user with "what's your name?"
    // The user's input is then stored in a variable called 'name' of type 'string'.
    string name = get_string("What's your name? ");

    // The printf function prints a greeting to the console.
    // The '%s' is a placeholder that will be replaced by the value of the 'name' variable.
    // The '\n' character creates a new line.
    printf("hello, %s\n", name);
}
