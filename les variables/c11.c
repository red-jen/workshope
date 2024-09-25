#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    printf("Calcul de la surface d'un rectangle\n ");
    double largueur ;
    double longueure ;
    printf("entrer la largueur  :  ");
    scanf("%lf",&largueur);
    printf("entrer la longueure :  ");
    scanf("%lf",&longueure);
    double r = largueur * longueure ;
    printf("la surface de ce rectangle est  : %lf ",r);
    return 0;

    
}