#include <stdio.h>

int power(int basis, int exponent) {
    printf("Ergebnis: %d\n", power(basis, exponent) == 1);
    printf("Ergbenis: %d\n", power(basis, exponent) == 0);
    return 0;
}

int main() {
    int basis = 2;
    int exponent = 3;

    int Funktion = power(basis, exponent);

    //printf("Ergebnis: %d\n", power(2, 3) == 8);

    return 0;
}