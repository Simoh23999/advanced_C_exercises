#include<stdio.h>
#include <stdlib.h>

int chercher(float *T, int taille, float val){
    int i;
    for(i=0; i<taille; i++)
        if(T[i] == val)
            return i;
         
    return(-1);
}
int main(){
    int i,taille,pos;
    float val,*tab;


    printf("Entre le nombre des elements a entrer : ");
    scanf("%d",&taille);

    tab = (float*)malloc(taille*sizeof(float));

    for(i = 0; i < taille; i++){
        printf("nombre numero %d : ",i);
        scanf("%f",&tab[i]);
    }
    printf("Entre la valeur a rechercher: ");
    scanf("%f",&val);
    pos = chercher(tab,taille,val);
    if (pos >= 0){
        printf("La position de \"%.2f\" est \"%d\"\n",val,pos);
    }
    else{
        printf("La valeur \"%.2f\" ne se trouve pas dans le tableau\n",val);
    }
    
}
