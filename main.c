#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define N 3
#define MAX_STRLEN 30

// Definisci il tipo di dato struct s_studente
struct s_studente {
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    int eta;
    char classe[MAX_STRLEN+1];
};

// Definisci studente come struct s_studente
typedef struct s_studente studente;

int main(int argc, char** argv) {
    // Dichiara le variabili locali
    studente studente;
    int i;
    
    // Codice per l'inserimento, da parte dell'utente, dei dati e del salvataggio
    // nel file
    FILE *puntaFile;
    puntaFile = fopen("prova.txt", "w");
    
    printf("Inserisci i dati per %d studenti:", N);
    for(i=0;i<N;i++) {
        printf("\nInserisci il nome: ");
        scanf("%s", studente.nome);
        fprintf(puntaFile, "%s \n", studente.nome);
        
        printf("Inserisci il cognome: ");
        scanf("%s", studente.cognome);
        fprintf(puntaFile, "%s \n", studente.cognome);
        
        printf("Inserisci l'eta': ");
        scanf("%d", &(studente.eta));
        fprintf(puntaFile, "%d \n", studente.eta);
        
        printf("Inserisci la classe: ");
        scanf("%s", studente.classe);
        fprintf(puntaFile, "%s \n", studente.classe);
    }
    
    fclose(puntaFile);
    
    return (EXIT_SUCCESS);
}