#include<stdio.h>

int main(int argc, char const *argv[]) {
    int a = 0, b = 0;               //  inizializzo tre variabili di tipo int

    /*  Quando inizializzo le variabili, ne devo specificare il tipo
        cosi il compilatore conosce quanta memoria occupare per il
        programma.
        Se non le inizializzo dandone un valore immediatamente, verranno
        create con all'interno il valore di quello che era gia presente
        in quelle celle di memoria  */


    int i = 0;
    while (i < 100) {               //  Questo ciclo while controlla se la variabile i e minore di 100

        /*  Il ciclo while controlla all'inizio di ogni iterazione se l'espressione
            nelle parentesi tonde e uguale a zero o no, in caso che sia uguale la
            prossima iterazione non viene eseguita e il programmacontinua da dopo
            il ciclo while. */


        printf("%d\t", i);

        i += i;                     //  i += i e equivalente a i = i + i;
    }


    do {

        /*  Il ciclo do...while e differente perche l'espressione di esistenza
            viene valutata alla fine di ogni iterazione. Questo e fomdamentale
            prche durante l'esecuzione del programma il contenuto del ciclo verra
            eeguito sicuramente una volta.
            Se la condizione non e diversa da zero, il ciclo esce alla fine della
            prossima iterazione.    */
        a += 30;

        i -= 200;
    } while (i < 0);


    for (int j = 0; j < 50; j += 2) {

        /*  Il ciclo for e un ciclo while ma ha tutte le condizioni per funzionare
            all'inizio. Non necessariamente quello che e all'interno delle parentesi
            dev'essere utilizzato per aumentare o diminuire una sola variabile, ma
            si puo utilizzare come si vuole. La struttura fondamentale e:
                    for (espressione che viene eseguita all'inizio; espressione valutata ad ogni iterazione; espressione eseguita all'inizio di ogni iterazione) {codice}
            */
        if (j == 48)
            continue;               //  Continue e un termine utilizzabile solo nei cicli for che permette di interrompere la corrente iterazione e saltare direttamente alla prossima
        printf("%d", j);
    }


    while (a != b) {
        a = a + b;                  //
        b = a - b;                  // Codice di esempio, puo essere qualunque cosa necesaria
        a = a - b;                  //
        a++;                        //


        if (a > 40)
            break;                  //  Break e un termine che permette di uscire completamente dal ciclo, sia while che for che do...while
    }


    return 0;
}
