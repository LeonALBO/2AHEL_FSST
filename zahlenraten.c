#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int zahl;
    int Konstante = rand() % 50 + 1;
    int Versuche = 10;
    int cheat = -1;

    printf("Rate die Zahl\n");
    printf("Die Zahl ist zwischen 1 und 50.\n");

    while (Versuche > 0){
        printf("Gib eine Zahl ein: ");
        scanf("%d", &zahl);

        if (zahl > Konstante){ // Wenn die Zahl kleiner ist
            printf("Die Zahl ist kleiner.\n");
            Versuche --;
            printf("Du hast noch %d Versuche.\n", Versuche);
        }

        else if (zahl < Konstante && zahl != cheat){ // Wenn die Zahl groesser ist
            printf("Die Zahl ist groesser.\n");
            Versuche --;
            printf("Du hast noch %d Versuche.\n", Versuche);
        }

        else if (Versuche == 0){ // Wenn keine Versuche mehr übrig sind
            printf("Die Geheimzahl war %d.\n", Konstante);
            break;
        }

        else if (zahl == Konstante){ // Wenn die Zahl richtig ist
            printf("Du hast gewonnen.\n");
            break;
        }

        else if (zahl == cheat && cheat < 0){ // Wenn die Zahl 0 ist, dann gib die Konstante aus
            printf("Die Geheimzahl war %d.\n", Konstante);
            break;
        }
        
    }
    
    return 0;
}