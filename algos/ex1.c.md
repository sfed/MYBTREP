#include <stdio.h>

int main() {
  int distance =0;
  int duree =0;
  float vitesse =0;

  puts("donnez votre distance : ");
  scanf("%d", &distance);
  
  printf("donnez votre duree : ");
  scanf("%d", &duree);
  vitesse = (float) distance * 60 /duree;
  printf("votre vitesse est de %f  Km/heure\n", vitesse);
  return 0;
}
