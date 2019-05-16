#ifndef ALGEBRALINEAL_H_INCLUDED
#define ALGEBRALINEAL_H_INCLUDED

//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n realiza la suma de dos vectores
    Vector_1 y Vector_2 son las direcciones de los dos vectores a sumar
    dimensionVector es la cantidad de componentes en los vectores
*/
void SumaVectores(float *Vector_1, float *Vector_2, float *VectorResultante, int dimensionVector);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n realiza la resta de dos vectores
    Vector_1 y Vector_2
    dimensionVector es la cantidad de componentes en los vectores
*/
void RestaVectores(float *Vector_1, float *Vector_2, float *VectorResultante, int dimensionVector);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n regresa el valor equivalente al producto punto de dos vectores
    Vector_1 y Vector_2 son los vectores a sumar
    dimensionVectores es la cantidad de componentes de los vectores
*/
float ProductoPuntoVec(float *Vector_1 ,float *Vector_2 , int dimensionVectores);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n regresa el valor de la longitud de un vector
    Vector_1 es el vector del que se sacar� la norma
    dimensionVector es la cantidad de componentes del vector
*/
float NormaVectores(float *Vector_1, int dimensionVector);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n regresa el valor del �ngulo en grados formado por dos vectores
    Vector_1 y Vector_2 son los vectores de los que se sacar� el �ngulo
    dimensionVector es la cantidad de componentes en los vectores
*/
float AnguloVectores(float *Vector_1, float *Vector_2, int dimensionVector);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n realiza la suma de dos matrices
    M1 y M2 son las matrices que se sumar�n
    S es la matriz en la que se guardar� la matriz resultante de la suma
    ren es la cantidad de filas en las matrices
    col es la cantidad de columnas en las matrices
*/
void SumaMatrices(float *M1, float *M2, int ren, int col, float *S);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n realiza la resta de dos matrices
    M1 y M2 son las matrices que se restar�n
    S es la matriz en la que se guardar� la matriz resultante de la resta
    ren es la cantidad de filas en las matrices
    col es la cantidad de columnas en las matrices
*/
void RestaMatrices(float *M1, float *M2, int ren, int col, float *S);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Est�s funci�nes realizan la multiplicaci�n de dos matrices, la �nica diferencia que existe entre
    las funciones es la forma en la que imprimen la matriz resultante, pero el resultado es el mismo

    M1 y M2 son las matrices que se multiplicar�n (deben de ser matrices multiplicables)
    S es donde se guardar� la matriz resultante de la multiplicaci�n
    m son las filas de M1
    n son las columnas de M1
    k son las columnas de M2

*/
void MultiplicaMatrices(float *M1, float *M2, float *S, int m, int n, int k);
void MultiplicaMatrices2(float *P, float *Q, float *R, int m, int n, int k);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Est� funci�n realiza la multiplicaci�n de una matriz por un escalar

    M es la matriz que se multiplicar� por el escalar
    ren son la cantidad de filas de la matriz
    col son la cantidad de columnas de la matriz
    escalar es el n�mero por el cual se multiplicar� la matriz
    P es la matriz donde se guardar� la matriz resultante de la multiplicaci�n
*/
void ProdMatrizPorEscalar(float *M, int ren, int col, int escalar, float *P);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n realiza el producto de una matriz por un vector
    M es la matriz que se multiplicar�
    Vector es el vector que se multiplicar� (debe ser multiplicable por la matriz)
    VecR es donde se guardar� el vector resultante de la multiplicaci�n
    nRen son la cantidad de filas de la matriz
    nCol son la cantidad de columnas de la matriz
*/
void Matrizporvector(float *M, float *Vector, float *VecR, int nRen, int nCol);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n intercambia dos renglones de una matriz
    p es la direcci�n del primer renglon
    q es la direcci�n del segundo renglon
    n es la cantidad de elementos en los renglones
*/
void IntercambiaRenglon(float *p, int *q, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n realiza una multiplicaci�n de un rengl�n en una matriz de forma que transforma en 1 el elemento pivote
    de ese rengl�n

    p es la direcci�n del renglon a transformar
    n es la cantidad de elementos en el renglon

    Las dos funciones realizan lo mismo, pero la primera de ellas se utiliza en los casos de que se quiera crear una diagonal
    de izquierda a derecha y la segunda cuando la diagonal es de derecha a izquierda, es irrelevante si la diagonal empieza de
    arriba o de abajo de la matriz.

    El valor regresado por las funciones es el valor por el que se tuvo que multiplicar el rengl�n para que el elemento pivote se
    transformara en 1
*/
float haceruno_izq_der(float *p,int n);
float haceruno_der_izq(float *p, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Est� funci�n transforma en cero un elemento debajo de un elemento pivote en una matriz
    p es el elemento pivote del cual se quiere que queden ceros debajo
    q es el elemento que se quiere hacer cero, que debe de estar en la misma columna que el elemento pivote

    Existen dos funciones que realizan esta operaci�n, la primera se usa en casos en que la diagonal de unos sea de izquierda
    a derecha y la segunda en casos en que la diagonal sea de derecha a izquierda, es irrelevante si la diagonal empieza de arriba
    o de abajo de la matriz
*/
float hacercero_izq_der(float *p, float *q, int n);
float hacercero_der_izq(float *p, float *q, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n captura una Matriz
    M es donde se guardar� la matriz capturada
    ren son la cantidad de filas de la matriz
    col son la canidad de columnas de la matriz
*/
void CapturaMatrizManual(float *M, int ren, int col);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n captura un vector
    Vector es donde se guardar� el vector capturado
    dimensionVector son la cantidad de componentes del vector
*/
void CapturaVectorManual (float *Vector, int dimensionVector);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n imprime una matriz
    M es la matriz que se imprimir�
    ren es la cantidad de filas de la matriz
    col es la cantidad de columnas de la matriz
*/
void ImprimeMatriz(float *M, int ren, int col);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n imprime un vector
    Vector es el vector a imprimir
    dimensionVector es la cantidad de componentes que tiene el vector
*/
void ImprimeVector (float *Vector, int dimensionVector);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n intercambia el lugar de dos componentes en un vector
    e1 y e2 son las componentes que se desea intercambiar de lugar
*/
void IntercambiaElemento (float *e1, float *e2);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n realiza la funci�n de pivotaje parcial, revisando las filas de una matriz creada por
    los coeficientes de un sistema de ecuaciones y colocando la que tenga el primer elemento m�s grande hasta arriba realizando
    este intercambio tambi�n en la parte expandida de la matriz que tomamos como vector.

    M es la matriz formada por los coeficientes del sistema de ecuaciones
    V es el vector o la parte expandida de la matriz
    n es la dimensi�n cuadrada de la matriz
    num es una variable auxiliar que se usa al llamar esta funci�n en la funci�n reducir
        para saber en qu� columna est� el elemento pivote que se usar�

    La funci�n de PivotajeParcialInversa es la funci�n usada cuando se est� pivoteando en el c�lculo de inversas
    p es la matriz base de la cual se quiere la inversa
    q es la matriz identidad
    n son la cantidad de elementos en el rengl�n
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
    Esta funci�n transforma en uno el elemento pivote de una matriz y transforma el renglon acordemente
    p es el rengl�n del cual se quiere transformar el elemento pivote en 1
    n son la cantidad de elementos en el rengl�n
*/
void hacerUnoMat(float *p, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n se utiliza una vez que la matriz tenga su elemento pivote transformado en uno, la funci�n procede a transformar
    en cero el elemento debajo de dicho pivote, y transforma el rengl�n de este elemento acordemente
    p es el rengl�n donde se encuentra el elemento pivote transformado en 1
    q es el rengl�n debajo del rengl�n del elemento pivote donde se quiere que haya un cero
    n son la cantidad de elementos en los renglones
*/
float hacerCeroMat(float *p, float *q, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n se utiliza para el proceso de calcular la inversa, una vez que se realicen los procesos de hacer unos
    en la matriz base, est� funci�n realiza el espejo de estas operaciones en la matriz identidad que eventualmente ser�
    la matriz inversa
    q1 es el puntero de la matriz identidad
    valor es el valor regresado por la funci�n hacerUnoMat
    n son la cantidad de elementos en los renglones
*/
void hacerUnoIdent(float *q1, float valor, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n se utiliza para modificar la matriz identidad durante el proceso de c�lculo de inversa
    Cuando se conviertan en ceros los elementos debajo del pivote en la matriz base, est� funci�n se encarga de
    realizar las operaciones de conversi�n de ceros en la matriz identidad que buscamos transformar en la inversa
    p es el rengl�n de la matriz identidad equivalente al rengl�n del elemento pivote en la matriz base
    q es el rengl�n debajo de rengl�n p que buscamos que tenga ceros
    n son la cantidad de elementos en los renglones
*/
void hacerCeroIdent(float *p, float *q, float valor, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Funci�n que hace la segunda mitad del proceso de obtener la inversa, hace las operaciones de hacer ceros arriba de la matriz
    en la matriz identidad
    p es la matriz identidad
    valor es el valor que regresa la funci�n hacerCeroMat
    n son la cantidad de elementos en los renglones
*/
void hacerCeroIdentArriba(float *p, int valor, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Funcion simple creada por practicidad que me genera una matriz identidad que se necesita para el c�lculo de inversa
    p es el puntero de donde se crear� la matriz identidad
    n es la dimensi�n de la matriz (tiene que ser una dimensi�n cuadrada)
*/
void generarMatrizIdentidad(float *p, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Funci�n muy complicada que obtiene la matriz inversa de una matriz
    p es la matriz de la que se sacar� la inversa
    q es donde se guardar� la matriz inversa
    n es la dimensi�n de la matriz que tiene que ser cuadrada
*/
void Inversa (float *p, float *q, int n);
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Esta funci�n pasa una matriz a su forma escalonada reducida
    M es la matriz a transformar
    V es el vector que contiene los valores de la parte expandida de la matriz
    n es la dimensi�n cuadrada de la matriz

    Esta funci�n cuenta con cuatro modalidades dependiendo de como sea la diagonal de pivotes
*/
void Reducir (float *p, float *q, int n);  //diagonal de 1 de arriba a abajo de izquierda a derecha
void Reducir2 (float *p, float *q, int n);  //diagonal de 1 de arriba a abajo de derecha a izquierda
void Reducir3 (float *p, float *q, int n);  //diagonal de 1 de abajo a arriba de izquierda a derecha
void Reducir4 (float *p, float *q, int n);   //diagonal de 1 de abajo a arriba de derecha a izquierda
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
/*
    Funci�n que obtiene las raices de una matriz
    M es la matriz a usar
    V es el vector que funciona como la parte expandida de la matriz
    n es la dimensi�n cuadrada de la matriz

    Esta funci�n cuenta con cuatro modalidades dependiendo de como sea la diagonal de pivotes
*/
void Resolver (float *p, float *q, int n);  //diagonal de 1 de arriba a abajo de izquierda a derecha
void Resolver2 (float *p, float *q, int n); //diagonal de 1 de arriba a abajo de derecha a izquierda
void Resolver3 (float *p, float *q, int n);  //diagonal de 1 de abajo a arriba de izquierda a derecha
void Resolver4 (float *p, float *q, int n);  //diagonal de 1 de abajo a arriba de derecha a izquierda
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------

#endif // ALGEBRALINEAL_H_INCLUDED
