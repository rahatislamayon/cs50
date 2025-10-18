#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// Function prototype for Do_substitute. The prototype must match the function's definition.
// This function performs the substitution cipher on the plaintext.
void Do_substitute(string key);

// This function gets the alphabet array value of each plaintext element
// and then prints the corresponding ciphertext character.
void alpha_arr_val(char pos, string key);

// The main function where program execution begins.
int main(int argc, string argv[])
{
    // Check for the correct number of command-line arguments.
    if (argc == 2)
    {
        // Check if the key has a length of 26 characters.
        if (strlen(argv[1]) == 26)
        {
            // Loop through the key to validate its characters.
            for (int i = 0; i < strlen(argv[1]); i++)
            {
                // Check if the character is an alphabet.
                if (!isalpha(argv[1][i]))
                {
                    printf("Key must contain 26 characters.\n");
                    return 1;
                }

                // Check for repeated alphabets in the key.
                for (int j = i + 1; j < strlen(argv[1]); j++)
                {
                    if (toupper(argv[1][j]) == toupper(argv[1][i]))
                    {
                        printf("Key must not contain repeated alphabets.\n");
                        return 1;
                    }
                }
            }

            // If the key is valid, proceed with substitution.
            Do_substitute(argv[1]);
        }
        else
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }
    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    return 0;
}

// Function to perform the substitution.
void Do_substitute(string key)
{
    // Get the plaintext from the user.
    string p = get_string("plaintext: ");
    printf("ciphertext: ");

    // Loop through each character of the plaintext.
    for (int i = 0; i < strlen(p); i++)
    {
        // Check if the character is an alphabet.
        if (isalpha(p[i]))
        {
            // Preserve the original case of the plaintext character.
            char x = p[i];

            // Get the corresponding ciphertext character using the helper function.
            alpha_arr_val(x, key);
        }
        else
        {
            // If the character is not an alphabet, print it as is.
            printf("%c", p[i]);
        }
    }
    printf("\n");
}

// Helper function to find and print the ciphertext character.
void alpha_arr_val(char pos, string key)
{
    // Determine the base character and index.
    int index;

    if (islower(pos))
    {
        index = pos - 'a';
        printf("%c", tolower(key[index]));
    }
    else
    {
        index = pos - 'A';
        printf("%c", toupper(key[index]));
    }
}
