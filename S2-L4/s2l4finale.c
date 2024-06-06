#include <stdio.h>

// Funzione per iniziare una nuova partita
void nuovaPartita() {
    char nome[50];
    int punteggio = 0;
    int risposta;

    printf("Inserisci il tuo nome: ");
    scanf("%s", nome);

    // Domanda 1
    printf("Qual è il Pokémon iniziale di tipo Acqua nella regione di Kanto?\n");
    printf("1) Squirtle\n2) Totodile\n3) Piplup\n");
    printf("La tua risposta: ");
    scanf("%d", &risposta);
    if (risposta == 2) {
        punteggio++;
    }

    // Domanda 2
    printf("Quale di questi Pokémon è di tipo Drago?\n");
    printf("1) Charizard\n2) Dragonite\n3) Gyarados\n");
    printf("La tua risposta: ");
    scanf("%d", &risposta);
    if (risposta == 2) {
        punteggio++;
    }

    // Domanda 3
    printf("Qual è l'evoluzione finale di Eevee di tipo Fuoco?\n");
    printf("1) Flareon\n2) Jolteon\n3) Umbreon\n");
    printf("La tua risposta: ");
    scanf("%d", &risposta);
    if (risposta == 1) {
        punteggio++;
    }

    printf("%s, hai totalizzato %d punti!\n", nome, punteggio);
}

int main() {
    char scelta;

    printf("Benvenuto al gioco di domanda/risposta!\n");

    do {
        printf("Scegli un'opzione:\n");
        printf("A) Iniziare una nuova partita\n");
        printf("B) Uscire dal gioco\n");
        printf("La tua scelta: ");
        scanf(" %c", &scelta); //c char singolo s per stringhe
        if (scelta == 'A' || scelta == 'a') {
            nuovaPartita();
        } else if (scelta == 'B' || scelta == 'b') {
            printf("Alla prossima.\n");
        } else {
            printf("Riprova.\n");
        }
    } while (scelta != 'B' && scelta != 'b');

    return 0;
}