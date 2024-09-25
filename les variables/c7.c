#include <stdio.h>
x

#include <math.h>



int main(){
    int a,b,c;
    printf("entrez le premier nombre : ");
    scanf("%d",&a);
    printf("entrez le deuxieme nombre : ");
    scanf("%d",&b);
    printf("entrez le troisieme nombre : ");
    scanf("%d",&c);
    int a2=a*2;
    int b2=b*3;
    int c2=c*5;
    float s=a2+b2+c2/sizeof(a,b,c);
    printf("Moyenne pondérée de trois nombres est : %.4f ",s);
    return 0;

}