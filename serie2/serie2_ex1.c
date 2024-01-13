#include <stdio.h>
#include <stdlib.h>
#define nmax 20

int saisie(int tab[]){
    int taille,i;

    do
    {
        printf("Entre le nombre des elements inferieur ou egale a 20 : ");
        scanf("%d",&taille);
        if (taille>nmax){
            printf("Nombre tres grand\n");
        }
    } while (taille>nmax);
    
    for (i = 0; i < taille; i++)
    {
        printf("Entre element numero %d: ",i+1);
        scanf("%d",&tab[i]);
    }
    
    return taille; 
}

void affichage(int tab[],int taille){
    int i;

    printf("Les elements du tableau :\n");
    for (i = 0; i < taille; i++)
        printf("%d  ",tab[i]);
    
    printf("\n\n");
}

void moyenne(int tab[],int taille){
    int i,somme=0;
    float moyenne;

    for ( i = 0; i < taille; i++)
        somme += tab[i];
    
    moyenne = (float)somme/taille;
    printf("La moyenne : %.2f\n\n",moyenne);
    
}

int max_elem(int tab[],int taille){
    int i,max,pos_max;

    max = tab[0];
    for ( i = 1; i < taille; i++)
        if (tab[i]>max)
            pos_max = i;
        
        
    return pos_max;
}

int min_elem(int tab[],int taille){
    int i,min,pos_min;

    min = tab[0];
    for ( i = 1; i < taille; i++)
        if (tab[i]<min)
            pos_min = i;
        
        
    return pos_min;
}

int supprimer(int tab[],int taille,int position){
    int i;

    for ( i = position; i < taille-1 ; i++)
        tab[i] = tab[i+1];
    
    taille--;
    return taille;
}

int ajout(int tab[],int taille){
    int pos,val,i;

    if (taille == nmax){
        printf("Tableau plein");
        return nmax;
    }

    do
    {
        printf("Entre la position (entre 0 et %d) :",taille);
        scanf("%d",&pos);
        if (pos < 0 || pos > taille){
            printf("Position invalide\n");
        }
    } while (pos < 0 || pos > taille);
    
    printf("Entre la valeur a ajouter :");
    scanf("%d",&val);
    
    for ( i = taille ; i > pos ; i--)
        tab[i] = tab[i-1];
    
    tab[pos] = val;
    taille++;

    return taille;
}

int main(){
    int tab[nmax],taille;
    int pos_max,pos_min;
    char choix;

    do
    {
       printf("============== Menu ======================\n\n");
       printf("A. Saisie et affichage                      \n");
       printf("B. Moyenne                                  \n");
       printf("C. Suppression du Max et affichage          \n");
       printf("D. Suppression du min et affichage          \n");
       printf("E. Ajout d'un entier a une position donnee  \n");
       printf("Q. Quitter\n\n");
       printf("==========================================\n\n");
                             
       printf("Entre choix : ");
       scanf(" %c",&choix);
       
       switch (choix){
       case 'A':
        system("cls");
        taille = saisie(tab);
        affichage(tab,taille);
        break;
       case 'B':
        system("cls");
        moyenne(tab,taille);
        break;
       case 'C':
        system("cls");
        pos_max = max_elem(tab,taille);
        taille = supprimer(tab,taille,pos_max);
        affichage(tab,taille);
        break;
       case 'D':
        system("cls");
        pos_min = min_elem(tab,taille);
        taille = supprimer(tab,taille,pos_min);
        affichage(tab,taille);  
        break;
       case 'E':
        system("cls");
        taille = ajout(tab,taille);
        affichage(tab,taille);
        break;  
       case 'Q':
        system("cls");
        break;                    
       default:
        system("cls");
        printf("Choix invalide");
        break;
       }


    } while (choix!='Q');
    

    return 0;
}