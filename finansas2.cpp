#include <stdio.h>

int main () {

    int saldo = 1000;


    while (1){

        char operador = 0;

        printf("\ntu saldo actual es de %d\n", saldo);

        printf("\nque operacion desear realizar\n\tdeposito ----> d\n\tretiro ----> r\noperacion:\t");
        scanf("%c", &operador);

        if (operador == 'd'){
            int deposito = 0;
            printf("\ncuanto desea depositar?\t");
            scanf("%d", &deposito);  

            saldo = saldo + deposito;
        } 
        else if (operador == 'r'){
            int retiro = 0;
            printf("\ncuanto desea retirar?\t");
            scanf("%d", &retiro);

            saldo = saldo - retiro; 
        }
        else {
            printf("\nSystem Error: Invalid operation\n");
            return 0;
        }

        if (saldo < 1000) { 
            printf("\nsaldo insuficiente\n");
            break; 
        }

        /*char iterador;
        printf("\ndesea realizar otra operacion?");
        scanf("%c", &iterador);

        if (iterador == 'n') { return 0; }

        else {
            printf("\nSystem Error: invalid operation\n");
            return 0;
        }*/
    }
return 0;
}
