#include <stdio.h>
#include <string.h>

int main() {
  char nom_prenom[20];
  char genre, profile, c;
  int age, poids,result = 0;
  float taille, MB, BC;

  printf("Donnez votre nom et prenom svp: ");
  fgets(nom_prenom, sizeof(nom_prenom), stdin);

  do {
    printf("Donnez votre genre (h/f ou H/F): ");
    scanf("%1c", &genre);
  } while (genre != 'H' && genre != 'h' && genre != 'F' && genre != 'f');

  
  do {
      age = 0;
      result =0;
      printf("Donnez votre âge (entre 14-65 ans): ");
      result = scanf("%d", &age );
      while ( getchar() != '\n' ); // finir avec la chaine donnee
  } while (age > 65 || age < 14 || age <=0 || result != 1);

  do {
      poids = 0;
      printf("Donnez votre poids (en Kg max=300Kg): ");
      result = scanf("%3d", &poids );
      while ( getchar() != '\n' );
  } while ((poids > 300) || (poids <= 0) || (result != 1));


  do {
      profile = ' ';
      printf("Donnez votre profile Sédentaire (S) Légèrement actif(L) Actif(A): ");
      result = scanf("%c", &profile );
      while ( getchar() != '\n' );
    
  } while ((profile != 'S' && profile != 'L' && profile != 'A') || (profile == ' ') || (result != 1));

  do {
      taille = 0.0;
      result = 0;
      printf("Donnez votre taille (en Mètre 0.80-2.20m ): ");
      result = scanf("%5f", &taille);
      while ( getchar() != '\n' );
  } while (taille < 0.80 || taille > 2.2001 || taille <= 0 || result != 1);

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

  printf("\n Votre métabolisme de base (MB) et Besoins calorifiques (BC) est MB = %.2f et BC = %.2f \n", MB, BC);
    
  return 0;
}
