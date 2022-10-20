
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int choix;
    printf("Menu\n 1. Royal Cheese\n2. Mc Deluxe\n3. Mc Bacon\n4. Big Mac\nVotre choix ?\n");

scanf("%d", &choix);

switch (choix)
{
case 1:
     printf("vous avez choisis le Royal cheese !\n");
     break;
case 2:
     printf("vous avez choisis le Mc Deluxe !\n");
     break;
case 3:
     printf("vous avez choisis le Mc Bacon !\n");
     break;
case 4:
     printf("vous avez choisis le Big Mac !\n");
     break;               
}
    return 0;

}

