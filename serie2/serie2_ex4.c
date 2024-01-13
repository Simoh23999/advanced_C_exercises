#include <stdio.h>

int longueur_chaine1(char *cTab) {
  int longueur=0;
  while (cTab[longueur] != '\0') {
    longueur++;
  }
  return longueur;
}
int main() {
  char cTab1[20];
  char cTab2[20];

  printf("Entre la 1 ere chaine : ");
  gets(cTab1);

  printf("Entre la 2 eme chaine : ");
  gets(cTab1);  

  printf("Le tableau cTab1 a %d elements\n",longueur_chaine1(cTab1));
  printf("Le tableau cTab2 a %d elements\n",longueur_chaine1(cTab2));

  return 0;
}


