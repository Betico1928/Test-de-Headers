//
// Created by TARS 2.0 on 23/03/23.
//

#ifndef CREACION_DE_HEADERS_OPERACIONES_H
#define CREACION_DE_HEADERS_OPERACIONES_H

// Prototipo de funciones
int funcionSuma (int datoA, int datoB);
int funcionResta (int datoA, int datoB);
int funcionMultiplicacion (int datoA, int datoB);
int funcionDivision (int datoA, int datoB);


// Funciones como tal
int funcionSuma (int datoA, int datoB)
{
    return (datoA + datoB);
}

int funcionResta (int datoA, int datoB)
{
    return (datoA - datoB);
}

int funcionMultiplicacion (int datoA, int datoB)
{
    return (datoA * datoB);
}

int funcionDivision (int datoA, int datoB)
{
    return (datoA / datoB);
}

#endif //CREACION_DE_HEADERS_OPERACIONES_H
