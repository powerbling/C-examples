#include<stdio.h>

int main(int argc, char const *argv[]) {
    short a = 0, b = 0;

    if (a < 100)                //  Se e sufficiente un'espressione che occupa una sola riga, non e necessario utilizzare le parentesi graffe
        a = 50;

        /*  If permette di eseguire la parte di codice presente al suo
            interno solo se la condizione all'interno delle parentesi
            risulta differente da 0.    */

    if (b < 0)
        b = 0;
    else {
        b = 10;
        a ++;
    }

    if (a < b) {
        a = b;
        b = 10;
    } else if (a > b) {         //  Else if permette di concatenare molti if tenendo il codice molto piu ordinato. Una nuova condizione e richiesta.
        b = a;
        a = 10;
    } else {
        b = 10;
        a = 10;
    }


    switch (b) {                // Switch permette di controllare tante condizioni senza occupare molro spazio. All'interno della parentesi va la variabile da controllare
        case 10:                //  Per ogni "case" va un valore che viene confrontato con la variabile. Ogni valore deve essere concordante con la variabile
            printf("TROVATO 10\n");
            break;              //  Dopo ogni "case" va messo un break per uscire dallo switch (viene trattato come un ciclo) e per evitare che avvenga una "cascata"
        case 30:
            printf("TROVATO 30\n");
            break;
        default:                //  La condizione di default viene eseguita se nessuno dei "case" viene trovato come positivo.
            printf("NON TROVATO\n");
            break;
    }

    return 0;
}
