#include <stdio.h>
#include <string.h>

void crypt(char *message,int decodage){
    int i;

    for ( i = 0; message[i] != '\0' ; i++)
        message[i] += decodage;
    
    printf("Le message apres cryptage : %s\n",message);

    
}

int main(){
    int decodage;
    char cMessage[100];

    printf("Entre un decodage entier : ");
    scanf("%d",&decodage);

    printf("Entre le message initiale : ");
    scanf("%s",cMessage);
    
    crypt(cMessage,decodage);

    return 0;
}