#include <stdio.h>
#include <string.h>

int rabatt(int hours, int prize) {
    if (hours >= 5) {
        prize *= 0.9;
        printf("Gesamtpreis: %d Euro\n", prize);
    }

    else {
        printf("Gesamtpreis: %d Euro\n", prize);
    }

    return 0;
}

int main(int argc, char* argv[]) {

    int citybike = 5;
    int mountainbike = 8;
    int ebike = 12;
    int prizes[3] = {5, 8, 12};
    char* array[3] = {"Citybike", "Mountainbike", "E-Bike"};

    int anzahl[3] = {10, 6, 4};

    int hours;
    double prize;

    printf("Anzahl der Stunden: ");
    scanf("%d", &hours);

    for (int i = 0; i < 3; i++) {
        if (strcmp(argv[1], array[i]) == 0) {
            prize = prizes[i] * hours;
        }   
    }

    printf("Fahrrad: %s\n", argv[1]);
    printf("Stunden: %d\n", hours);

    int Kontrolle = rabatt(hours, prize);
    
    return 0;
}