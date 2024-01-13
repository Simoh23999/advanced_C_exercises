#include <stdio.h>
#include <stdlib.h>

int main(){
    int tab[100],taille,i=0,j=0,compt,k=0;
    int compresse[100];
    

    printf("Entre la valeur 0 pour arreter. \n");
 
    do
    {
      printf("entre l'entier numero %d:",i);
      scanf("%d",&tab[i]);
      i++;
    } while (tab[i-1] != 0);
    
    i=0;
    while (tab[i] != 0){
        compt=0;
        while (tab[i] == tab[j] && tab[j] != 0){
           compt++;
           j++;
        }
        compresse[k] = compt;
        k++;
        compresse[k] = tab[i];
        k++;
        i=j;
    }
    compresse[k] = 0;

    printf("apres compression : ");
    for ( i = 0; compresse[i] != 0 ; i++)
        printf("%d",compresse[i]);
    
    return 0;
}