#include <stdio.h>

void initialisation(int iNb_jours[]){
    int i;

    for ( i = 1; i < 13; i++){
        if (i == 2){
            iNb_jours[i] = 28; 
        }
        else if ((i%2 == 0 && i <= 7)||(i%2 != 0 && i > 7))
        {
            iNb_jours[i] = 30;
        }
        else{
            iNb_jours[i] = 31;
        }
    }
}

void impression(int iNb_jours[]) {
  int i;

  for ( i = 1; i < 13; i++) {
    printf("Nombre de jours de %d eme mois : %d\n",i,iNb_jours[i]);
  }
}

void impression_mois_i(int iNb_jours[],int mois) {
  printf("Le mois %d a %d jours\n",mois,iNb_jours[mois]);
}

int main(){
    int iNb_jours[13],mois;

    initialisation(iNb_jours);
    impression(iNb_jours);

    do
    {
       printf("Entre le nombre de mois : ");
       scanf("%d",&mois);
       if (mois <= 0 || mois > 12){
        printf("Mois invalide\n");
       }
    } while (mois <= 0 || mois > 12);
    impression_mois_i(iNb_jours,mois);
    
    return 0;
}