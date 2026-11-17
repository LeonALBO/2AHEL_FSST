#include <stdio.h>

leet(char* wort, char ersatz, int hits, int len) {
    for (int i = 0; i < len; i++) {
        if (wort[i] == 'e') {
            wort[i] = ersatz;
            hits++;
        }

        if (hits > 0) {
            return hits;
        }
    }
}

int main(int argc, char* argv[]) {
    char* wort = argv[1];
    char ersatz = '3';
    int hits;
    int len = sizeof(wort) - 1;

    //int Funktion = leet(wort, ersatz, hits, len);

    return 0;
}