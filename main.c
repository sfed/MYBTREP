#include <stdio.h>
#include <string.h>

int main() {
  char nom_prenom[20];
  char genre, profile, reprendre, c;
  int age, poids, result = 0;
  float taille, MB, BC;
  
  do {
    printf("\nDonnez votre nom et prenom svp: \n");
    fgets(nom_prenom, sizeof(nom_prenom), stdin);

    do {
      genre = ' ';
      result = 0;
      printf("\nDonnez votre genre (h/f ou H/F): \n");
      result = scanf("%1c", &genre);
    } while ((genre != 'H' && genre != 'h' && genre != 'F' && genre != 'f') ||
             result != 1 || genre == ' ');

    do {
      age = 0;
      result = 0;
      printf("\nDonnez votre âge (entre 14-65 ans): \n");
      result = scanf("%d", &age);
      while (getchar() != '\n')
        ; // finir avec la chaine donnee
    } while (age > 65 || age < 14 || age <= 0 || result != 1);

    do {
      poids = 0;
      result =0;
      printf("\nDonnez votre poids (en Kg max=300Kg): \n");
      result = scanf("%3d", &poids);
      while (getchar() != '\n')
        ;
    } while ((poids > 300) || (poids <= 0) || (result != 1));

    do {
      profile = ' ';
      result = 0;
      printf("\nDonnez votre profile Sédentaire (S) Légèrement actif(L) "
             "Actif(A): \n");
      result = scanf("%c", &profile);
      while (getchar() != '\n')
        ;

    } while ((profile != 'S' && profile != 'L' && profile != 'A') ||
             (profile == ' ') || (result != 1));

    do {
      taille = 0.0;
      result = 0;
      printf("\nDonnez votre taille (en Mètre 0.80-2.20m ): \n");
      result = scanf("%5f", &taille);
      while (getchar() != '\n')
        ;
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

    printf(
        "\n Votre métabolisme de base (MB) et Besoins calorifiques (BC) est:\n"
        "\n -------------------------- "
        "\n| MB = %.2f              |"
        "\n -------------------------- "
        "\n| BC = %.2f              |"
        "\n -------------------------- ",
        MB, BC);

    do {
        reprendre = ' ';
        result =0;
        printf("\nvoulez vous reprendre le calcul pour une autre personne"
               "oui(O/o) ou Non(N/n) :");
        result = scanf("%c", &reprendre);
        while (getchar() != '\n');
    } while ((reprendre != 'O' && reprendre != 'o' && reprendre != 'N' &&
              reprendre != 'n') ||
             (reprendre == ' ') || (result != 1));

  } while (reprendre == 'O' || reprendre == 'o');

      return 0;
}
