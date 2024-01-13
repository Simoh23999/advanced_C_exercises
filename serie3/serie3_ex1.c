#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *nom=(char*)malloc(30);
    char *debut,*fin,temp;
    int longueur;

    printf("Entre un nom : ");
    scanf("%s",nom);

    debut = nom;
    longueur = strlen(nom)-1;

    for ( debut = nom, fin = nom+(longueur) ; debut < fin; debut++,fin--){
        temp = *fin;
        *fin = *debut;
        *debut = temp;
    }
    printf("Nom inverser : %s\n",nom);
    
    return 0;
}