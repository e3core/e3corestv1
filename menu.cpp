#include<iostream>
#include<ctype.h>
#include <cstdlib> // para system()
#include"calculo1.cpp"
#include"conceptos.cpp"
using namespace std;
void menu(int ingreso);
void ingreso();
string input,pregunta;
int indice;

void ingreso(){
    while(true){
        cout<<"########E3.coreSoftwarev1###############"<<endl;
        cout<<"Ingrese un digito segun su requerimiento: "<<endl;
        cout<<"1--> Conceptos "<<endl;
        cout<<"2--> Ley de ohm "<<endl;
        cout<<"3--> Resistencia del conductor "<<endl;
        cout<<"4--> Resistencias en serie y paralelo "<<endl;
        cout<<"5--> Ampliacion de rango de medicion "<<endl;
        cout<<"6--> Divisor de tension "<<endl;
        cout<<"7--> Resistencia y Temperatura "<<endl;
        cout<<"8--> Potencia electrica"<<endl;
        cout<<"9--> Conversion de energia,rendimiento "<<endl;
        cout<<"Ingrese un digito: "; getline(cin,input);
    // código que puede generar una excepción
        try {
        // convierte la entrada en un numero entero;
            indice = stoi(input);
            if (indice < 1 || indice > 9) {
                throw invalid_argument(" Error de menu");
                system("clear");
            }

            menu(indice);

        } 
    // código que maneja la excepción
        catch (invalid_argument& e) {
            system("clear");
            cout << "Error: Digito erroneo: " << e.what() <<endl;
            ingreso();
        }
        cin.ignore();
        cout<<"Desea seguir en el menu s/N -->  "; getline(cin,pregunta);
        if (pregunta == "s" || pregunta == "S"){
            continue;
        }else{
            break;
        }

    }
}

void menu(int Indice){
    switch(Indice){
        case 1:
        system("clear");
        concept();
        system("clear");
        ingreso();
        break;

        case 2:
        system("clear");
        leyDeOhm();
        system("clear");
        ingreso();
        break;

        case 3:
        system("clear");
        ResistenciaConductor();
        system("clear");
        ingreso();
        break;

        case 4:
        system("clear");
        resistenciasSerieParalelo();
        system("clear");
        ingreso();
        break;

        case 5:
        system("clear");
        ampliacionRangoMedicion();
        system("clear");
        ingreso();
        break;

        case 6:
        system("clear");
        divisorTension();
        system("clear");
        ingreso();
        break;
        
        case 7:
        system("clear");
        resistenciaTemperatura();
        system("clear");
        ingreso();
        break;

        case 8:
        system("clear");
        potenciaElectrica();
        system("clear");
        ingreso();
        break;
        
        case 9:
        system("clear");
        conversionEnergia();
        system("clear");
        ingreso();
        break;
}    
}
