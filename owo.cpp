#include <iostream>
using namespace std;

void doAnOperation(){
    float saldo = 0;
    int operador;
    float trasaccion; 
    float resultado;
    float cantidadDeposito;
    float cantidadRetiro;
    int hacerOtraOperacion;

    //Crear dos variables que permitan ejecutar otras acciones, tales como la cantidad a depositar y la cantidad a retirar, una vez finalizadas el proceso.

    cout << "Que operacion deseas hacer?" << endl;
    cout <<"Retiro" << endl;
    cout <<"Deposito" << endl;
    cout <<"Saldo" << endl;
    cin >> operador; 

    switch(operador){ //Usa un condicional para dar a elegir opciones entre operaciones
        case 1: //Caso de retiro
            cout << "Enter the amout to withdraw" << endl;
            cin >> cantidadRetiro;
            if(cantidadRetiro > saldo){
                cout << "No tienes el suficiente saldo para hacer esta operacion!" << endl;
                cout << "Deseas hacer otro tipo de operacion?" << endl;
                cin >> hacerOtraOperacion;
                if(hacerOtraOperacion == 1){
                    doAnOperation();
                }
            }
        case 2: //Deposito
    }



}
int main(){
    doAnOperation();
    return 0;
}