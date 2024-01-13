#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 50

int *binaire(int N);
int distanceNumbere(int A,int B);

int main(){
    int nb1,nb2,dist;

    do
    {
      printf("Entre le premier nombre: ");
      scanf("%d",&nb1);
      if (nb1<0 || nb1>=256){
        printf("Nombre invalide.\n");
      }
    } while (nb1<0 || nb1>=256);

    do
    {
      printf("Entre le deuxieme nombre: ");
      scanf("%d",&nb2);
      if (nb2<0 || nb2>=256){
        printf("Nombre invalide.\n");
      }
    } while (nb2<0 || nb2>=256);
    
    dist = distanceNumbere(nb1,nb2);
    printf("La distance Hamming entre %d et %d est %d",nb1,nb2,dist);
    return 0;
}


int *binaire(int N){
  int *tab=(int*)malloc(8*4);
  int div,reste,i=0;

  while (N!=0){ 
    tab[i] = N%2;
    N = N/2;
    i++;
  }
  
  return tab;
}

int distanceNumbere(int A,int B){
    int i,compt=0;
    int *tab1,*tab2;

    tab1=(int*)malloc(8*4);
    tab2=(int*)malloc(8*4);
    tab1 = binaire(A);
    tab2 = binaire(B);

    for ( i = 0; i < 8 ; i++){
        if (tab1[i]!=tab2[i])
           compt++;
    }
    
    return compt;


}
