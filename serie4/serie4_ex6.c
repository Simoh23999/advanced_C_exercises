typedef struct Panneau_repere{
    float largeur,longueur,epaisseur;
    int type;
}Panneau;

Panneau saisir(Panneau P){

    printf("Entre la longueur : ");
    scanf("%f",&P.longueur);

    printf("Entre la largeur :");
    scanf("%f",&P.largeur);

    printf("Entre l'eppaisseur :");
    scanf("%f",&P.epaisseur);

    printf("Entre le type : \n");
    printf("0: Pin / 1: chene / 2: hete : ");
    scanf("%d",&P.type);

    return P;
}

void afficher(Panneau P){


    printf("Longeur: %.2f mm \n",P.longueur);
    printf("Largeur: %.2f mm \n",P.largeur);
    printf("Epaisseur: %.2f mm \n",P.epaisseur);
    printf("Type du bois: ");
    if(P.type == 0) { 
        printf("Pin \n");
    }
    else if(P.type == 1){ 
        printf("Chene \n");
    }
    else if(P.type == 2){ 
        printf("Hetre \n");
    }

}

double Volume(Panneau P){
    return P.longueur * P.largeur * P.epaisseur;
}