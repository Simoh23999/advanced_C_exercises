#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *saisir();
void afficher(char *chaine);
char *inverse(char *chaine);
int mots(char *chaine);

int main(){
    char choix,*chaine;
    int nb_mots;

    do
    {
        printf("\n======================= MENU ========================\n\n");
        printf("1. Saisir une phrase\n");
        printf("2. Afficher la phrase\n");
        printf("3. Inverser la phrase\n");
        printf("4. Compter les mots de la phrase\n");
        printf("5. Quitter\n");
        printf("\n=====================================================\n\n");

        printf("Entre choix : ");
        scanf(" %c",&choix);
        switch(choix){
        case '1':
            system("cls");
            chaine = saisir();
            break;
        case '2':
            system("cls");
            afficher(chaine);
            break;
        case '3':
            system("cls");
            chaine = inverse(chaine);
            break;
        case '4':
            system("cls");
            nb_mots = mots(chaine);
            printf("Le nombre des mots : %d\n\n",nb_mots);
            printf("Frapper la touche entrer pour revenir au menu.");
            getchar();
            getchar();
            system("cls");
            break;
        case '5':
            system("cls");
            break;
        default:
            printf("Choix invalide\n\n");
            break;
        }
    } while (choix != '5');

    return 0;
}


char *saisir(){
    char *chaine=(char*)malloc(100);

    printf("Entre une chaine de caractere : ");
    scanf("%s",chaine);
    getchar();
    printf("Frapper la touche entrer pour revenir au menu.");
    getchar();
    system("cls");

    return chaine;
}

void afficher(char *chaine){
    printf("%s\n\n",chaine);
    getchar();
    printf("Frapper la touche entrer pour revenir au menu.");
    getchar();
    system("cls");
}


char *inverse(char *chaine){
    char fin,temp;
    char *ptr,*ctr;

    fin = strlen(chaine)-1;
    
    for ( ptr=chaine,ctr=chaine+fin ; ptr<ctr ; ptr++,ctr--){
        temp = *ptr;
        *ptr = *ctr;
        *ctr = temp;
    }
    
    printf("%s\n\n",chaine);
    getchar();
    printf("Frapper la touche entrer pour revenir au menu.");
    getchar();
    system("cls");
    
    return chaine;
}

int mots(char *chaine){
    int i,nb_mots=0;

    for ( i = 0; chaine[i] != '\0'; i++){
        if (!isspace(chaine[i])){
            nb_mots++;
        
          while (!isspace(chaine[i]) && chaine[i]!='\0'){
              i++;
          }
        }
         
    }

    return nb_mots;
}