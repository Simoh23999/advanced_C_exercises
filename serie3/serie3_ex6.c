#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char *ph=(char*)malloc(40);
    char* ptr;
    int i=0;

    printf("Entre une phrase : ");
    scanf("%s",ph);

    ptr = ph;
    while (isspace(*ptr)){
        ptr++;
    }
    
    printf("La phrase sans caracteres blancs au debut :%s",ptr);

    return 0;
}