#include <stdio.h>

int main() {
    int nb,i;

    printf("Entre un nombre : ");
    scanf("%d",&nb);

    if(nb<=1){
        printf("%d n\'est pas un nombre premier\n",nb);
        return 0;
    }
    
    for(i=2;i<nb;i++){
        if (nb%i == 0){
            printf("%d n\'est pas un nombre premier\n",nb);
            return 0;
        }
        
    }
    printf("%d est un nombre premier\n",nb);

    return 0;  
}
