#include <stdio.h>
#include <stdlib.h>

typedef struct Repertoire_repere{
    char nom[15],prenom[15];
    int Telephone;
}Repertoire;

void afficher(Repertoire *tab,int taille){
    int i,j;

    printf("Les enregistrement : \n\n");
    for(i = 0;i < taille ; i++){
        printf("---------------------------\n");
        printf("Nom : %s\n",tab[i].nom);
        printf("Prenom : %s\n",tab[i].prenom);
        printf("Telephone : %d\n",tab[i].Telephone);
    }
    printf("---------------------------\n\n");

}

int main(){
    int i,j,taille;
    Repertoire *T;

    printf("Entre le nombre des enregistrements : ");
    scanf("%d",&taille);

    T = (Repertoire*)malloc(taille*sizeof(Repertoire));

    printf("\n\nVeuillez saisir les donnees: \n");

    for(i = 0; i < taille ; i++){
        printf("Repertoire no %d : \n",i+1);
        printf("Nom: ");
        scanf(" %s",T[i].nom);
        printf("Prenom: ");
        scanf(" %s",T[i].prenom);
        printf("Tele: ");
        scanf("%d",&T[i].Telephone);
        printf("\n");
    }
    afficher(T,taille);

    return 0;
}