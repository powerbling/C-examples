#include<stdio.h>

int somma(int c, int d) {
    /*  La funzione deve essere inizializzata con il tipo di variabile
        che dovra restituire e con tutte le variabili che sara necessario
        passare al momento di chiamarla in un'altra funzione.
        Le variabili vengono copiate nelle variabili inizializzate all'interno
        delle parentesi.
        Il tipo di variabile puo essere di tutti quelli utilizzati per
        le variabili ma si aggiunge anche void, nel caso una funzione non
        debba restituire nessun valore.    */

    int r = c + d;
    /*  All'interno del blocco della funzione possono esseci dichiarazioni
        di nuove variabili che verranno create al momento della dichiarazione
        e distrutte quando il programma uscira dalla funzione utilizzata    */

    return r;                           //  Return e la dicitura che permette di restituire il valore desiderato alla parte di codice che ha chiamato la funzione
}


void reverse(char s[]) {
    /*  Se alla funzione viene passato un array, non viene copieto
        perche un array si comporta come una serie ordinata di puntatori,
        quindi se l'array sara modificato all'interno della funzione,
        lo sara anche all'esterno.  */

    int c;
    for (int i = 0, j = 99; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

    /*  le funzioni void non hanno bisogno di restituire nessun valore
        ma comunque, se necessario e possibile utilizzare la dicitura
        "return" per uscire dalla funzione prima del previsto   */
}


int main(int argc, char const *argv[]) {
    /*  Ogni programma esegue sempre la funzione main, che accetta degli
        argomenti come qualsiasi altra funzione e restituisce un valore.
        Questi sono controllati dall'ambiente in cui il programma sara eseguito */
    int a = 0, b = 0, risultato;
    char s[100];

    reverse(s);                         //  L'array s verra modificato anche all'esterno della funzione "reverse"

    risultato = somma(a, b);            //  La funzione viene chiamata e il valore restituito da essa viene salvato nella variabile "risultato"

    return 0;                           //  Normalmente la funzione "main" restituisce un valore pari a 0, altrimenti puo variare da condizioni dipendenti dal programma
}
