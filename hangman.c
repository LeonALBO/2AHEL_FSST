#include <stdio.h>

int main()
{
    const char secret[] = "Programmieren";
    const int len = sizeof(secret) - 1; // Anzahl der char
    char guessed[sizeof(secret) - 1];
    char guess;
    int hits = 0; 

    //variable inittailiesieren: _______________
    for (int i = 0; i < len; i ++) {
        guessed[i] = '_';
    }
    
    printf("Dein Guess(1 Buchstabe): ");
    if (scanf(" %c", &guess) != 1)
    {
        printf("Ungueltig");
        return 1;
    }

    for (int i = 0; i < len - 1; i++) {
        if ((secret[i]) == guess) {
            hits++;
            guessed[i] = guess;
        }
    }

    for (int i = 0; i < len; i++) {
        printf("%c", guessed[i]);
        
    }

    printf("\n");
    printf("Treffer: %d\n", hits);
    return 0;
}