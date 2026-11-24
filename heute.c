#include <stdio.h>
#include <stdlib.h>

int strlen(char* wort) {
    int sz = 0;
    for (; wort[sz] != '\0'; sz++);
    return sz;
}

void dump(char* wort) {
    for (int i = 0; wort[i] != '\0'; i++) {
        printf(" %c\n", wort[i]);
    }

    printf("\n");
}

char* init(int size, char c, int sz) {
    char *wort = malloc(sz + 1);

    for (int i = 0; i < sz; i++) {
        wort[i] = c;
    }

    wort[sz] = '\0';

    return wort;
}

int main (int argc, char* argv[]) {
    char* wort = "WORT";
    const int n = strlen(wort);
    char wort2[n] = init(strlen(wort), '_');
    int sz;

    dump(wort2);
    free(wort2);

    return 0;
}