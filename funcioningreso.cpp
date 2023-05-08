#ifndef FUNCIONINGRESO_CPP
#define FUNCIONINGRESO_CPP
#include<iostream>


using namespace std;

int IngresoDigito(int comp1,int comp2,string texto){
int retorno;
 string pregunta;
while(true){
    cout<<texto<<endl;
    cout<<"Ingrese Digito --> "; getline(cin,pregunta);
    try {
        retorno = stoi(pregunta);
        if (retorno < comp1 || retorno > comp2) {
            throw invalid_argument(" Error de menu");
        }
        break;

    } 
    // código que maneja la excepción
        catch (invalid_argument& e) {
            system("clear");
            cout << "Error: Digito erroneo: " << e.what() <<endl;
        }
}
return retorno;
}


float IngresoValor(){
float retorno;
string ingreso;
while(true){
    cout<<"---> "; getline(cin,ingreso);
    try{
        retorno = stoi(ingreso);
        break;
    }
    catch( invalid_argument& e){
        cout<<"Error: Valor Erroneo"<<endl;
        cout<<"Ingrese valor nuevamente "<<endl;
    }
}
return retorno;
}
#endif