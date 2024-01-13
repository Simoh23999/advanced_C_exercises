#include <stdio.h>
#include <stdlib.h>

int main() {
    int nb=0,choix;

    do {
        printf("Valeur actuelle : %d\n\n",nb);

        printf("======== Menu ========\n");
        printf("1. Ajouter 2\n");
        printf("2. Multiplier par 3\n");
        printf("3. Soustraire 5\n");
        printf("4. Quitter\n");
        printf("======================\n");
                
        printf("Entre votre choix : ");
        scanf("%d",&choix);

        switch(choix){
            case 1:nb+=2;
                   system("cls");
                   break;
            case 2:nb*=3;
                   system("cls");
                   break;
            case 3:nb-=5;
                   system("cls");
                   break;
            case 4:break;
            default:
                   system("cls");
                   printf("Choix non valide.\n");
        } 

    } while (choix!=4);

    return 0;  
}
