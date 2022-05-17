/*************************************************************
 *              calculadora de operaciones basicas           *
 *                          DanyCuso                         *
 *              Daniel Valdes Artiles ----- 2B               *
 *************************************************************/

#include <stdio.h>

//declarando variables

float num1 = 0;
float num2 = 0;
char selection;
double result = 0;

int main (){

    //pidiendo los datos para calcular

    printf("ingresa un mumero\n");
    scanf("%f", &num1);
    printf("ingresa otro numero\n");
    scanf("%f", &num2);

    // seleccionando la operacion que desea realizar

    printf("elige la operacion que deseas realizar: type:\n\ts ----> Suma\n\tr ----> Resta\n\td ----> Division\n\tm ----> Multiplicacion\noperacion:\t");
    scanf("%s", &selection);

    //resolviendo operaciones 

    if (selection == 's'){      //operacion suma
    
        result = num1 + num2;
        printf("\nel resultado es: %.lf\n", result);
    }
    if(selection == 'r'){     // operacion resta  
        result = num1 - num2;
        printf("\nel resultado es: %.lf\n", result);
    }
    if(selection == 'd'){       // operacion division
        result = num1 / num2;
        printf("\nel resultado es: %.02lf\n", result);
    }
    if (selection == 'm'){      //operacion multiplicacion 
        result = num1 * num2;
        printf("\nel resultado es: %.lf\n", result);
    }
    else {      //operacion invalida
        printf("System Error: Invalid operation\n");       
    }
return 0;
}