#include <stdio.h>

int strcmp1(const char word1[], char word2[]){
    int i = 0;
    while (word1[i] != '\0') {
        if (word1[i] != word2[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}

// word1 "HalLo\0"
// word2 "Hallo"
int strcmp2(const char word1[], char word2[]) {
    int diff  = 0;
    for (int i = 0; word1[i] != '\0'; diff |= word1[i] != word2[i], i++);
    return !diff;
}

int main(){
    const char secret[] = "Leon";
    const char len = sizeof(secret) - 1;
    char guessed[sizeof(secret) - 1];
    char guess;
    int hits = 0; 
    int Fails;

    //Füllt das Wort mit '_'
    for (int i = 0; len > i; i++){
        guessed[i] = '_';
    }

    while (Fails < 5){
        //Schaut ob die Eingabe passt
        printf("Tippe einen Buchstabe: ");
        if (scanf(" %c", &guess) != 1){
            return 1;
        }

        else
        {
            Fails++;
        }

        //Geht durch jeden Buchstaben durch und kontrolliert ob es an der Stelle passt
        for (int i = 0; len > i; i++){
            secret[i] == guess;
            hits++;
            guessed[i] = guess;
            printf(" %c", guessed[i]);
        }

        int Kontrolle = strcmp(secret, guessed, len, guess);
        
        //Printet Treffer aus
        printf("\n");
        printf("Treffer: %d\n", hits);

        Fails += (hits == 0);
    }

    return 0;
}