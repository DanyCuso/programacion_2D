#include <stdio.h>

int main () {

    int saldo = 1000;


    while (1) {

        int operador;

        printf("\ntu saldo actual es de %d\n", saldo);

        printf("\nque operacion desear realizar\n\tdeposito ----> 1\n\tretiro ----> 2\noperacion:\t");
        scanf("%d", &operador);

        switch (operador) {
        case 1:
            
            int deposito;
            printf("\ncuanto deseas depositar?\t");
            scanf("%d", &deposito);

            saldo = saldo + deposito;
            break;
        case 2:
            
            int retiro;
            printf("\ncuanto desea retirar?\t");
            scanf("%d", &retiro);

            saldo = saldo - retiro;

            if (saldo < 0){
                printf("\nSystem Error: Saldo insuficiente\n");
                printf("\nSystem: Exit Program\n");
                return 0;
            }
            break;
        
        default:

            printf("\noperacion invalida\n");
            printf("System: Exit program\n");
            return 0;
            break;
        }

        printf("\ntu nuevo saldo es %d\n", saldo );

        int operador2;
        printf("\ndesea realizar otra operacion?\n\tSI(1) --- NO(2)\n");
        scanf("%d", &operador2);

        switch (operador2) {

        case 2:

            printf("\ngracias por utilizar este cajero\n");
            return 0;
            break;
        
        default:
            break;
        }
    

    }

return 0;
}
