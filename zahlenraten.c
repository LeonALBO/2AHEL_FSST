#include <stdio.h>

int main(void)
{
    int zahl;
    int Konstante = 20;

    printf("Gib eine Zahl ein: ");
    scanf("%d", &zahl);

    if (zahl == Konstante)
    {
        printf("Die Zahl ist gleich gross wie die Konstante.\n");
    }

    if (zahl > Konstante)
    {
        printf("Die Zahl ist groesser als die Konstante.\n");
    }

    if (zahl < Konstante)
    {
        printf("Die Zahl ist kleiner als die Konstante.\n");
    }

    printf("die Konstante: %d", Konstante);

    return 0;
}