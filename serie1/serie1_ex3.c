#include <stdio.h>

int main() {
    int nb;
    float facture;

    printf("Entre le nombre des photocopies : ");
    scanf("%d",&nb);

    if(nb<=10){
        facture = 1.0*nb;
    } 
    else if(nb<=30){
        facture = 0.6*nb;
    } 
    else{
        facture = 0.4 *nb;
    }

    printf("La facture est : %.2f  \n",facture);

    return 0; 
}
