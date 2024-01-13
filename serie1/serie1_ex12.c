#include <stdio.h>

int main() {
    int taille;

    printf("Entre la taille du carre: ");
    scanf("%d", &taille);

    for (int i = 0; i < taille; i++) {
        for (int j = 0; j < taille; j++) {
            if((i == 0 && j == 0) || (i == 0 && j == taille - 1) || (i == taille - 1 && j == 0) || (i == taille - 1 && j == taille - 1)){
                 printf("* ");
            }
            else if((i == j || i == taille - j - 1)){
                printf("+ ");
            }
            else if(i==(taille-1)/2 && j!=0 && j!=taille-1){
                printf("| ");
            }
            else if (j==(taille-1)/2 && i!=0 && i!= taille-1)
            {
                printf("- ");
            }
            else {
                if (i == 0 || i == taille - 1 || j == 0 || j == taille - 1) {
                    printf("* ");
                } else {
                    printf("  ");  
                }
            }
        }
        printf("\n");
    }

    return 0;  
}
