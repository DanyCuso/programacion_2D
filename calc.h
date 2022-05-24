#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct CALC
{
   int SUMA;
   int RESTA;
   int MULTIPICACION;
   int DIVISION;
   int POTENCIA;
   int RAIZ;
} calc;


calc* suma (int entrada1,int entrada2) {

   calc* resultado = (calc*)malloc(sizeof(calc));
   resultado->SUMA = 0;

   resultado->SUMA = entrada1 + entrada2;

   return resultado->SUMA;
};

calc* resta (int entrada1, int entrada2){

   calc* resultado = (calc*)malloc(sizeof(calc));
   resultado->RESTA = 0;

   resultado->RESTA = entrada1 - entrada2;

   return resultado->RESTA;
};

calc* multiplicacion (int entrada1, int entrada2){

   calc* resultado = (calc*)malloc(sizeof(calc));
   resultado->MULTIPICACION= 0;

   resultado->MULTIPICACION = entrada1 * entrada2;

   return resultado->MULTIPICACION;
};