#include <stdio.h>

int len(char* wort) {
    int i = 0;
    for (; wort[i] != '\0'; i++)
        ;
    return i;
}

// Vergleichen
int cmp(char* wort1, char* wort2) {
    for (int i = 0; wort1[i] != '\0'; i++) {
        if (wort1[i] != wort2[i]) {
            return -1;
        }
    }
    return 0;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        return -1;
    }

    char* wort1 = argv[1];
    char* wort2 = argv[2];

    int len1;

    // weiße den Rückgabewert vom cmp einer variabelne mit dem Name eq zu
    // Alternative Formulierung: wende die die Funktion cmp auf dei Argumenente wort1 und wort2 
    // wieße den Rückgabewert vom cmp einer Varialbel mit dem Namen eq z

    int Länge = len(wort);
    
    int eq = cmp(wort1, wort2);

    if (eq == 0) {
        printf("Die Wörter sind gleich\n");
        return 0;
    }
    else {
        printf("Die Wörter sind ungleich\n");
        return -1;
    }

    return 0;
}