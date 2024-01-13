#include <stdio.h>

int main(){
    int nb[20],nombre,i,vrai=1;
    int nombre_totale,nombre_paires;

    // partie 1
    //remplir le tableau
    for (i=0 ; i<20 ; i++){
        printf("Entre la valeur numero %d:",i+1);
        scanf("%d",&nb[i]);
    }
    
    //parcourir le tableau
    printf(" Le carre des nombres paires sont: \n");
    for(i=0 ; i<20 ; i++){
        if(nb[i]%2==0)
            printf(" %d ,",nb[i]*nb[i]);
    }

    // partie 2
    printf("Entre les nombres ,100 pour arreter :");


    while (vrai){
        scanf("%d",&nombre);
        if (nombre==100){
           break;
        }
        else if(nombre%2==0){
            printf(" %d au carre donne %d\n",nombre,nombre*nombre);
            nombre_paires++;
        }

        nombre_totale++;  
    }
    printf("Nombre total des nombres entres: %d\n", nombre_totale);
    printf("Nombre des nombres paires : %d\n", nombre_paires);

    return 0;
}