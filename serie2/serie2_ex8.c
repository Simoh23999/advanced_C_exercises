#include <stdio.h>
#include <string.h>

int main(){
    char nom[20];
    int nb_noms=0;

    while (1){
        do
        {
            printf("Entre un nom ne depasse pas 20 caractere : ");
            scanf("%s",nom);//probleme avec gets
            if(strlen(nom)>20)
                printf("Ce nom a depasse 20 caractere.\n");
        } while (strlen(nom)>20);

        if (strcmp(nom,"fin") !=0 && strlen(nom) > 10){
            nb_noms++;
        }
        else if(strcmp(nom,"fin") ==0){
            break;
        }
    }
    if (nb_noms){
        printf("Le nombre des noms superieur a 10 est : %d",nb_noms);

    }
    else{
        printf("Aucun nom a depasse 10 caractere. ");
    }

    return 0;
}