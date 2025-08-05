#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Condition 2 arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Condition only digits
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Key value
    int key = atoi(argv[1]);

    // Get plaintext
    string plaintext = get_string("Plaintext: ");
    printf("Ciphertext: ");

    // Print Ciphertext
    for (int j = 0; j < strlen(plaintext); j++)
    {
        if (isupper(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 65 + key) % 26 + 65);
        }
        else if (islower(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 97 + key) % 26 + 97);
        }
        else
        {
            printf("%c", plaintext[j]);
        }
    }
    printf("\n");
}
