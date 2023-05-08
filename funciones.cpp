#ifndef FUNCIONES_CPP
#define FUNCIONES_CPP
#include<iostream>
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
    cout<<texto[0];
    cout<<texto[1];
    dato1 = IngresoValor();
    cout<<texto[2];
    SP = new SerieParalelo(dato1);
    return SP;

}

#endif