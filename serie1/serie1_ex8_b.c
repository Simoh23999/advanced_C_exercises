#include <stdio.h>

int main() {
    int i,j,k;
 
    for (i=0; i<=9; i++) {
        for (k=0; k<i; k++)
        {
            printf(" ");
        }
        
        for (j=i; j<=9; j++) {
            printf("%d",i);
        }
        printf("\n");
    }

    return 0; 
}
