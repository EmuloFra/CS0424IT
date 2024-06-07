#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{ 
	char scelta = {'\0'}; //la dichiarazione è sbagliata
	menu ();
	scanf ("%d", &scelta); //Usa %c per leggere un carattere, d è per interi

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
                
          //se mette una scelta non valida? metti che se non sceglie questi di default stampa l'errore
                
	}

return 0;

}


void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica ()
{
	short int  a,b = 0; //short
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%f", &a);
	scanf ("%d", &b);

	short int prodotto = a * b;

	printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);
}


void dividi ()
{
        int  a,b = 0;
        printf ("Inserisci il numeratore:");
        scanf ("%d", &a);
	printf ("Inserisci il denumeratore:"); // denominatore*
        scanf ("%d", &b);

        int divisione = a % b; //questo è per il resto, trova il modulo, lui chiede la divisione

        printf ("La divisione tra %d e %d e': %d", a,b,divisione);
        //se il divisore è zero?? Implementa condizionale, errore runtime?
}





void ins_string () 
{
	char stringa[10];
        printf ("Inserisci la stringa:"); 
        scanf ("%s", &stringa);
}

