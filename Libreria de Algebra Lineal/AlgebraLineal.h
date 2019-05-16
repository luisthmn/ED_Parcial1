#ifndef ALGEBRALINEAL_H_INCLUDED
#define ALGEBRALINEAL_H_INCLUDED

//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función realiza la suma de dos vectores
    Vector_1 y Vector_2 son las direcciones de los dos vectores a sumar
    dimensionVector es la cantidad de componentes en los vectores
*/
void SumaVectores(float *Vector_1, float *Vector_2, float *VectorResultante, int dimensionVector);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función realiza la resta de dos vectores
    Vector_1 y Vector_2
    dimensionVector es la cantidad de componentes en los vectores
*/
void RestaVectores(float *Vector_1, float *Vector_2, float *VectorResultante, int dimensionVector);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función regresa el valor equivalente al producto punto de dos vectores
    Vector_1 y Vector_2 son los vectores a sumar
    dimensionVectores es la cantidad de componentes de los vectores
*/
float ProductoPuntoVec(float *Vector_1 ,float *Vector_2 , int dimensionVectores);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función regresa el valor de la longitud de un vector
    Vector_1 es el vector del que se sacará la norma
    dimensionVector es la cantidad de componentes del vector
*/
float NormaVectores(float *Vector_1, int dimensionVector);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función regresa el valor del ángulo en grados formado por dos vectores
    Vector_1 y Vector_2 son los vectores de los que se sacará el ángulo
    dimensionVector es la cantidad de componentes en los vectores
*/
float AnguloVectores(float *Vector_1, float *Vector_2, int dimensionVector);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función realiza la suma de dos matrices
    M1 y M2 son las matrices que se sumarán
    S es la matriz en la que se guardará la matriz resultante de la suma
    ren es la cantidad de filas en las matrices
    col es la cantidad de columnas en las matrices
*/
void SumaMatrices(float *M1, float *M2, int ren, int col, float *S);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función realiza la resta de dos matrices
    M1 y M2 son las matrices que se restarán
    S es la matriz en la que se guardará la matriz resultante de la resta
    ren es la cantidad de filas en las matrices
    col es la cantidad de columnas en las matrices
*/
void RestaMatrices(float *M1, float *M2, int ren, int col, float *S);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Estás funciónes realizan la multiplicación de dos matrices, la única diferencia que existe entre
    las funciones es la forma en la que imprimen la matriz resultante, pero el resultado es el mismo

    M1 y M2 son las matrices que se multiplicarán (deben de ser matrices multiplicables)
    S es donde se guardará la matriz resultante de la multiplicación
    m son las filas de M1
    n son las columnas de M1
    k son las columnas de M2

*/
void MultiplicaMatrices(float *M1, float *M2, float *S, int m, int n, int k);
void MultiplicaMatrices2(float *P, float *Q, float *R, int m, int n, int k);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Está función realiza la multiplicación de una matriz por un escalar

    M es la matriz que se multiplicará por el escalar
    ren son la cantidad de filas de la matriz
    col son la cantidad de columnas de la matriz
    escalar es el número por el cual se multiplicará la matriz
    P es la matriz donde se guardará la matriz resultante de la multiplicación
*/
void ProdMatrizPorEscalar(float *M, int ren, int col, int escalar, float *P);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función realiza el producto de una matriz por un vector
    M es la matriz que se multiplicará
    Vector es el vector que se multiplicará (debe ser multiplicable por la matriz)
    VecR es donde se guardará el vector resultante de la multiplicación
    nRen son la cantidad de filas de la matriz
    nCol son la cantidad de columnas de la matriz
*/
void Matrizporvector(float *M, float *Vector, float *VecR, int nRen, int nCol);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función intercambia dos renglones de una matriz
    p es la dirección del primer renglon
    q es la dirección del segundo renglon
    n es la cantidad de elementos en los renglones
*/
void IntercambiaRenglon(float *p, int *q, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función realiza una multiplicación de un renglón en una matriz de forma que transforma en 1 el elemento pivote
    de ese renglón

    p es la dirección del renglon a transformar
    n es la cantidad de elementos en el renglon

    Las dos funciones realizan lo mismo, pero la primera de ellas se utiliza en los casos de que se quiera crear una diagonal
    de izquierda a derecha y la segunda cuando la diagonal es de derecha a izquierda, es irrelevante si la diagonal empieza de
    arriba o de abajo de la matriz.

    El valor regresado por las funciones es el valor por el que se tuvo que multiplicar el renglón para que el elemento pivote se
    transformara en 1
*/
float haceruno_izq_der(float *p,int n);
float haceruno_der_izq(float *p, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Está función transforma en cero un elemento debajo de un elemento pivote en una matriz
    p es el elemento pivote del cual se quiere que queden ceros debajo
    q es el elemento que se quiere hacer cero, que debe de estar en la misma columna que el elemento pivote

    Existen dos funciones que realizan esta operación, la primera se usa en casos en que la diagonal de unos sea de izquierda
    a derecha y la segunda en casos en que la diagonal sea de derecha a izquierda, es irrelevante si la diagonal empieza de arriba
    o de abajo de la matriz
*/
float hacercero_izq_der(float *p, float *q, int n);
float hacercero_der_izq(float *p, float *q, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función captura una Matriz
    M es donde se guardará la matriz capturada
    ren son la cantidad de filas de la matriz
    col son la canidad de columnas de la matriz
*/
void CapturaMatrizManual(float *M, int ren, int col);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función captura un vector
    Vector es donde se guardará el vector capturado
    dimensionVector son la cantidad de componentes del vector
*/
void CapturaVectorManual (float *Vector, int dimensionVector);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función imprime una matriz
    M es la matriz que se imprimirá
    ren es la cantidad de filas de la matriz
    col es la cantidad de columnas de la matriz
*/
void ImprimeMatriz(float *M, int ren, int col);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función imprime un vector
    Vector es el vector a imprimir
    dimensionVector es la cantidad de componentes que tiene el vector
*/
void ImprimeVector (float *Vector, int dimensionVector);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función intercambia el lugar de dos componentes en un vector
    e1 y e2 son las componentes que se desea intercambiar de lugar
*/
void IntercambiaElemento (float *e1, float *e2);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función realiza la función de pivotaje parcial, revisando las filas de una matriz creada por
    los coeficientes de un sistema de ecuaciones y colocando la que tenga el primer elemento más grande hasta arriba realizando
    este intercambio también en la parte expandida de la matriz que tomamos como vector.

    M es la matriz formada por los coeficientes del sistema de ecuaciones
    V es el vector o la parte expandida de la matriz
    n es la dimensión cuadrada de la matriz
    num es una variable auxiliar que se usa al llamar esta función en la función reducir
        para saber en qué columna está el elemento pivote que se usará

    La función de PivotajeParcialInversa es la función usada cuando se esté pivoteando en el cálculo de inversas
    p es la matriz base de la cual se quiere la inversa
    q es la matriz identidad
    n son la cantidad de elementos en el renglón
    num es una variable auxiliar para posicionarnos sobre el elemento pivote sobre el cual realizaremos el pivotaje
*/
void PivotajeParcial (float *p, float *q, int n, int num); //diagonal de 1 de arriba a abajo de izquierda a derecha
void PivotajeParcial2(float *M, float *V, int n, int num); //diagonal de 1 de arriba a abajo de derecha a izquiera
void PivotajeParcial3(float *p, float *q, int n, int num); //diagonal de abajo a arriba de izquierda a derecha
void PivotajeParcial4(float *p, float *q, int n, int num); //diagonal de abajo a arriba de derecha a izquierda
void PivotajeParcialInversa(float *p, float *q, int n, int num);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función transforma en uno el elemento pivote de una matriz y transforma el renglon acordemente
    p es el renglón del cual se quiere transformar el elemento pivote en 1
    n son la cantidad de elementos en el renglón
*/
void hacerUnoMat(float *p, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función se utiliza una vez que la matriz tenga su elemento pivote transformado en uno, la función procede a transformar
    en cero el elemento debajo de dicho pivote, y transforma el renglón de este elemento acordemente
    p es el renglón donde se encuentra el elemento pivote transformado en 1
    q es el renglón debajo del renglón del elemento pivote donde se quiere que haya un cero
    n son la cantidad de elementos en los renglones
*/
float hacerCeroMat(float *p, float *q, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función se utiliza para el proceso de calcular la inversa, una vez que se realicen los procesos de hacer unos
    en la matriz base, está función realiza el espejo de estas operaciones en la matriz identidad que eventualmente será
    la matriz inversa
    q1 es el puntero de la matriz identidad
    valor es el valor regresado por la función hacerUnoMat
    n son la cantidad de elementos en los renglones
*/
void hacerUnoIdent(float *q1, float valor, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función se utiliza para modificar la matriz identidad durante el proceso de cálculo de inversa
    Cuando se conviertan en ceros los elementos debajo del pivote en la matriz base, está función se encarga de
    realizar las operaciones de conversión de ceros en la matriz identidad que buscamos transformar en la inversa
    p es el renglón de la matriz identidad equivalente al renglón del elemento pivote en la matriz base
    q es el renglón debajo de renglón p que buscamos que tenga ceros
    n son la cantidad de elementos en los renglones
*/
void hacerCeroIdent(float *p, float *q, float valor, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Función que hace la segunda mitad del proceso de obtener la inversa, hace las operaciones de hacer ceros arriba de la matriz
    en la matriz identidad
    p es la matriz identidad
    valor es el valor que regresa la función hacerCeroMat
    n son la cantidad de elementos en los renglones
*/
void hacerCeroIdentArriba(float *p, int valor, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Funcion simple creada por practicidad que me genera una matriz identidad que se necesita para el cálculo de inversa
    p es el puntero de donde se creará la matriz identidad
    n es la dimensión de la matriz (tiene que ser una dimensión cuadrada)
*/
void generarMatrizIdentidad(float *p, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Función muy complicada que obtiene la matriz inversa de una matriz
    p es la matriz de la que se sacará la inversa
    q es donde se guardará la matriz inversa
    n es la dimensión de la matriz que tiene que ser cuadrada
*/
void Inversa (float *p, float *q, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta función pasa una matriz a su forma escalonada reducida
    M es la matriz a transformar
    V es el vector que contiene los valores de la parte expandida de la matriz
    n es la dimensión cuadrada de la matriz

    Esta función cuenta con cuatro modalidades dependiendo de como sea la diagonal de pivotes
*/
void Reducir (float *p, float *q, int n);  //diagonal de 1 de arriba a abajo de izquierda a derecha
void Reducir2 (float *p, float *q, int n);  //diagonal de 1 de arriba a abajo de derecha a izquierda
void Reducir3 (float *p, float *q, int n);  //diagonal de 1 de abajo a arriba de izquierda a derecha
void Reducir4 (float *p, float *q, int n);   //diagonal de 1 de abajo a arriba de derecha a izquierda
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Función que obtiene las raices de una matriz
    M es la matriz a usar
    V es el vector que funciona como la parte expandida de la matriz
    n es la dimensión cuadrada de la matriz

    Esta función cuenta con cuatro modalidades dependiendo de como sea la diagonal de pivotes
*/
void Resolver (float *p, float *q, int n);  //diagonal de 1 de arriba a abajo de izquierda a derecha
void Resolver2 (float *p, float *q, int n); //diagonal de 1 de arriba a abajo de derecha a izquierda
void Resolver3 (float *p, float *q, int n);  //diagonal de 1 de abajo a arriba de izquierda a derecha
void Resolver4 (float *p, float *q, int n);  //diagonal de 1 de abajo a arriba de derecha a izquierda
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------

#endif // ALGEBRALINEAL_H_INCLUDED
