#include <stdio.h>

int main() {
    int age;
    char sexe;

    printf("Entre age : ");
    scanf("%d",&age);

    printf("Entre le sexe ,h pour homme ou f pour femme : ");
    scanf(" %c",&sexe);

    if(sexe == 'h' && age > 20){
        printf("il faut payer.");
    } 
    else if(sexe == 'f' && (age >= 18 && age <= 35)){
        printf("il faut payer.");
    } 
    else{
        printf("ne peut pas payer.");
    }
    putchar('\n');

    return 0;  
}
