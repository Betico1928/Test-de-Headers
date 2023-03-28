//
// Created by TARS 2.0 on 23/03/23.
//

#ifndef CREACION_DE_HEADERS_OPERACIONES_H
#define CREACION_DE_HEADERS_OPERACIONES_H

// Prototipo de funciones
template < class varGEN >
varGEN funcionSuma (varGEN datoA, varGEN datoB);

template < class varGEN >
varGEN funcionResta (varGEN datoA, varGEN datoB);

template < class varGEN >
varGEN funcionMultiplicacion (varGEN datoA, varGEN datoB);

template < class varGEN >
varGEN funcionDivision (varGEN datoA, varGEN datoB);


// Funciones como tal
template < class varGEN >
varGEN funcionSuma (varGEN datoA, varGEN datoB)
{
    return (datoA + datoB);
}

template < class varGEN >
varGEN funcionResta (varGEN datoA, varGEN datoB)
{
    return (datoA - datoB);
}

template < class varGEN >
varGEN funcionMultiplicacion (varGEN datoA, varGEN datoB)
{
    return (datoA * datoB);
}

template < class varGEN >
varGEN funcionDivision (varGEN datoA, varGEN datoB)
{
    return (datoA / datoB);
}

#endif //CREACION_DE_HEADERS_OPERACIONES_H
