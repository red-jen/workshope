#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int xa,ya,za;
    int xb,yb,zb;

    printf(" on est Calcul de la distance entre deux points dans un espace 3D ; ");
    printf("\n entrer xa : ");
    scanf("%d",&xa);
     printf("\nentrer ya :   ");
    scanf("%d",&ya);
     printf("entrer za : ");
    scanf("%d",&za);
     printf("entrer xb : ");
    scanf("%d",&xb);
     printf("entrer yb : ");
    scanf("%d",&yb);
     printf("entrer zb : ");
    scanf("%d",&zb);


 printf("debut de calculer la distance \n") ;
   double distance = sqrt( pow(xa - xb ,2) + pow(ya - yb ,2) + pow(za - zb ,2) );
   printf(" le resultat est : %.4lf",distance);
   return 0;


}
