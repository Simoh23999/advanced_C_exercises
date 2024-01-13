#include <stdio.h>

struct date{
    int jour;
    char mois[10];
    int annee;
};

struct employe{
    char nom[15],prenom[15];
    struct date date_naissance,date_embauche;
};



int main(){
    struct employe emp[4];
    int i;

    for ( i = 0; i < 4; i++) {
        printf("Entre les informations pour l'employe No%d: \n",i);
        printf("Entre le nom : ");
        scanf("%s",emp[i].nom);

        printf("Entre le prenom : ");
        scanf("%s",emp[i].prenom);

        printf("Entre la date de naissance (jour mois annee) : ");
        scanf("%d %s %d",&emp[i].date_naissance.jour,emp[i].date_naissance.mois,&emp[i].date_naissance.annee);
   
        printf("Entre la date d'embauche (jour mois annee) : ");
        scanf("%d %s %d",&emp[i].date_embauche.jour,emp[i].date_embauche.mois,&emp[i].date_embauche.annee);
    }
    

    for ( i = 0; i < 4; i++){
        printf("Nom : %s\n",emp[i].nom);
        printf("Prenom : %s\n",emp[i].prenom);
        printf("Date de naissance : %d %s %d\n",emp[i].date_naissance.jour,emp[i].date_naissance.mois,emp[i].date_naissance.annee);
        printf("Date d'embauche : %d %s %d\n\n\n",emp[i].date_embauche.jour,emp[i].date_embauche.mois,emp[i].date_embauche.annee);
    }
    

    return 0;
}