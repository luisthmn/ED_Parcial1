#include <iostream>
#include <cstdlib>
#include "Clases.cpp"

using namespace std;

int main()
{
    cout << "Esta es mi pila\n\n";
    pila lista;
    pila();
    lista.agregar(4);
    lista.agregar(8);
    lista.agregar(1);
    lista.agregar(5);
    lista.agregar(3);
    lista.sacar();
    lista.pinta();
    lista.~pila();
    cout << endl << lista.Cuantos() << endl;

    cout << "\n\nEsta es mi cola" << endl;
    cola micola;
    cola();
    micola.agregar(4);
    micola.agregar(8);
    micola.agregar(1);
    micola.agregar(7);
    micola.agregar(10);
    micola.sacar();
    micola.pintar();
    cout << endl << micola.Cuantos2() << endl;


    cout << "\n\nEsta es mi lista ordenada" << endl;
    lista_ord milista;
    lista_ord();
    milista.agregarRepPocas(8);
    milista.agregarRepPocas(1);
    milista.agregarRepPocas(1);
    milista.agregarRepPocas(10);
    milista.agregarRepPocas(7);
    milista.agregarRepPocas(4);
    milista.agregarRepPocas(2);
    milista.agregarRepPocas(11);
    milista.borrar(11);
    milista.pintar();
    cout << endl << milista.Cuantos3() << endl;


    cout << "\n\nEsta es mi lista doblemente ligada de principio a fin" << endl;
    lista_doble milistadoble;
    lista_doble();
    milistadoble.agregarRepPocas(4);
    milistadoble.agregarRepPocas(5);
    milistadoble.agregarRepPocas(5);
    milistadoble.agregarRepPocas(5);
    milistadoble.agregarRepPocas(5);
    milistadoble.agregarRepPocas(7);
    milistadoble.agregarRepPocas(1);
    milistadoble.agregarRepPocas(2);
    milistadoble.agregarRepPocas(3);
    milistadoble.agregarRepPocas(8);
    milistadoble.agregarRepPocas(10);
    milistadoble.borrar(10);
    milistadoble.pintar1();
    cout << endl << milistadoble.Cuantos4() << endl;
    cout << "\n\nEsta es mi lista doblemente ligada de fin a principio" << endl;
    milistadoble.pintar2();
    cout << endl << milistadoble.Cuantos4() << endl;
    milistadoble.~lista_doble();



    cout << endl << "Esta es mi lista ordenada con repeticiones grandes" << endl;
    lista_ord_MuchasRep lista2;
    lista_ord_MuchasRep();
    lista2.agregar(5);
    lista2.agregar(5);
    lista2.agregar(4);
    lista2.agregar(4);
    lista2.agregar(3);
    lista2.agregar(3);
    lista2.agregar(6);
    lista2.agregar(6);
    lista2.agregar(6);
    lista2.agregar(6);
    lista2.agregar(6);
    lista2.borrar(1);
    lista2.pintar();
    cout << endl << endl << endl;
    lista2.~lista_ord_MuchasRep();


    cout << endl << "Esta es mi lista doblemente ligada con repeticiones grandes de principio a fin" << endl;
    listadoble_MuchasRep milista3;
    listadoble_MuchasRep();
    milista3.agregar(3);
    milista3.agregar(4);
    milista3.agregar(5);
    milista3.agregar(5);
    milista3.agregar(7);
    milista3.agregar(7);
    milista3.agregar(7);
    milista3.agregar(7);
    milista3.agregar(9);
    milista3.agregar(9);
    milista3.agregar(9);
    milista3.agregar(9);
    milista3.borrar(4);
    milista3.pintar1();
    cout << endl << milista3.Cuantos() << endl;
    cout << "\n\nEsta es mi lista doblemente ligada con muchas repeticiones de fin a principio" << endl;
    milista3.pintar2();
    cout << endl << milista3.Cuantos() << endl << endl << endl;
    milista3.~listadoble_MuchasRep();




    cout << endl << "Esta es mi lista con mitad" << endl;
    listaMitad listamitad;
    listaMitad();
    listamitad.agregar(2);
    listamitad.agregar(3);
    listamitad.agregar(1);
    listamitad.agregar(8);
    listamitad.agregar(7);
    listamitad.agregar(5);
    listamitad.pintar();
    cout << endl << endl << endl;


    cout << "\n\nFin del programa" << endl;
    cout << endl;
    system("pause");
    exit(0);
}
