#include <stdio.h>
#include <ctype.h>

int main() {
    char cCaractere,chaine[100];
    int nb_chiffres=0,nb_espaces=0,nb_autres=0,i=0;

    printf("Entre une phrase : ");
    scanf("%s",chaine); //j'ai un probleme dans la fonction gets
    
    while(chaine[i] != '\0'){
        if (isdigit(chaine[i])) {
        nb_chiffres++;
        }
        else if (isspace(chaine[i])) {
        nb_espaces++;
        }
        else {
        nb_autres++;
        }
        i++;
    }

    printf("Chiffres : %d   Espacement : %d   Autres : %d\n",nb_chiffres,nb_espaces,nb_autres);

    return 0;
}
