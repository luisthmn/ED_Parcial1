#include <iostream>
#include <cstdlib>

using namespace std;

/////////////////////////////////////
struct caja{                            //Pilas, colas, listaOrd
    int valor;
    caja *siguiente;
};
////////////////////////////////////
struct caja1{                           //Lista doblemente ligadas
    int valor;
    caja1 *siguiente, *anterior;
};
///////////////////////////////////
struct cajaRepMuchas_ListasOrd{
    int valor;                          //Caja para repeticiones grandes listas ordenadas
    int repeticiones;
    cajaRepMuchas_ListasOrd *siguiente;
};
//////////////////////////////////////
struct cajaRepMuchas_ListasDob{              //Caja para repeticiones grandes listas doblemente ligadas
    int valor;
    int repeticiones;
    cajaRepMuchas_ListasDob *siguiente, *anterior;
};
/////////////////////////////////////////
