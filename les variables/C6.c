#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
     int a,b;
     char c;
     printf("entrez le premier nombre : ");
     scanf(" %d",&a);
     printf("entrez le deuxiem nombre :  ");
     scanf("%d",&b);
     printf("entrez le type de calcul ");
     scanf(" %c",&c);
    //  ici nous calculs
     
     float g =a+b ; 
     float h =a-b ; 
     float j = a*b ; 
     float k = a/b;
     switch (c) {
        case '+' :
        printf(" resultats : %.4f ",g);
        break;
         case '-' :
        printf(" resultats : %.4f ",h);
        break;
         case '*' :
        printf(" resultats : %.4f ",j);
        break;
         case '/' :
        printf(" resultats : %.4f ",k);
        break;
   default :
   printf("***********entrez a valide calcul*********");

     }
     return 0;
}