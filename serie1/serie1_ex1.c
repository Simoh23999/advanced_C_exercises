#include <stdio.h>


int main(){
    float nb1,nb2;
    char op;

    printf("Entre le premier nombre : ");
    scanf("%f",&nb1);

    printf("Entre le deuxieme nombre : ");
    scanf("%f",&nb2);

    printf("Entre un operateur (/,*,-,+) : ");
    scanf(" %c",&op);

    switch(op){
        case '+':
            printf("%.2f + %.2f = %.2f ",nb1,nb2,nb1+nb2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f ",nb1,nb2,nb1-nb2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f ",nb1,nb2,nb1*nb2);
            break;
        case '/':
            if(nb2==0){
                printf("Erreur de division");
            }
            else{
                printf("%.2f / %.2f = %.2f ",nb1,nb2,nb1/nb2);  
            } 
            break;
        default:
            printf("Operateur invalide");   
            break;                  
    }

    putchar('\n');


    return 0;
}