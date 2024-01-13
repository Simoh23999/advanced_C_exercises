#include <stdio.h>
#include <stdlib.h>

int taille(char *chaine);

int main(){
    char *phrase = (char*)malloc(30);
    char *debut,*fin;
    int condition;

    printf("Entre une phrase : ");
    scanf("%s",phrase);

    debut = phrase;
    fin = phrase+taille(phrase)-1;
    while (debut < fin){
       condition = 1; 
       if (*debut != *fin){
        condition = 0;
        break;
       }
       debut++;
       fin--;
    }
    
    if (condition){
        printf("C'est un palindrome.\n");
    }
    else{
        printf("Ce n'est pas un palindrome.\n");
    }
    

    return 0;
}

int taille(char *chaine){
    int i=0;

    while (chaine[i] != '\0'){
        i++;
    }
    
    return i;
}