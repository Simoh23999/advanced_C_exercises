#include <stdio.h>

void afficher_matrice(int matrice[5][5]){
    int i,j;

    for ( i = 0; i < 5; i++){
        for ( j = 0; j < 5; j++)
            printf("%d   ",matrice[i][j]);
        printf("\n");
    }
    
}

int main(){
    int iMat[5][5];
    int i,j;

    for ( i = 0; i < 5; i++){
        for ( j = 0; j < 5; j++){
            printf("Entre l'element (%d,%d) : ",i,j);
            scanf("%d",&iMat[i][j]);
        }  
    }
    
    afficher_matrice(iMat); 

    return 0;
}