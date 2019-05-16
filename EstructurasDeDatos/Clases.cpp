#include <iostream>
#include <cstdlib>
#include "Estructuras.cpp"

using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class pila{
    caja *principio;
    int cuantos;

    public:
    pila();  //Constructor
    ~pila();  //Destructor
    void agregar(int a);
    int sacar();
    void pinta();
    int Cuantos();

};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class cola{
    caja *_principio, *_final;
    int cuantos2;

    public:
        cola();
        ~cola();
        void agregar(int a);
        int sacar();
        void pintar();
        int Cuantos2();
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class lista_ord{
    caja *principio, *anterior;

    int cuantos3;
    enum _encontrado {SI, NO};
    enum _donde {VACIO, PRINCIPIO, ENMEDIO, FINAL};
        enum _encontrado encontrado;
        enum _donde donde;

    public:
    lista_ord();
    ~lista_ord();
    void buscar(int a);
    int agregar(int a);
    int agregarRepPocas(int a);
    int borrar(int a);
    void pintar();
    int Cuantos3();

};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class lista_ord_MuchasRep{
    cajaRepMuchas_ListasOrd *principio, *anterior;
    int cuantos;

    enum _encontrado {SI, NO};
    enum _donde {VACIO, PRINCIPIO, ENMEDIO, FINAL};
        enum _encontrado encontrado;
        enum _donde donde;

    public:
    lista_ord_MuchasRep();
    ~lista_ord_MuchasRep();
    void buscar(int a);
    int agregar(int a);
    int borrar(int a);
    void pintar();
    int Cuantos();
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class lista_doble{

    caja1 *principio, *_final, *anterior;
    enum _encontrado {SI, NO};
    enum _encontrado encontrado;

    enum _donde {VACIO, PRINCIPIO, ENMEDIO, FINAL};
    enum _donde donde;

    int cuantos4;

    public:

        lista_doble();
        ~lista_doble();
        void buscar(int a);
        int agregar(int a);
        int agregarRepPocas(int a);
        int borrar(int a);
        void pintar1();
        void pintar2();
        int Cuantos4();
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class listadoble_MuchasRep{
    cajaRepMuchas_ListasDob *principio, *Final, *anterior;
    int cuantos;

    enum _encontrado{SI, NO};
    enum _donde{VACIO, PRINCIPIO, ENMEDIO, FINAL};
        enum _encontrado encontrado;
        enum _donde donde;

    public:
    listadoble_MuchasRep();
    ~listadoble_MuchasRep();
    void buscar(int a);
    int agregar(int a);
    int borrar(int a);
    void pintar1();
    void pintar2();
    int Cuantos();
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class listaMitad{

    caja1 *principio, *anterior, *Final, *mitad;
    int cuantos;
    int menores, mayores;
    enum _encontrado{SI, NO};
    enum _donde{VACIO, PRINCIPIO, ENMEDIO, FINAL};
        enum _encontrado encontrado;
        enum _donde donde;

    public:
        listaMitad();
        ~listaMitad();
        void buscar(int a);
        int agregar(int a);
        void pintar();
        int Cuantos();
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
