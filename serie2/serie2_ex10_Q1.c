#include <stdio.h>
#include<string.h>

int distanceH(char *s1,char *s2);

int main(){
    char chaine1[50],chaine2[50];
    int dist;

    printf("Entre la premiere chaine : ");
    scanf("%s",chaine1);
    do{
      printf("Entre la deuxieme chaine (meme taille de la premiere) : ");
      scanf("%s",chaine2);
      if (strlen(chaine1)<strlen(chaine2)){
        printf("La deuxiene chaine est plus long que la premiere\n");
      }
      else if (strlen(chaine1)>strlen(chaine2)){
        printf("La premiere chaine est plus long que la deuxiene\n");
      }
    } while (strlen(chaine1) != strlen(chaine2));
    
    dist =  distanceH(chaine1,chaine2);
    printf("La distance de Hamming entre \"%s\" et \"%s\" est %d\n\n",chaine1,chaine2,dist);

    return 0;
}

int distanceH(char *s1,char *s2){
    int i,compt=0;

    for ( i = 0; i < strlen(s1) ; i++){
        if (s1[i]!=s2[i])
           compt++;
        
        
    }

    return compt;
}

