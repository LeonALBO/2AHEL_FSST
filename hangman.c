#include <stdio.h>

int main()
{
    const char secret[] = "Hallo";
    char guess;

    printf("Dein Guess: ");

    if (scanf(" %c", &guess) != 1)
    {
        printf("Ungueltig");
        return 1;
    }
    
    else 
    {
        printf("Gueltig\n");
    }

    int hits = 0;
    for (int i = 0; i < (sizeof(secret) / sizeof(char)) - 1; i++) {
        if ((secret[i]) == guess) {
            hits++;
        }
    }
    printf("Treffer: %d", hits);

    return 0;
}