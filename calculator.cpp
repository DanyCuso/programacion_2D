#include <stdio.h>

//declarando variables

int num1 = 0;
int num2 = 0;
char selection;
float result = 0;

int main (){

    //pidiendo los datos para calcular

    printf("ingresa un mumero\n");
    scanf("%d", &num1);
    printf("ingresa otro numero\n");
    scanf("%d", &num2);

    // seleccionando la operacion que desea realizar

    printf("elige la operacion que deseas realizar: type:\n\ts ----> Suma\n\tr ----> Resta\n\td ----> Division\n\tm ----> Multiplicacion\noperacion:\t");
    scanf("%s", &selection);

    if (selection == 's'){

        result = num1 + num2;
        printf("\nel resultado es: %.f\n", result);
    }
    if(selection == 'r'){
        result = num1 - num2;
        printf("\nel resultado es: %.f\n", result);
    }
    if(selection == 'd'){
        result = num1 / num2;
        printf("\nel resultado es: %.02f\n", result);
    }
    if (selection == 'm'){
        result = num1 * num2;
        printf("\nel resultado es: %.f\n", result);
    }
    else {
        printf("System Error: Invalid operation\n");       
    }
return 0;
}