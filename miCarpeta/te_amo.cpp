#include <iostream>

using namespace std;

int main (){

char respuesta;

    cout << "me amas?" << endl;
    cin >> respuesta;

    if (respuesta == 's'){

        cout << "Yo mas" << endl;
    }
    else if (respuesta == 'n'){

        cout << "No importa, yo si te amo" << endl;
    }
    else {
        cout << "No te entendi" << endl;
    }


return 0;    
}