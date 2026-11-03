#include <stdio.h>

int countHits(const char secret[], const char guess){
    int hits = 0;
    for (int i = 0; i < (sizeof(secret) -1) ; i++)
    {
        if ((secret[i]) == guess){
        hits++;
        }
    }
    return hits;
}

int main()
{
    const char secret[] = "JOSEE";
    const int len = sizeof(secret) - 1;
    char guessed[sizeof(secret) - 1];
    const char guess;

    for (int i = 0; i < len; i++){
        guessed[i] = '_';
    }

    printf("buchstaben raten: ");
    if (scanf(" %c", &guess) != 1)
    {
        printf("ungueltige Eingabe\n");
        return 1;
    }

    /*int hits = 0;
    for (int i = 0; i < (sizeof(secret) / sizeof(char)) -1; i++)
    {
        if ((secret[i]) == guess){
        hits++;

    }
    }*/
   int hits = countHits(secret, guess);
    
    printf("hits: %d", hits);
    
    return 0;
}