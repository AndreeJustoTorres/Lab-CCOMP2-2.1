#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a, b;
    float suma, resta, multiplicacion, division, residuo, mayor, menor;

    cout << "ingrese un valor" << endl;
    cin >> a;
    cout << "ingrese otro valor" << endl;
    cin >> b;

    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;

    if (b == 0) {
        cout << "no se puede divir entre 0" << endl;
    }
    else
    {
        division = a / b;
        residuo = a % b;
        cout << "la division es " << division << endl;
        cout << "el residuo de la division es " << residuo << endl;
    }
    cout << "la suma es:" << suma << endl;
    cout << "la resta es" << resta << endl;
    cout << "la multiplicacion es :" << multiplicacion << endl;
    if (a > b) 
    {
        cout << "el primer numero es mayor " << endl;
    }
    else if (a < b) 
    {
        cout << "el primero es el menor" << endl;
    }
    else if (a % b == 0)
    {
        cout << "el segundo es divisor del primero" << "\n\n";
    }
    else if (b % a == 0) 
    {
        cout << "el primer numero es divisor del segundo " << "\n\n";
    }


    cout << "SEGUNDO EJERCICIO \n";

    int operador1, operador2;
    char sum = '+', res = '-', mult = '*', div = '/', resuido = '%', raiz = '~', tipo;
    cout << "Escoja la operacion que desea realizar :(+)suma  (-)resta (*)multiplicacion  (/)division  (%)residuo  (~)raiz cuadrada \n "; cin >> tipo;
    if (tipo == sum)
    {
        cout << "ingrese el primer operador"; cin >> operador1;
        cout << "ingrese el segundo operador"; cin >> operador2;
        cout << "la suma es:" << operador1 + operador2;
    }
    else if (tipo == res)
    {
        cout << "ingrese el primer operador"; cin >> operador1;
        cout << "ingrese el primer operador"; cin >> operador2;
        cout << "la resta es:" << operador1 - operador2;
    }
    else if (tipo == mult)
    {
        cout << "ingrese el primer operador"; cin >> operador1;
        cout << "ingrese el primer operador"; cin >> operador2;
        cout << "la multiplicacion es:" << operador1 * operador2;
    }
    else if (tipo == div)
    {
        cout << "ingrese el primer operador"; cin >> operador1;
        cout << "ingrese el primer operador"; cin >> operador2;
        if (operador2 == 0) {
            cout << "no se puede dividir entre o";

        }
        else {
            a = operador1;
            b = operador2;
            cout << "la division es " << a / b;
        }
    }
    else if (tipo == resuido)
    {
        cout << "ingrese el primer operador:"; cin >> operador1;
        cout << "ingrese el segundo operador:"; cin >> operador2;
        if (operador2 == 0) {
            cout << "no se pude dividir entre 0";
        }
        else {
            cout << "el residuo es:" << operador1 % operador2;
        }
    }
    else if (tipo == raiz)
    {
        cout << "ingrese el operador:"; cin >> operador1;
        if (operador1 < 0) {
            cout << "el operador es un numero negativo";
        }
        else {
            cout << "La raiz cuadrada es:" << sqrt(operador1);
        }
    }

    return 0;

}