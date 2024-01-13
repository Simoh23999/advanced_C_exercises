#include <stdio.h>

int main() {
    int nb,total=0,somme=0,min,vrai=1;
    int somme_val_positives=0,min_positives;

    printf("Entre une suite des nombres,entre 999 pour arreter:\n");
    while (vrai) {
        scanf("%d",&nb);

        if(nb==999 && total==0){
            printf("\tLa suite est vide.\n");
            return 0;
        }
        else if(nb==999){
            break;
        }
        if (total==1){
            min = nb;
        }
        else if(nb<min){
            min = nb;
        }
        if(nb>0){
            somme_val_positives += nb;
            if(total==1){
                min_positives = nb;
            }
            else if(nb < min_positives){
                min_positives = nb;
            }
        }
        total++;
        somme += nb;
    }

    printf("Le nombre total de valeurs de la suite : %d\n", total);
    printf("La somme des valeurs lues : %d\n",somme);
    printf("Le minimum : %d\n",min);
    printf("La somme des valeurs strictement positives : %d\n",somme_val_positives);
    printf("Le minimum des valeurs strictement positives : %d\n",min_positives);

    return 0;  
}
