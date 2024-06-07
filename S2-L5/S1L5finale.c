#include <stdio.h>

void menu();
void moltiplica();
void dividi();
void ins_string();

int main() 
{
    char scelta = '\0'; //dovrebbe indicare l'inizializzazione (carattere nullo, ASCII 0) comunemente utilizzato per indicare la fine di una stringa in C, ma qui viene utilizzato semplicemente per inizializzare la variabile.
    menu();
    scanf("%c", &scelta);  

    switch (scelta) 
    {
        case 'A':
            moltiplica();
            break;
        case 'B':
            dividi();
            break;
        case 'C':
            ins_string();
            break;
        default:
            printf("Inserisci una delle scelte possibili.\n");
            break;
    }

    return 0;
}

void menu() 
{
    printf("Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
    printf("Come posso aiutarti?\n");
    printf("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");
}

void moltiplica() 
{
    int a = 0, b = 0;
    printf("Inserisci il primo dei due numeri da moltiplicare: ");
    scanf("%d", &a);
    printf("Inserisci il secondo dei due numeri da moltiplicare: "); //facciamo comparire a schermo la richiesta del secondo numero (fini estetici)
    scanf("%d", &b);

    int prodotto = a * b;

    printf("Il prodotto tra %d e %d è: %d\n", a, b, prodotto);
}

void dividi() 
{
    int a = 0, b = 0;
    printf("Inserisci il numeratore: ");
    scanf("%d", &a);
    printf("Inserisci il denominatore: ");
    scanf("%d", &b);

    if (b == 0) {
         printf("Non puoi dividere per zero.\n");
    } else {
        float divisione = (float)a / (float)b;  // float per ottenere una divisione corretta
        printf("La divisione tra %d e %d è: %.2f\n", a, b, divisione); //%.2f due cifre dopo virgola per evitare che filla con gli 0
    }
}

void ins_string() 
{
    char stringa[10]; //potresti aumentare l'array ai fini della sicurezza (overrun) es. stringa[80]
    printf("Inserisci la stringa: ");
    scanf("%s", stringa);  /* Possibile buffer overflow/overrun (quando scrive dati oltre la memoria allocata del buffer sovrascrivendo posizioni di memoria adiacenti)
													  * stringa dovrebbe essere un puntatore (array) perciò è stato tolto & */
		printf("Hai inserito: %s\n", stringa); //prima prendeva l'input ma non restituiva niente, almeno diamo un feed cosi
 }
   