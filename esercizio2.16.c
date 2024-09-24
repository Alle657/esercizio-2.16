#include <stdio.h>

int main() {
    float biglietto, provvigione, prezzoFinale;


    printf("Inserire prezzo biglietto: \n");
    scanf("%f", &biglietto);


    provvigione = biglietto * 0.15;


    if (provvigione < 5) {
        provvigione = 5;
    }


    prezzoFinale = biglietto + provvigione;


    printf("Il valore della provvigione e di %.2f euro\n", provvigione);
    printf("Il prezzo finale del biglietto e di %.2f euro\n", prezzoFinale);

    return 0;
}
