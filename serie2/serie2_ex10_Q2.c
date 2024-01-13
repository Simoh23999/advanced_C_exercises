#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 50

int distanceH_langage(char language[][max],int taille);
int distanceH(char *s1,char *s2);

int main(){
    char CH[max][max],chaine[50];
    int dist,taille,longeur,i=1,k;

    printf("Entre la taille de langue : ");
    scanf("%d",&taille);

    printf("Entre la premiere chaine : ");
    scanf("%s",CH[0]);
    longeur = strlen(CH[0]);
    do{

      printf("Entre la chaine numero %d : ",i+1);
      scanf("%s",chaine);

      if (strlen(CH[0])<strlen(chaine)){
        printf("La %d eme chaine est plus longue \n",i);
      }
      else if (strlen(CH[0])>strlen(chaine)){
        printf("La %d eme chaine est plus courte \n",i);
      }
      else{
        strcpy(CH[i],chaine);
        i++;
      }
    } while ((strlen(CH[0]) != strlen(chaine)) || i< taille);
    
    dist = distanceH_langage(CH,taille);
    printf("La distance Hamming %d",dist);
    return 0;
}

int distanceH_langage(char language[][max],int taille){
    int i,j,compt=0,dist,min;
    
    min = distanceH(language[0],language[1]);
    for ( i = 0; i < taille ; i++){
      for ( j = i+1; j < taille; j++){
        dist = distanceH(language[i],language[j]);
        if (dist<min){
          min = dist;

        } 
      }
    }

    return min;
}

int distanceH(char *s1,char *s2){
    int i,compt=0;

    for ( i = 0; i < strlen(s1) ; i++){
        if (s1[i]!=s2[i])
           compt++;
    }
    
    return compt;
}
