#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre1, nombre2, resultat;
    printf("choisis un nombre\n");
    scanf("%d", &nombre1);
    printf("choisis un autre nombre\n");
    scanf("%d", &nombre2);

    resultat = nombre1 + nombre2;

    printf("la somme de tes nombres est %d"\n, resultat);

    return 0;
}
