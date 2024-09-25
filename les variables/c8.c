#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    printf("entrez le premier nombre : ");
     scanf(" %d",&a);
     printf("entrez le deuxiem nombre :  ");
     scanf("%d",&b);
     printf("entrez le troisieme nombre :  ");
     scanf(" %d",&c);
    // division in c 
     
     float resultats= pow((a * b * c),(float)1/(float)3);

     printf("on a la moyenne géométrique : \n ");
     printf("%.4f",resultats);
     return 0;
}