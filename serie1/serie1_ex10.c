#include <stdio.h>

int main() {
    int n,i,j,k;

    printf("Entre le nombre de lignes : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for (j=0;j<n-i;j++){
            printf(" ");
        }
        printf("*");
        for(k=1;k<=2*i-3;k++){
            if(i == n){
                printf("*");
            } else {
                printf(" ");
            }
        }
        if(i>1){
            printf("*");
        }
        printf("\n");
    }

    return 0; 
}
