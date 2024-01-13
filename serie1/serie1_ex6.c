#include <stdio.h>

int main() {
    int nb,i;

    printf("Entre un nombre : ");
    scanf("%d",&nb);

    if (nb%2 == 0){
        printf("    Les nombres pairs inferieurs a %d sont:\n",nb);
        for (i=nb-2;i>0;i-=2){
            printf(" %d ,",i);
        }
        putchar('\n');
    } else {
        printf("Ce nombre n\'est pas pair.\n");
    }

    return 0; 
}
