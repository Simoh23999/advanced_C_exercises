#include <stdio.h>

typedef struct nb_complexe{
    float partie_reel;
    float partie_imaginaire;
}Complex;

//passage par valeur
double real(Complex z){
    return z.partie_reel;
}

double imag(Complex z){
    return z.partie_imaginaire;
}

Complex mul(Complex z1,Complex z2){
    Complex produit;

    produit.partie_reel = reel(z1)*reel(z2)-imag(z1)*imag(z2);
    produit.partie_imaginaire = reel(z1)*imag(z2)+reel(z2)*imag(z1);

    return produit;
}


//passage par adresse

double real_adresse(Complex* z){
    return z->partie_reel;
}

double imag_adresse(Complex* z){
    return z->partie_imaginaire;
}

Complex* mul_adresse(Complex* z1,Complex* z2){
    Complex* produit;

    produit->partie_reel = reel_adresse(z1)*reel_adresse(z2)-imag_adresse(z1)*imag_adresse(z2);
    produit->partie_imaginaire = reel_adresse(z1)*imag_adresse(z2)+reel(z2)*imag_adresse(z1);

    return produit;
}



int main(){
    


    return 0;
}