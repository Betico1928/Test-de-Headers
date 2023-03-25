#include <iostream>
#include "operaciones.h";

using namespace std;

int main()
{
    cout << "Hola, mundo!" << endl;

    char operacionARealizar;
    int datoA;
    int datoB;

    cout << "Introduzca su dato A" << endl;
    cin >> datoA;

    cout << "Introduzca su dato B" << endl;
    cin >> datoB;


    cout << "Introduzca que operacion quiere realizar" << endl;
    cin >> operacionARealizar;

    switch(operacionARealizar)
    {
        case '+':
            cout << "Sumar" << endl;
            cout << "El resultado de " << datoA << " + " << datoB << " es: " << funcionSuma(datoA, datoB);
            break;

        case '-':
            cout << "Restar" << endl;
            cout << "El resultado de " << datoA << " - " << datoB << " es: " << funcionResta(datoA, datoB);
            break;

        case '*':
            cout << "Multiplicar" << endl;
            cout << "El resultado de " << datoA << " * " << datoB << " es: " << funcionMultiplicacion(datoA, datoB);
            break;

        case '/':
            cout << "Dividir" << endl;
            cout << "El resultado de " << datoA << " / " << datoB << " es: " << funcionDivision(datoA, datoB);
            break;

        default: //Bloque de instrucciones por defecto;
            cout << "Opcion incorrecta" << endl;
    }
    return 0;
}
