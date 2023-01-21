#include <stdio.h>
#include <string.h>

int main() {
  char nom_prenom[20];
  char genre, profile ;
  int age, poids;
  float taille, MB, BC;

  printf("Donnez votre nom et prenom svp: ");
  // scanf("%s", nom_prenom);
  fgets(nom_prenom, sizeof(nom_prenom), stdin); // read string

  do {
    printf("Donnez votre genre (h/f ou H/F): ");
    scanf("%c", &genre);
  } while (genre != 'H' && genre != 'h' && genre != 'F' && genre != 'f');

  do {
    printf("Donnez votre âge (entre 14-65 ans): ");
    scanf("%d", &age);
  } while (age > 65 || age < 14);

  do {
    printf("Donnez votre poids (en Kg max=300Kg): ");
    scanf("%d", &poids);
  } while (poids > 300);

  do {
    printf("Donnez votre taille (en Mètre 0.80-2.20m ): ");
    scanf("%f", &taille);
  } while (taille < 0.80 || taille > 2.2001);

  do {
    printf("Donnez votre profile Sédentaire (S), Légèrement actif(L), Actif(A): ");
  profile = getchar();
    printf("%c\n",profile);
  } while (profile != 'S' && profile != 'L' && profile != 'A');

  if (genre == 'H' || genre == 'h') {
    MB = (13.707 * poids) + (492.3 * taille) - (6.673 * age) + 77.607;
  } else {
    MB = (9.740 * poids) + (172.9 * taille) - (4.737 * age) + 667.051;
  }

  switch (profile) {
  case 'S':
    BC = MB * 1.2;
    break;
  case 'L':
    BC = MB * 1.375;
    break;
  case 'A':
    BC = MB * 1.55;
    break;
  }

  printf("\n Votre métabolisme de base (MB) et Besoins calorifiques (BC) est MB = %.2f et BC = %.2f \n",
         MB, BC);
    
  return 0;
}
