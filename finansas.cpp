#include <stdio.h>

int main (){

    float saldo = 1000;
    char operador;
    float transaccion;
    float resultado;
    char retornar; 

    while(1) {
        
        printf("\nsaldo actual: %.03f\n", saldo);
        printf("\nQue operacion desea realizar?\nescriba:\n\tr ----> retirar\n\td ----> depositar\noperacion: ");
        scanf("%c", &operador);


        if (operador == 'd'){   
            printf("cuanto desea depositar: ");
            scanf("%f", &transaccion);

            resultado = saldo + transaccion;
            saldo = resultado;
            printf("\ntu nuevo saldo es saldo: %.03f\n", saldo);
        }
        else if (operador == 'r'){
            printf("\ncuanto desea retirar: ");
            scanf("%f", &transaccion);

            resultado = saldo - transaccion;
            
            if (resultado < 0){
                printf("\nSystem Error: Saldo insuficiente\n");
            }
            else {
                saldo = resultado;
                printf("\ntu nuevo saldo es de: %.03f", saldo);
        }
        }
        else {
            printf("\nSystem Error: Operacion Invalida\n");
            
        }
        printf("\nDeseas realizar otra operacion?\n\t\ty or n\n");
        scanf("%c", &retornar);

        if (retornar == 'n'){
            break;
        }
            
        
    }
    return 0;
}