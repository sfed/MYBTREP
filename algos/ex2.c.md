#include <stdio.h>
#include <math.h>


int main() {
  
  int H = 2;
  int R = 1; 
  float n;
  float volume = 0;

  printf("donnez le niveau de liquide en metre :");
  scanf("%f",&n);
  
  volume = (float) H*( pow(R,2)*acos((R-n)/R) - (R-n)*sqrt(2*R*n - pow(n,2)) );
  
  printf("Le volume est %f m3 \n", volume);
    
  return 0;
}

