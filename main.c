#include <stdio.h>

int main() {
    int numeroProdotti;
    float costo, totale = 0.0;

    printf("Quanti prodotti hai acquistato? ");
    scanf("%d", &numeroProdotti);

    for (int i = 0; i < numeroProdotti; i++) {
        printf("Costo del prodotto %d: ", i + 1);
        scanf("%f", &costo);
        totale += costo;
    }

    printf("Totale speso: %.2f\n", totale);

    return 0;
}
