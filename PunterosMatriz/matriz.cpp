#include <iostream>

using namespace std;
int main(){
    //Un puntero es una variable, pero no guarda un valor concreto
    //sino la direccion donde se encuentra otro valor(el valor "apuntando")

//----------------------------------------------------
    //Al declarar un puntero, se debe indicar a que tipo de dato apuntará.
    /*string saludo = "hola";
    string* p;
    p = &saludo;*/

//-------------------------------------------------

    string color = "rosa";
    cout<<"El resultado es: ";
    //cout<<&color;

//-----------------------------------------
    string saludo = "hola";
    string* p;
    p = &saludo;
    cout<<"--------------------------------------\n";
    cout<<"El resultado del primero SALUDO es: "<< saludo <<"\n";
    cout<<"El resultado del segundo *P es: "<< *p <<"\n";
    cout<<"El resultado del tercero P es: "<< p <<"\n";
    cout<<"El resultado del cuarto &SALUDO es: "<< &saludo <<"\n";

    return 0;
}