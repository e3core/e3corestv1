#ifndef FUNCIONES_CPP
#define FUNCIONES_CPP
#include<iostream>
#include <sstream>
#include"magnitudes.h"
#include"magnitud.h"
#include"serieparalelo.h"
#include "funcioningreso.cpp"
using namespace std;

bool mensajeFinal(string texto){
    string consulta;
    bool respuesta;
     cin.ignore();
        cout<<texto; getline(cin,consulta);
        if (consulta == "s" || consulta == "S"){
            system("clear");
            respuesta = false;
        }else{
            cout<<endl;
            system("clear");
            respuesta = true;
        }    
        return respuesta;
}
Magnitud* datos(int numero,string texto[]){
    Magnitud* magnitud;
    float *datos = new float[numero];
    cout<<" ########E3.coreSoftwarev1###############"<<endl;
    cout<<texto[0]<<endl;
    for(int i=0;i<numero;i++){
        cout<<" Ingrese el valor de: "<<texto[i+1]<<endl;
        datos[i] = IngresoValor();
        magnitud = new Magnitud(datos,numero);
    }
    return magnitud;

}
void mensaje(){
    cout<<"Presione enter....."<<endl;
}
SerieParalelo* datosSP(string texto[]){
    SerieParalelo* SP;
    int dato1 = 0;
    cout<<" ########E3.coreSoftwarev1###############"<<endl;
    cout<<texto[0]<<endl;
    cout<<texto[1]<<endl;
    dato1 = IngresoValor();
    cout<<texto[2]<<endl;
    SP = new SerieParalelo(dato1);
    return SP;
   
}

SerieParalelo* datosSP2(string texto[]){
    SerieParalelo* SP;
    int dato1 = 0;
    cout<<" ########E3.coreSoftwarev1###############"<<endl;
    cout<<texto[0]<<endl;
    cout<<texto[1]<<endl;
    dato1 = IngresoValor();
    cout<<texto[2]<<endl;
    SP = new SerieParalelo(dato1);
    return SP;
   
}

typedef void (Magnitud::*FuncionPtr)();

void funcionDatos(int cantidad,string texto3[],FuncionPtr metodo1,
string mensajeMagnitud,string mensajeMagnitud2){
    string mensaje1;
    Magnitud* magnitud = nullptr;
    magnitud = datos(cantidad,texto3);
    (magnitud->*metodo1)();
    cout<<mensajeMagnitud<<magnitud->getDato4()<<mensajeMagnitud2<<endl<<endl;
    delete magnitud;
    mensaje();
}

#endif