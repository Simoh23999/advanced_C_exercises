#include <stdio.h>

float somme_usuelle(float tab[3][4]);
float somme_pointeur(float tab[3][4]);

int main(){
    float T[3][4],somme;
    int i,j;
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 4; j++){
            printf("Entre [%d][%d] : ",i,j);
            scanf("%f",&T[i][j]);
        }
        
    }
    
    somme = somme_usuelle(T);
    printf("Somme usuelle : %.2f",somme);

    somme = somme_pointeur(T);
    printf("    Somme avec pointeur : %.2f\n",somme);

    return 0;
}

float somme_usuelle(float tab[3][4]){
    int i,j;
    float somme=0;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 4; j++){
            somme += tab[i][j]; 
        }
        
    }
    
    return somme;
}

float somme_pointeur(float tab[3][4]){
    float somme=0;
    float *ptr;

    for ( ptr = &tab[0][0]; ptr <= &tab[2][3]; ptr++)
    {
        somme += *ptr;
    }
    
    return somme;
}