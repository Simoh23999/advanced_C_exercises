#include <stdio.h>
#include <string.h>

struct etudiant{
    char nom[15],prenom[15];
    int CNE;
    float notes[4],moyenne;
};

int main(){
    struct etudiant T[5];
    struct etudiant temp;
    int indice=0,i,j,k,cne;
    float somme,moyenne,notes[4];
    char nom[15],prenom[15];

printf("====================================================\n");
printf("Question 1 :\n");
printf("====================================================\n\n");

    printf("Entre les informations de 5 etudiants\n");
    for ( i = 0; i < 5; i++) {
        printf("Etudiant No %d: \n\n",i+1);
        printf("Entre nom : ");
        scanf("%s",T[i].nom);
        printf("Entre prenom : ");
        scanf("%s",T[i].prenom);
        printf("Entre CNE : ");
        scanf("%d",&T[i].CNE);

        somme=0;
        for ( j = 0; j < 4; j++){
            printf("Note No %d : ",j+1);
            scanf("%f",&T[i].notes[j]); 
            somme += T[i].notes[j];
        }
        T[i].moyenne = somme/4;
    }
printf("====================================================\n");
printf("Question 2 :\n");
printf("====================================================\n\n");

//chercher la plus grande moyenne
    moyenne = T[0].moyenne;
    for ( i = 1; i < 5; i++){
        if (moyenne < T[i].moyenne){
            moyenne = T[i].moyenne;
            indice = i;
        }
    }
    
//affichage

    printf("\n\nEtudiant avec la plus grande moyenne :\n\n");
    printf("Nom : %s\n",T[indice].nom);
    printf("Preom : %s\n",T[indice].prenom);
    printf("CNE : %d\n",T[indice].CNE);
    for ( i = 0; i < 4; i++)
        printf("note No %d: %.2f\n",i+1,T[indice].notes[i]);
    printf("Moyenne : %.2f\n\n",T[indice].moyenne);

//tri
printf("====================================================\n");
printf("Question 3 :\n");
printf("====================================================\n\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4-i; j++) {
            if (T[j].moyenne < T[j+1].moyenne) {
              temp = T[j];
              T[i] = T[j+1];
              T[j+1] = temp;
            
            }
        }
    }


    for ( i = 0; i < 5; i++){
        printf("\n\nEtudiant No%d \n",i+1);
        printf("Nom: %s\n",T[i].nom);
        printf("Prenom: %s\n",T[i].prenom);
        printf("CNE: %d\n",T[i].CNE);
        for(j=0; j<4; j++) 
            printf("Note No %d: %.2f \n",j+1,T[i].notes[j]);
        printf("Moyenne : %.2f \n", T[i].moyenne);
    }
    

    return 0;
}