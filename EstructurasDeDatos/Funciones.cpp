#include <iostream>
#include <cstdlib>
#include "Clases.cpp"


using namespace std;

#define _VACIO 9999999
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      PILAS

pila::pila(){
    principio = NULL;
    cuantos = 0;
}
//////////////////////////////////////////////////
void pila::agregar(int a){
    caja *p;
    p = new caja;
    p->valor = a;

    if(p != NULL){
        p->siguiente = principio;
        principio = p;
    }
    else{
        p->siguiente = NULL;
        principio = p;
    }
    cuantos++;
    return;
}
////////////////////////////////////////////
int pila::sacar(){
     caja *p;
    int valor;
    if(principio != NULL){
        p = principio;
        principio = p->siguiente;
        valor = p->valor;
        delete p;
        cuantos--;
        return valor;
    }
    else{
        return _VACIO;
    }

}
/////////////////////////////////////////////
int pila::Cuantos(){
    return(cuantos);
}
/////////////////////////////////////////////
void pila::pinta(){
    caja *p;
    p = principio;

    while(p){
        cout << "\n " << p -> valor;
        p = p -> siguiente;
    }
}
//////////////////////////////////////////
pila::~pila(){
    caja *p;

    while(principio){
        p = principio;
        principio = p -> siguiente;
        delete p;
    }
    return;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      COLAS

cola::cola(){
    _principio = NULL;
    _final = NULL;
    cuantos2 = 0;
}
//////////////////////////////////////
void cola::agregar(int a){
    caja *p;
    p = new caja;
    p->valor = a;

    if(_principio != NULL){
        p->siguiente = NULL;
        _final->siguiente = p;
        _final = p;
    }
    else{
        p->siguiente = NULL;
        _principio = p;
        _final = p;
    }
    cuantos2++;
}
/////////////////////////////////////
int cola::sacar(){
    caja *p;
    int valor;

    if(_principio != NULL){
        p = _principio;
        _principio = p->siguiente;
        valor = p->valor;
        delete p;
        cuantos2--;
    }
    else{
        _final = NULL;
        return _VACIO;
    }
    return valor;
}
///////////////////////////////////
cola::~cola(){
    caja *p;

    while(_principio){
        p = _principio;
        _principio = p -> siguiente;
        delete p;
    }
    return;
}
///////////////////////////////
int cola::Cuantos2(){
    return(cuantos2);
}
/////////////////////////////////////////////
void cola::pintar(){
    caja *p;
    p = _principio;
    while(p){
        cout << "\n " << p -> valor;
        p = p -> siguiente;
    }
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  LISTAS ORDENADAS


void lista_ord::buscar(int a){
    caja *p;
    if(principio == NULL){
        encontrado = NO;
        donde = VACIO;
        return;
    }
    p = principio;
    while(p){
        if(p->valor == a){
            encontrado = SI;
            if(p == principio){
                donde = PRINCIPIO;
            }
            else if(p->siguiente == NULL){
                donde = FINAL;
            }
            else{
                donde = ENMEDIO;
            }
            return;
        }
        else if(p->valor < a){
            encontrado = NO;
            anterior = p;
            p = p->siguiente;
        }
        else{
            encontrado = NO;
            if(principio == p){
                donde = PRINCIPIO;
            }
            else if(anterior->siguiente == NULL){
                donde = FINAL;
            }
            else{
                donde = ENMEDIO;
            }
            return;
        }
    }
    encontrado = NO;
    donde = FINAL;
}
/////////////////////////////////////////////////////////////
int lista_ord::agregar(int a){
    caja *p;
    buscar(a);
    if(encontrado == SI) return a;
    p = new caja;
    p->valor = a;
    if(donde == VACIO){
        p->siguiente = NULL;
        principio =  p;
    }
    else if(donde == PRINCIPIO){
        p->siguiente = principio;
        principio = p;
    }
    else if(donde == FINAL){
        p->siguiente = NULL;
        anterior->siguiente = p;
    }
    else{
        p->siguiente = anterior->siguiente;
        anterior->siguiente = p;
    }
    cuantos3++;
    return 1;
}
///////////////////////////////////////////////////////////
int lista_ord::agregarRepPocas(int a){
    caja *p;
    buscar(a);
    p = new caja;
    p->valor = a;
    if(donde == VACIO){
        p->siguiente = NULL;
        principio =  p;
    }
    else if(donde == PRINCIPIO){
        p->siguiente = principio;
        principio = p;
    }
    else if(donde == FINAL){
        p->siguiente = NULL;
        anterior->siguiente = p;
    }
    else{
        p->siguiente = anterior->siguiente;
        anterior->siguiente = p;
    }
    cuantos3++;
    return 1;
}
/////////////////////////////////////////////
lista_ord::borrar(int a){
    caja *p;
    buscar(a);
    if(encontrado == NO) return 0;
    if(donde == PRINCIPIO){
        p = principio;
        principio = p->siguiente;
    }
    else if(donde == ENMEDIO){
        p = anterior->siguiente;
        anterior->siguiente = p->siguiente;
    }
    else{
        p = anterior->siguiente;
        anterior->siguiente = NULL;
    }
    delete p;
    cuantos3--;
    return 1;
}
/////////////////////////////////////////////////////////
void lista_ord::pintar(){
    caja *p;
    p = principio;
    while(p){
        cout << "\n " << p -> valor;
        p = p -> siguiente;
    }
}
/////////////////////////////////////////////////////////
lista_ord::~lista_ord(){
    caja *p;
    while(principio){
        p = principio;
        principio = p->siguiente;
        delete p;
    }
    return;
}
/////////////////////////////////////////////////////////
int lista_ord::Cuantos3(){
    return(cuantos3);
}
/////////////////////////////////////////////
lista_ord::lista_ord(){
    principio = NULL;
    anterior = NULL;
    cuantos3 = 0;
    donde = VACIO;
    encontrado = NO;
}






///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//LISTAS ORDENADA CON MUCHAS REP

lista_ord_MuchasRep::lista_ord_MuchasRep(){
    principio = NULL;
    anterior = NULL;
    donde = VACIO;
    encontrado = NO;
    cuantos = 0;
}
///////////////////////////////////////////////
lista_ord_MuchasRep::~lista_ord_MuchasRep(){
   cajaRepMuchas_ListasOrd *p;
   while(principio){
        p = principio;
        principio = p->siguiente;
        delete p;
   }
   return;
}
////////////////////////////////////////////////
void lista_ord_MuchasRep::buscar(int a){
    cajaRepMuchas_ListasOrd *p;
    if(principio == NULL){
        encontrado = NO;
        donde = VACIO;
        return;
    }
    p = principio;
    while(p){
        if(p->valor == a){
            encontrado = SI;
            if(p == principio){
                donde = PRINCIPIO;
            }
            else if(p->siguiente == NULL){
                donde = FINAL;
            }
            else{
                donde = ENMEDIO;
            }
            return;
        }
        else if(p->valor < a){
            encontrado = NO;
            donde = ENMEDIO;
            anterior = p;
            p = p->siguiente;
        }
        else{
            encontrado = NO;
            if(principio == p){
                donde = PRINCIPIO;
            }
            else if(anterior->siguiente == NULL){
                donde = FINAL;
            }
            else{
                donde = ENMEDIO;
            }
            return;
        }
    }
}
/////////////////////////////////////////////////
int lista_ord_MuchasRep::agregar(int a){

    cajaRepMuchas_ListasOrd *p;
    buscar(a);
    if(encontrado == SI){
        (p->repeticiones)+=1;
        return(0);
    }
    p = new cajaRepMuchas_ListasOrd;
    p->valor = a;
    p->repeticiones = 1;

    if(donde == VACIO){
        p->siguiente = NULL;
        principio = p;
    }
    else if(donde == PRINCIPIO){
        p->siguiente = principio;
        principio = p;
    }
    else if(donde == FINAL){
        p->siguiente = NULL;
        anterior->siguiente = p;
    }
    else{
        p->siguiente = anterior->siguiente;
        anterior->siguiente = p;
    }

    cuantos++;
    return(1);
}
/////////////////////////////////////////////////
void lista_ord_MuchasRep::pintar(){

    cajaRepMuchas_ListasOrd *p;
    p = principio;

    while(p){
        cout << "\n num: " << p->valor << " veces repetidas: " << p->repeticiones;
        p = p->siguiente;
    }
    return;
}
////////////////////////////////////////////////
int lista_ord_MuchasRep::Cuantos(){
    return cuantos;
}
////////////////////////////////////////////////////
int lista_ord_MuchasRep::borrar(int a){

    cajaRepMuchas_ListasOrd *p;
    buscar(a);
    if(encontrado == NO) return 0;

    if(p->repeticiones > 0){
            if(donde == PRINCIPIO){
                p = principio;
            }
            p = anterior->siguiente;
            p->repeticiones--;
            return 0;
    }

    if(donde == PRINCIPIO){
        p = principio;
        principio = p->siguiente;
    }
    else if(donde == ENMEDIO){
        p = anterior->siguiente;
        anterior->siguiente = p->siguiente;
    }
    else{
        p = anterior->siguiente;
        anterior->siguiente = NULL;
    }
    cuantos--;
    delete p;
    return 1;
}
//////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//LISTAS DOBLEMENTE LIGADAS

lista_doble::lista_doble(){
    principio = NULL;
    anterior = NULL;
    _final = NULL;
    cuantos4 = 0;
}
////////////////////////////////////////////////////
lista_doble::~lista_doble(){
    caja1 *p;
    while(principio){
        p = principio;
        principio = p->siguiente;
        delete p;
    }
    return;
}
////////////////////////////////////////////////////
void lista_doble::buscar(int a){
    caja1 *p;
    if(principio == NULL){
        encontrado = NO;
        donde = VACIO;
        return;
    }

    p = principio;
    while(p){
        if(p->valor == a){
            encontrado = SI;
            if(p == principio){
                donde = PRINCIPIO;
            }
            else if(p->siguiente == NULL){
                donde = FINAL;
            }
            else {
                donde = ENMEDIO;
            }
            return;
        }
        else if(p->valor < a){
            encontrado = NO;
            anterior = p;
            p = p->siguiente;
        }
        else{
            encontrado = NO;
            if(principio == p){
                donde = PRINCIPIO;
            }
            else if(p->siguiente == NULL){
                donde = FINAL;
            }
            else{
                donde = ENMEDIO;
            }
            return;
        }
    }

    encontrado = NO;
    donde = FINAL;
}

///////////////////////////////////////////////////
lista_doble::agregar(int a){
    caja1 *p;
    buscar(a);
    if(encontrado == SI) return(0);
    p = new caja1;
    p->valor = a;

    if(donde == VACIO){
        p->siguiente = NULL;
        p->anterior = NULL;
        principio = p;
        _final = p;
    }
    else if(donde == PRINCIPIO){
        p->siguiente = principio;
        p->anterior = NULL;
        (p->siguiente)->anterior = p;
        principio = p;
    }
    else if(donde == ENMEDIO){
        p->siguiente = anterior->siguiente;
        p->anterior = anterior;
        (p->siguiente)->anterior = p;
        anterior->siguiente = p;
    }
    else{
        p->siguiente = NULL;
        p->anterior = _final;
        _final = p;
        (p->anterior)->siguiente = p;
    }

    cuantos4++;
    return(1);
}
/////////////////////////////////////////////////////////
int lista_doble::agregarRepPocas(int a){
    caja1 *p;
    buscar(a);
    p = new caja1;
    p->valor = a;

    if(donde == VACIO){
        p->siguiente = NULL;
        p->anterior = NULL;
        principio = p;
        _final = p;
    }
    else if(donde == PRINCIPIO){
        p->siguiente = principio;
        p->anterior = NULL;
        (p->siguiente)->anterior = p;
        principio = p;
    }
    else if(donde == ENMEDIO){
        p->siguiente = anterior->siguiente;
        p->anterior = anterior;
        (p->siguiente)->anterior = p;
        anterior->siguiente = p;
    }
    else{
        p->siguiente = NULL;
        p->anterior = _final;
        _final = p;
        (p->anterior)->siguiente = p;
    }

    cuantos4++;
    return(1);
}
/////////////////////////////////////////////////////////
int lista_doble::borrar(int a){
    caja1 *p;
    buscar(a);
    if(encontrado == NO) return(0);
    if(donde == PRINCIPIO){
        p = principio;
        principio = p->siguiente;
        if(p->siguiente == NULL){
            _final = NULL;
        }
        else{
            (p->siguiente)->anterior = NULL;
        }
    }
    else if(donde == ENMEDIO){
        p = anterior->siguiente;
        anterior->siguiente = p->siguiente;
        (p->siguiente)->anterior = anterior;
    }
    else{
        p = _final;
        (p->anterior)->siguiente = NULL;
        _final = anterior;
    }

    cuantos4--;
    delete p;
    return(1);
}
////////////////////////////////////////////////////////
void lista_doble::pintar1(){
    caja1 *p;
    p = principio;   //Este pintar es para pintar de principio a fin
    while(p){
        cout << "\n " << p -> valor;
        p = p -> siguiente;
    }
}
////////////////////////////////////////////////////////
void lista_doble::pintar2(){ //Pintar de final a principip
    caja1 *p;
    p = _final;
    while(p){
        cout << "\n " << p -> valor;
        p = p -> anterior;
    }
}
/////////////////////////////////////////////////////////
int lista_doble::Cuantos4(){
    return(cuantos4);
}
/////////////////////////////////////////////////////////








///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//LISTAS DOBLEMENTE LIGADAS CON MUCHAS REP

///////////////////////////////////////////////////
listadoble_MuchasRep::listadoble_MuchasRep(){

    principio = NULL;
    Final = NULL;
    anterior = NULL;
    cuantos = 0;
}
//////////////////////////////////////////////////
listadoble_MuchasRep::~listadoble_MuchasRep(){
    cajaRepMuchas_ListasDob *p;
    while(principio){
        p = principio;
        principio = p->siguiente;
        delete p;
    }
    return;
}
//////////////////////////////////////////////////
void listadoble_MuchasRep::buscar(int a){
    cajaRepMuchas_ListasDob *p;
    if(principio == NULL){
        encontrado = NO;
        donde = VACIO;
        return;
    }

    p = principio;
    while(p){
        if(p->valor == a){
            encontrado = SI;
            if(p == principio){
                donde = PRINCIPIO;
            }
            else if(p->siguiente == NULL){
                donde = FINAL;
            }
            else {
                donde = ENMEDIO;
            }
            return;
        }
        else if(p->valor < a){
            encontrado = NO;
            anterior = p;
            p = p->siguiente;
        }
        else{
            encontrado = NO;
            if(principio == p){
                donde = PRINCIPIO;
            }
            else if(p->siguiente == NULL){
                donde = FINAL;
            }
            else{
                donde = ENMEDIO;
            }
            return;
        }
    }

    encontrado = NO;
    donde = FINAL;
}
//////////////////////////////////////////////////
int listadoble_MuchasRep::agregar(int a){
    cajaRepMuchas_ListasDob *p;
    buscar(a);
    if(encontrado == SI){
        (p->repeticiones)+=1;
        return(0);
    }
    if(encontrado == SI) return(0);
    p = new cajaRepMuchas_ListasDob;
    p->valor = a;
    p->repeticiones=1;

    if(donde == VACIO){
        p->siguiente = NULL;
        p->anterior = NULL;
        principio = p;
        Final = p;
    }
    else if(donde == PRINCIPIO){
        p->siguiente = principio;
        p->anterior = NULL;
        (p->siguiente)->anterior = p;
        principio = p;
    }
    else if(donde == ENMEDIO){
        p->siguiente = anterior->siguiente;
        p->anterior = anterior;
        (p->siguiente)->anterior = p;
        anterior->siguiente = p;
    }
    else{
        p->siguiente = NULL;
        p->anterior = Final;
        Final = p;
        (p->anterior)->siguiente = p;
    }

    cuantos++;
    return(1);
}
///////////////////////////////////////////////////
int listadoble_MuchasRep::borrar(int a){
    cajaRepMuchas_ListasDob *p;
    buscar(a);
    if(encontrado == NO) return(0);
    if(p->repeticiones > 0){
            if(donde == PRINCIPIO){
                p = principio;
            }
            p = anterior->siguiente;
            p->repeticiones--;
            return 0;
    }
    if(donde == PRINCIPIO){
        p = principio;
        principio = p->siguiente;
        if(p->siguiente == NULL){
            Final = NULL;
        }
        else{
            (p->siguiente)->anterior = NULL;
        }
    }
    else if(donde == ENMEDIO){
        p = anterior->siguiente;
        anterior->siguiente = p->siguiente;
        (p->siguiente)->anterior = anterior;
    }
    else{
        p = Final;
        (p->anterior)->siguiente = NULL;
        Final = anterior;
    }

    cuantos--;
    delete p;
    return(1);
}
/////////////////////////////////////////////////////
int listadoble_MuchasRep::Cuantos(){
    return cuantos;
}
///////////////////////////////////////////////////////
void listadoble_MuchasRep::pintar1(){
    cajaRepMuchas_ListasDob *p;
    p = principio;
    while(p){
        cout << "\n " << p -> valor << ", " << p->repeticiones << " veces ";
        p = p -> siguiente;
    }
}
///////////////////////////////////////////////////////
void listadoble_MuchasRep::pintar2(){
    cajaRepMuchas_ListasDob *p;
    p = Final;
    while(p){
        cout << "\n " << p -> valor << ", " << p->repeticiones << " veces ";
        p = p -> anterior;
    }
}
////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//LISTAS DOBLEMENTE LIGADAS CON MITAD


/////////////////////////////////////////////
listaMitad::listaMitad(){

    principio = NULL;
    anterior = NULL;
    Final = NULL;
    mitad = NULL;
    cuantos = 0;
    menores = 0;
    mayores = 0;
}
/////////////////////////////////////////////
listaMitad::~listaMitad(){
    caja1 *p;
    while(principio){
        p = principio;
        p = p->siguiente;
        delete p;
    }
    return;
}
//////////////////////////////////////////////
int listaMitad::Cuantos(){
    return cuantos;
}
////////////////////////////////////////////////
void listaMitad::pintar(){
    caja1 *p;
    p = principio;
    while(p){
        cout << endl << p->valor << " ";
        p = p->siguiente;
    }
}
//////////////////////////////////////////////////
void listaMitad::buscar(int a){
    caja1 *p;
    if(principio == NULL){
        encontrado = NO;
        donde = VACIO;
        return;
    }

    if(a < mitad->valor){
        p = principio;
        while(p){
            if(p->valor == a){
                encontrado = SI;
                if(p == principio){
                    donde = PRINCIPIO;
                }
                else {
                    donde = ENMEDIO;
                }
                return;
            }
            else if(p->valor < a){
                encontrado = NO;
                anterior = p;
                p = p->siguiente;
            }
            else{
                encontrado = NO;
                if(principio == p){
                    donde = PRINCIPIO;
                }
                else{
                    donde = ENMEDIO;
                }
                return;
            }
        }
    }
    else if(a >= mitad->valor){
        p = mitad;
        while(p){
            if(p->valor == a){
                encontrado = SI;
                if(p->siguiente == NULL){
                    donde = FINAL;
                }
                else{
                    donde = ENMEDIO;
                }
                return;
            }
            else if(p->valor < a){
                encontrado = NO;
                anterior = p;
                p = p->siguiente;
            }
            else{
                encontrado = NO;
                if(p->siguiente == NULL){
                    donde = FINAL;
                }
                else{
                    donde = ENMEDIO;
                }
                return;
            }
            encontrado = NO;
            donde = FINAL;
        }
    }
}
////////////////////////////////////////////////////////
int listaMitad::agregar(int a){
    caja1 *p;
    buscar(a);
    if(encontrado == SI) return(0);
    p = new caja1;
    p->valor = a;

    if(donde == VACIO){
        p->siguiente = NULL;
        p->anterior = NULL;
        principio = p;
        mitad = p;
        Final = p;
    }
    else if(donde == PRINCIPIO){
        p->siguiente = principio;
        p->anterior = NULL;
        (p->siguiente)->anterior = p;
        principio = p;
        if(p->valor < mitad->valor) menores++;
    }
    else if(donde == ENMEDIO){
        p->siguiente = anterior->siguiente;
        p->anterior = anterior;
        (p->siguiente)->anterior = p;
        anterior->siguiente = p;
        if(p->valor < mitad->valor) menores++;
        if(p->valor > mitad->valor) mayores++;
    }
    else{
        p->siguiente = NULL;
        p->anterior = Final;
        Final = p;
        (p->anterior)->siguiente = p;
        if(p->valor < mitad->valor) menores++;
        if(p->valor > mitad->valor) mayores++;
    }

    if(mayores > menores){
        mitad = mitad->siguiente;
        mayores--;
        menores++;
    }
    if(menores-mayores > 1){
        mitad = mitad->anterior;
        menores--;
        mayores++;
    }
    cout << endl;
    cout << "La mitad es: " << mitad->valor << endl;
    cout << "Num menores: " << menores << endl;
    cout << "Num mayores: " << mayores << endl;
    cuantos++;
    return(1);
}
//////////////////////////////////////////////////////
