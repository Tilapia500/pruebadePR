#include <iostream>
using namespace std;
//sin poder hacer nada
int main() {
    double num1, num2;
    char operacion;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Seleccione la operación (+, -, *, /): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            
            break;
        case '-':
           
            break;
        case '*':
           
            break;
        case '/':
            if (num2 != 0)
                
            else
                cout << "Error: División por cero." << endl;
            break;
        default:
            cout << "Operación no válida." << endl;
    }

    return 0;
}
