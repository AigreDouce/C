#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int PointDeVie = 100; // Au départ, le joueur a 5 vies
  
  printf("Yassine a %d point de vie\n", PointDeVie);
  printf("Il se prend une patate de forrain par Amine \n"); // Là il se prend un grand coup sur la tête
  PointDeVie = 1;
  printf("Cette mechante batata laisse Yassine a %d point de vie \n\n", PointDeVie);
  
  return 0;
}