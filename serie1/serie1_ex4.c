#include <stdio.h>

int main() {
    float prix_initial,remise,prix_final;

    printf("Entre le prix initil : ");
    scanf("%d",&prix_initial);

    if(prix_initial<0){
        printf("prix incorrecte");
        return 0;
    }
    else if(prix_initial<100 && prix_initial>=0){
        remise = 0.3*prix_initial;
    } 
    else if(prix_initial>=100 && prix_initial<=200){
         remise = 0.4*prix_initial;
    } 
    else {
        remise = 0.5*prix_initial;
    }
    prix_final = prix_initial - remise;
    printf("Prix initial : %.2f DH, Remise : %.2f DH, Prix final : %.2f DH\n",prix_initial,remise,prix_final);

    return 0;  
}
