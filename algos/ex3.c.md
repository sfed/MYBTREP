#include <stdio.h>
#include <math.h>


int main() {
  
  int poid;
  int distance; 
  int duree;
  float vitesse;
  float depense;
  float k;
  

  printf("Donnez votre poids en kg svp:"); 
  scanf("%i", &poid);

  printf("Donnez la distance parcourue a vélo en km: "); 
  scanf("%i", &distance);
  printf("Donnez la durée de votre effort en minutes:"); 
  scanf("%i", &duree);
  vitesse = (float) distance*60/duree;
  printf("Votre vitesse = %.2f Km/h \n", vitesse); 

  if (vitesse < 25) k = 0.1229;
  if (vitesse > 25 && vitesse <= 28) k=0.1377;
  if (vitesse > 28 && vitesse <= 32) k=0.1833;
  if (vitesse > 32) k = 0.2056;
  
  depense = (float) k * poid * duree ;
  printf("Votre dépense énergétique = %.2f Kcal \n", depense);   
  return 0;
}

