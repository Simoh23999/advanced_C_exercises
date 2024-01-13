#include <stdio.h>

int addition(int A,int B){
  return A+B;
}

int soustraction(int A,int B){
  return A-B;
}

int multiplication(int A,int B){
  return A*B;
}

int division(int A,int B){
  return A/B;
}

int modulo(int A,int B){
    return A%B;
}


int main(){
    int nb1,nb2,resultat;
    char operateur,choix;

    do
    {
        printf("Entre votre opperation (ex : 2-4 ) : ");
        scanf("%d %c %d",&nb1,&operateur,&nb2);
        switch (operateur)
        {
        case '+':
            resultat = addition(nb1,nb2);
            break;
        case '-':
            resultat = soustraction(nb1,nb2);
            break;
        case '*':
            resultat = multiplication(nb1,nb2);
            break;
        case '/':
            resultat = division(nb1,nb2);
            break;
        case '%':
            resultat = modulo(nb1,nb2); 
            break;            
        default:
            printf("Invalide operateur\n\n");
            break;
        }
        
        printf("   Le resultat : %d\n\n",resultat);
        do
        {
          printf("Recommencer ('O':oui 'N':non) : ");
          scanf(" %c",&choix);
          if (choix!='O' && choix!='o' && choix!='n' && choix!='N'){
            printf("Choix invalide \n");
          }
          else if (choix =='n' || choix =='N'){
            return 0;
          }
        } while (choix!='O' && choix!='o' && choix!='n' && choix!='N');
        
    } while (1);
    return 0;
}