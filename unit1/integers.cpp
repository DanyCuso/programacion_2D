#include <stdio.h>
#include <math.h>

int var1 = 10;
float Pi = 3.141592;
char var3 = 'c';
double var4 = 10;
bool boolvar = 1;
double var5 = 13.277282782;

int r = 0;
float A = 0;
float area = 0;

int main (){

    printf("ingresa el radio:\t");
    scanf("%d", &r);
    A = Pi*(r*r);
    printf("\nel area es:\t %.02f\n", A);

    area = Pi* (pow(r, 2));
    printf("\nel area es:\t %f\n", area);
return 0;
}