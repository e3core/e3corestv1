/*En esta funcion se realizan diferentes funciones para ejecutar diferentes 
tareas */
#include<iostream>
#include"magnitudes.h"
#include"serieparalelo.h"
#include"magnitud.h"
#include"funciones.cpp"
#include"funcioningreso.cpp"
#include<stdlib.h>
#include<math.h>
using namespace std;

/* En esta funcion se realizan las operaciones de la ley de ohm como
- calcular la tension
- calcular la corriente
- calcular la resistencia y la conductancia */
void leyDeOhm(){
    /*SE declaran las variables indice como valor de ingreso a cada 1 de los case del menu y 
    la variable cantidad como el valor de la cantidad de datos a ingresar al objeto magnitud 
    por medio de la funcion datos().
    
    la variable texto almacenara el texto del menu, texto2 almacenara el texto del mensaje de opcion
    a querer segur en el menu o no , el arreglo texto3, almacenara diferentes texto de menu a ingresar
    datos.
    
    Magnitud* magnitud = nullptr : aqui se instancia un objeto de la clase magnitud y luego se
    le declara nullpr el cual sirve para indicar que el puntero es nulo*/

    int indice,cantidad;
    string texto,texto2;
    string texto3[100];
    Magnitud* magnitud = nullptr;
    
    while(true){
        texto = " ########E3.coreSoftwarev1###############\n"
                " Calcular: \n"
                "1--> tension\n"
                "2--> resistencia\n"
                "3--> corriente \n"
                "4--> conductancia\n "
                "5--> salir \n";
    /* Aqui se llama a la funcion IngresoDigito donde ingresara 2 numeros enteros el cual son
    para indicarle al menu el rango de numeros permitidos ingresar en este caso es desde el 1 hasta el 5 
     y por ultimo la variable texto que tiene almacenado la lista del menu por numero de ingreso*/
        indice = IngresoDigito(1,4,texto);
        system("clear");  // borra la pantalla
        switch(indice){
            /* Aqui se crea el primer caso donde se ingresa el valor 2 a la variable cantidad ya que ese
            es el numero de datos a ingresar, luego en el arreglo texto se ingresan los teto a mostrar
             en el menu de ingreso de datos */
            case 1:
            cantidad = 2;
            texto3[0] = " Calcular tension :";
            texto3[1] = "la resistencia: ";
            texto3[2] = "la corriente: ";
            /* aqui se iguala el objeto magnitud a la funcion de tipo objeto instanciado de la misma clase */
            magnitud = datos(cantidad,texto3);
            /* aqui se usa el metodo funcionM  en el objeto magnitud*/
            magnitud->funcionM();
            /* Se muestra el retorno de datos del metodo getDato4 */
            cout<<"\n la tension es: "<<magnitud->getDato4()<<"voltios"<<endl<<endl;
            /* Se elimina el objeto */
            delete magnitud;
            /* se muestra un mensaje final antes de finaliza el caso*/
            mensaje();
            break;

            case 2:
            cantidad = 2;
            texto3[0] = " Calcular resistencia :";
            texto3[1] = "la tension: ";
            texto3[2] = "la corriente ";
            magnitud = datos(cantidad,texto3);
            magnitud->funcionD();
            cout<<"\n la resistencia es: "<<magnitud->getDato4()<<"ohmios"<<endl<<endl;
            delete magnitud;
            mensaje();
            break;

            case 3:
            cantidad = 2;
            texto3[0] = " Calcular corriente :";
            texto3[1] = "la tension: ";
            texto3[2] = "la resistencia ";
            magnitud = datos(cantidad,texto3);
            magnitud->funcionD();
            cout<<"\n la corriente es: "<<magnitud->getDato4()<<"amperios"<<endl<<endl;
            delete magnitud;
            mensaje();
            break;

            case 4:
            cantidad = 2;
            texto3[0] = " Calcular conductancia :";
            texto3[0] = " 1 ";
            texto3[1] = "la resistencia ";
            magnitud = datos(cantidad,texto3);
            magnitud->funcionD();
            cout<<"\n la conductancia es: "<<magnitud->getDato4()<<"siemens"<<endl<<endl;
            delete magnitud;
            mensaje();
            break;

            case 5:
            break;
/* aqui se le carga un mensaje a la variable texto2 para luego comparar el retorno de la funcion 
mensajeriaFinal el cual si es falso continuara el bucle pero si es verdadero interumpe el bucle while y 
sale del menu */ 
        }
        texto2 = "Desea continuar dentro de la ley de ohm S/n -->  ";
        if (mensajeFinal(texto2)){
            break;
        }
    }
        
        
    
}
/* En esta funcion se calculara los diferentes parametros de la resistencia de un conductor  */
void ResistenciaConductor(){
    int indice,indice2,cantidad;
    string texto,texto2;
    string texto3[100];
    Magnitud* magnitud = nullptr;
    
    while (true){
        texto = " ########E3.coreSoftwarev1###############\n"
                " Calcular: \n"
                "1--> Resistencia del conductor\n"
                "2--> Conductividad electrica \n"
                "3--> Densidad de corriente \n"
                "4--> Salir\n ";
        
        indice = IngresoDigito(1,4,texto);    
        system("clear");
        switch(indice){

            case 1:
            texto =  " ########E3.coreSoftwarev1###############\n"
                    " Calcular resistencia de un conductor :\n"
                    " 1--> Si se tiene la conductibilidad \n"
                    " 2--> Si se tiene la resistencia especifica\n ";
               
            indice2 = IngresoDigito(1,2,texto);
            system("clear");
            
            switch(indice2){
                case 1: 
                cantidad = 3;
                texto3[0] = " Calcular resistencia de un conductor : ";
                texto3[1] = "la longitud: ";
                texto3[2] = "la conductibilidad: ";
                texto3[3] = "la seccion del conductor: ";
                magnitud = datos(cantidad,texto3);
                magnitud->funciondD();
                cout<<"\n la resistencia  es: "<<magnitud->getDato4()<<" ohmios "<<endl;
                delete magnitud;
                mensaje();
                break;

                case 2:
                cantidad = 3;
                texto3[0] = " Calcular resistencia de un conductor : ";
                texto3[1] = "la resistencia especifica: ";
                texto3[2] = "la longitud: ";
                texto3[3] = "la seccion del conductor: ";
                magnitud = datos(cantidad,texto3);
                magnitud->funcionDd();
                cout<<"\n la resistencia  es: "<<magnitud->getDato4()<<" ohmios "<<endl;
                delete magnitud;
                mensaje();
                break;

            }            
            break;

            case 2:
            cantidad = 2;
            texto3[0] = "Calcular la conductividad electrica ";
            texto3[1] = " 1 ";
            texto3[2] = "la resistencia especifica: ";
            magnitud = datos(cantidad,texto3);
            magnitud->funcionD();
            cout<<"\n la conductividad es: "<<magnitud->getDato4()<<" "<<endl;
            delete magnitud;
            mensaje();
            break;

            case 3:
            cantidad = 2;
            texto3[0] = " Calcular la densidad de corriente :";
            texto3[1] = "la Corriente electrica: ";
            texto3[2] = "la seccion del conductor: ";
            magnitud = datos(cantidad,texto3);
            magnitud->funcionD();
            cout<<"\n la densidad electrica es: "<<magnitud->getDato4()<<endl;
            delete magnitud;
            mensaje();
            break;
            
        }
        
        texto2 = "Desea continuar dentro de las Resistencias de un Conductor S/n -->  ";
        if (mensajeFinal(texto2)){
            break;
        }

    }
}

void resistenciasSerieParalelo(){
    int indice;
    string texto,texto2,pregunta;
    string texto3[100];
    SerieParalelo* magnitud = nullptr;

    texto = " Calcular: \n"
            "1--> Magnitudes en resistencias en serie \n"
            "2--> Magnitudes en resistencias en paralelo\n "
            "3--> Salir \n";
    while(true){
        indice = IngresoDigito(1,3,texto);

        switch (indice) {
            case 1: 
            texto3[0]= " Resistencias en serie: ";
            texto3[1]= " Indique la cantidad de resistencias :";
            texto3[2]= " Indique el valor de cada una de las resistencias:";
            magnitud = datosSP(texto3);
            magnitud->Serie();
            cout<<" El total de las resistencias es: "<<magnitud->getTotal()<<endl;
            delete magnitud;
            cout<<endl;
            cin.ignore();
            cout<<" Desea Calcular la tension y la corriente del circuito serie  S/n -->  ";  getline(cin,pregunta);
            if(pregunta == "s" || pregunta == "S"){
                texto3[2]= " Indique el valor de tension de cada una de las resistencias";
                magnitud = datosSP(texto3);
                magnitud->Serie();
                cout<<endl;
                cout<<" El total de las tensiones es:  "<<magnitud->getTotal()<<endl;
                cout<<" La corriente total de un circuito en serie sera la misma en todo el circuito IT = I1=I2=I3=I... "<<endl<<endl;
                delete magnitud;
            }else {
                break;
            }
        break;

            case 2:
            texto3[0]= " Resistencias en Paralelo: ";
            texto3[1]= " Indique la cantidad de resistencias :"; 
            texto3[2]= " Indique el valor de cada una de las resistencias:";
            magnitud = datosSP(texto3);
            magnitud->Paralelo();
            cout<<" el total de las resistencias es:  "<<magnitud->getTotal()<<endl;
            delete magnitud;
            cout<<endl;
            cin.ignore();
            cout<<" Desea Calcular la tension y la corriente del circuito serie  S/n -->  ";  getline(cin,pregunta);
            if (pregunta == "s" || pregunta == "S"){
                texto3[2] = " Indique la corriente que pasa por cada una de las resistencias ";
                magnitud = datosSP(texto3);
                magnitud->Paralelo();
                cout<<endl;
                cout<<" el total de las corrientes es: "<<magnitud->getTotal()<<endl;
                cout<<" la tension total de un circuito paralelo sera la misma para cada una de las resistencia UT = U1=U2=U3=U... "<<endl<<endl;
                delete magnitud;
            }else{
                break;
            }
        break;

        case 3:
        break;
        }
        
        texto2 = "Desea continuar dentro de la Resistecnias Serie Paralelo S/n -->  ";
    
        if (mensajeFinal(texto2)){
            break;
        
        }

    }
}

void ampliacionRangoMedicion(){
    float dato1,dato2,dato3,dato4,dato5;
    int indice;
    string texto,consulta;
    MagnitudElectrica* voltimetro;
    MagnitudElectrica* amperimetro;
    MagnitudElectrica* puente;
    MagnitudElectrica* determinacion;

    while(true){
        texto = " ########E3.coreSoftwarev1###############\n"
                " Calcular: \n"
                "1--> Voltimetro \n"
                "2--> Amperimetro \n"
                "3--> Determinacion indirecta de la resistencia \n"
                "4--> Conexion de resistencia en puente \n"
                "5--> salir \n";

        indice = IngresoDigito(1,5,texto);
        switch(indice){
            case 1:
            int indice10;
            
            texto = " Calcular valores del voltimetro : \n"
                    "1--> Resistor en serie teniendo la tension total y a tension de mecanismo de medicion \n"
                    "2--> Resistor en serie teniendo la resistencia interna del mecanismo de medicion \n"
                    "3--> Factor de ampliacion del rango de medicion ";
                        
                    indice10 = IngresoDigito(1,3,texto);
                    system("clear");
                    switch (indice10){
                        case 1:
                        cout<<"  ########E3.coreSoftwarev1############### "<<endl;
                        cout<<" Ingrese valor de la tension total :"<<endl;
                        dato1 = IngresoValor();
                        cout<<" Ingrese valor de la tension del mecanismo de medicion: "<<endl;
                        dato2 = IngresoValor();
                        cout<<" Ingrese valor de la corriente del mecanismo de medicion "<<endl;
                        dato3 = IngresoValor();
                        voltimetro = new MagnitudElectrica(dato1,dato2,dato3);
                        voltimetro->funcionDr();
                        cout<<"\n  El resistor total es : "<<voltimetro->getDato4()<<endl;
                        delete voltimetro;
                        break;

                        case 2:
                        cout<<" ########E3.coreSoftwarev1############### "<<endl;
                        cout<<" Ingrese valor del factor de ampliacion del rango de medicion "<<endl;
                        dato1 = IngresoValor();
                        cout<<" Ingrese la resistencia interna del mecanismo de medicion "<<endl;
                        dato3 = IngresoValor();
                        dato2 = 1;
                        voltimetro = new MagnitudElectrica(dato1,dato2,dato3);
                        voltimetro->funcionMr();
                        cout<<"\n El resistor total es : "<<voltimetro->getDato4()<<endl;
                        delete voltimetro;

                        case 3:
                        cout<<" ########E3.coreSoftwarev1############### "<<endl;
                        cout<<" Ingrese valor de la tension total :"<<endl;
                        dato1 = IngresoValor();
                        cout<<" Ingrese valor de la tension del mecanismo de medicion: "<<endl;
                        dato2 = IngresoValor();
                        voltimetro = new MagnitudElectrica(dato1,dato2);
                        voltimetro->funcionD();
                        cout<<" El factor de ampliacion del voltimetro es: "<<voltimetro->getDato4()<<endl;
                        delete voltimetro;       
                    
                    }

                    

            
            break;

            case 2:
            int indice11;
            
            texto =  " Calcular valores del amperimetro : \n"
                    "1--> Resistor en paralelo teniendo la corriente total y la corriente de mecanismo de medicion \n"
                    "2--> Resistor en serie teniendo la resistencia interna del mecanismo de medicion \n"
                    "3--> Factor de ampliacion del rango de medicion ";
            indice11 = IngresoDigito(1,3,texto);

            switch(indice11){
                case 1:
                cout<<" ########E3.coreSoftwarev1############### "<<endl;
                cout<<" Ingrese valor de la corriente total: "<<endl;
                dato2 = IngresoValor();
                cout<<" Ingrese valor de la corriente de mecanismo de medicion: "<<endl;
                dato3 = IngresoValor();
                cout<<" Ing rese valor de tension total: "<<endl;
                dato1 = IngresoValor();
                amperimetro = new MagnitudElectrica(dato1,dato2,dato3);
                amperimetro ->funciondR();
                cout<<"\n El resistor total es: "<<amperimetro->getDato4()<<endl;
                delete amperimetro;
            
                case 2:            
                cout<<" ########E3.coreSoftwarev1############### "<<endl;
                cout<<" Ingrese valor de la resistencia interna del mecanismo de medicion: "<<endl;
                dato1 = IngresoValor();
                cout<<" Ingrese valor del factor de ampliacion del rango de medicion "<<endl;
                dato2 = IngresoValor();
                dato3 = 1;
                amperimetro = new MagnitudElectrica(dato1,dato2,dato3);
                amperimetro->funciondR();
                cout<<"\n El resistor total es: "<<amperimetro->getDato4()<<endl;
                delete amperimetro;

                case 3:
                cout<<" ########E3.coreSoftwarev1############### "<<endl;
                cout<<" Ingrese valor de la corriente total: "<<endl;
                dato1 = IngresoValor();
                cout<<" Ingrese valor de la corriente de mecanismo de medicion: "<<endl;
                dato2 = IngresoValor();
                amperimetro = new MagnitudElectrica(dato1,dato2);
                amperimetro->funcionD();
                cout<<" El factor de ampliacion del amperimetro es "<<amperimetro->getDato4()<<endl;
                delete amperimetro;
            
            }
            break;

            case 3:
            int indice12;
            texto = " Calcular la determinacion indirecta de la resistencia : \n"
                    "1--> Conexion con error en la tension  \n"
                    "2--> Conexion con error en la intensidad \n";
            indice12 = IngresoDigito(1,2,texto);
            if (indice12 == 1){
                cout<<" ########E3.coreSoftwarev1############### "<<endl;
                cout<<" Ingrese valor de la tension "<<endl;
                dato1 = IngresoValor();
                cout<<" Ingrese valor de la corriente "<<endl;
                dato2 = IngresoValor();
                cout<<" Ingrese valor de la resistencia interna del amperimetro "<<endl;
                determinacion = new MagnitudElectrica(dato1,dato2,dato3);
                determinacion->funcionddr();
                cout<<" El valor de la resistencia corregida es: "<<determinacion->getDato4()<<endl;
                delete determinacion;
            }
            if (indice == 2){
                cout<<" ########E3.coreSoftwarev1############### "<<endl;
                cout<<" Ingrese valor de la tension "<<endl;
                dato3 = IngresoValor();
                cout<<" Ingrese valor de la corriente "<<endl;
                dato2 = IngresoValor();
                cout<<" Ingrese el valor de la resistencia interna del voltimetro "<<endl;
                dato5 = IngresoValor();
                dato1 = 1;
                dato4 = 1;
                determinacion = new MagnitudElectrica(dato1,dato2,dato3,dato4,dato5);
                determinacion->funcionE1();
                cout<<" el valor de la resistencia corregida es: "<<determinacion->getDato4()<<endl;
                delete determinacion;
            }
            break;

            case 4:
            cout<<" ########E3.coreSoftwarev1############### "<<endl;
            cout<<" Calcular resistencias en puente "<<endl; 
            cout<<" Ingrese Resistencia 1 "<<endl;
            dato1 = IngresoValor();
            cout<<" Ingrese Resistencia 2 "<<endl;
            dato2 = IngresoValor();
            cout<<" Ingrese Resistencia 3 "<<endl;
            dato3 = IngresoValor();
            puente = new MagnitudElectrica(dato1,dato2,dato3);
            puente->funcionMd();
            cout<<" El valor de la cuarta resistencia es: "<<puente->getDato4()<<" ohmios"<<endl;
            delete puente;
            break;

            case 5:
            break;
        }
        cin.ignore();
        cout<<"Desea continuar dentro de las Resistencias de un Conductor S/n -->  "; getline(cin,consulta);
        if (consulta == "s" || consulta == "S"){
            system("clear");
            continue;
        }else{
            cout<<endl;
            system("clear");
            break;
        }    
    }        

}

void divisorTension(){
    float dato1,dato2,dato3,dato4;
    string texto,consulta;
    int indice;
    MagnitudElectrica* sincarga;
    MagnitudElectrica* concarga;
    MagnitudElectrica* fuente;

    while(true){
        texto = " ########E3.coreSoftwarev1###############\n"
                " Calcular: \n"
                "1--> Tension parcial sin carga\n"
                "2--> Tension de marcha en vacio\n"
                "3--> Resistencia interna de la fuente de tension equivalente \n"
                "4--> Salir\n ";
        indice = IngresoDigito(1,4,texto);
        switch(indice){
            case 1:
            cout<<" ########E3.coreSoftwarev1############### "<<endl;
            cout<<" Calcular la tension parcial sin carga "<<endl;
            cout<<" Ingrese resistencia parcial 1 "<<endl;
            dato1 = IngresoValor();
            cout<<" Ingrese resistencia parcial 2 "<<endl;
            dato2 = IngresoValor();
            cout<<" Ingrese el valor de la tension total "<<endl;
            dato3 = IngresoValor();
            sincarga = new MagnitudElectrica(dato1,dato2,dato3);
            sincarga->funcionE2();
            cout<<" La tension parcial sin carga es: "<<sincarga->getDato4()<<" V"<<endl;
            delete sincarga;
            break;

            case 2:
            cout<<" ########E3.coreSoftwarev1############### "<<endl;
            cout<<" Calcular la tension de marcha en vacio "<<endl;
            cout<<" Ingrese resistencia parcial 1 "<<endl;
            dato1 = IngresoValor();
            cout<<" Ingrese resistencia parcial 2 "<<endl;
            dato2 = IngresoValor();
            cout<<" Ingrese el valor de la tension total "<<endl;
            dato3 = IngresoValor();
            concarga = new MagnitudElectrica(dato1,dato2,dato3);
            concarga->funcionE2();
            cout<<" La tension de marcha en vacio: "<<concarga->getDato4()<<" V"<<endl;
            delete concarga;
            break;

            case 3:
            cout<<" ########E3.coreSoftwarev1############### "<<endl;
            cout<<" Calcular la resistencia interna de la fuente de tension equivalente "<<endl;
            cout<<" Ingrese resistencia parcial 1 "<<endl;
            dato1 = IngresoValor();
            cout<<" Ingrese resistencia parcial 2 "<<endl;
            dato2 = IngresoValor();
            fuente = new MagnitudElectrica(dato1,dato2);
            fuente->funcionMdS();
            cout<<" La resietencia interna es: "<<fuente->getDato4()<<" ohm"<<endl;
            delete fuente;
            break;
        
        }
        cin.ignore();
        cout<<"Desea continuar dentro de las Resistencias de un Conductor S/n -->  "; getline(cin,consulta);
        if (consulta == "s" || consulta == "S"){
            system("clear");
            continue;
        }else{
            cout<<endl;
            system("clear");
            break;
        }    
      

    }


}
void resistenciaTemperatura(){
    float dato1,dato2,dato3,dato4;
    string texto,consulta;
    int indice;
    MagnitudElectrica* variacion_resistencia;
    MagnitudElectrica* resistencia_caliente;
    MagnitudElectrica* variacion_temperatura;

    while(true){
        texto = " ########E3.coreSoftwarev1###############\n"
                " Calcular: \n"
                "1--> Variacion de la resistencia\n"
                "2--> Resistencia en caliente\n"
                "3--> Variacion de la temperatura\n"
                "4--> Salir\n ";
        indice = IngresoDigito(1,4,texto);
        switch(indice){
            case 1:
            cout<<" ########E3.coreSoftwarev1############### "<<endl;
            cout<<" Calcular la variacion de la resistencia "<<endl;
            cout<<" Ingrese coeficiente de temperatura "<<endl;
            dato1 = IngresoValor();
            cout<<" Ingrese la variacion de la temperatura "<<endl;
            dato2 = IngresoValor();
            cout<<" Ingrese valor de la resistencia en frio "<<endl;
            dato3 = IngresoValor();
            variacion_resistencia = new MagnitudElectrica(dato1,dato2,dato3);
            variacion_resistencia->funcionmmm();
            cout<<" El valor de la variacion de la resistencia es: "<<variacion_resistencia->getDato4()<<endl;
            delete variacion_resistencia;
            break;

            case 2:
            cout<<" ########E3.coreSoftwarev1############### "<<endl;
            cout<<" Calcular la resistencia en caliente "<<endl;
            cout<<" Ingrese valor de la resistencia en frio "<<endl;
            dato1 = IngresoValor();
            cout<<" Ingrese la variacion de la resistencia "<<endl;
            dato2 = IngresoValor();
            resistencia_caliente = new MagnitudElectrica(dato1,dato2);
            resistencia_caliente->funcionS();
            cout<<" El valor de la resistencia en caliente es: "<<resistencia_caliente->getDato4();
            delete resistencia_caliente;
            break;

            case 3:
            cout<<" ########E3.coreSoftwarev1############### "<<endl;
            cout<<" Calcular la variacion de la temperatura "<<endl;
            cout<<" Ingrese el valor de la resistencia en caliente "<<endl;
            dato1 = IngresoValor();
            cout<<" Ingrese el valor de la resitencia en frio "<<endl;
            dato2 = IngresoValor();
            cout<<" Ingrese el coeficiente de temperatura "<<endl;
            dato3 = IngresoValor();
            variacion_temperatura = new MagnitudElectrica(dato1,dato2,dato3,dato2);
            variacion_temperatura->funcionDrm();
            cout<<"el valor de la variacion de temperatura es "<<variacion_temperatura->getDato4()<<endl;
            delete variacion_temperatura;
            break;

        }
        cin.ignore();
        cout<<"Desea continuar dentro de las Resistencias de un Conductor S/n -->  "; getline(cin,consulta);
        if (consulta == "s" || consulta == "S"){
            system("clear");
            continue;
        }else{
            cout<<endl;
            system("clear");
            break;
        }    
    }
}
 void potenciaElectrica(){
    float dato1,dato2,dato3;
    string texto,consulta;
    int indice;
    MagnitudElectrica* tension_corriente;
    MagnitudElectrica* corriente_resistencia;
    MagnitudElectrica* tension_resistencia;

    while(true){
        texto = " ########E3.coreSoftwarev1###############\n"
                " Calcular la potencia: \n"
                "1--> Teniendo tension y corriente\n"
                "2--> Teniendo corriente y resistencia\n"
                "3--> Teniendo tension y resistencia\n"
                "4--> Salir\n ";
        indice = IngresoDigito(1,4,texto);
        switch(indice){
            case 1:
            cout<<" ########E3.coreSoftwarev1############### "<<endl;
            cout<<" Ingrese valor de la tension "<<endl;
            dato1 = IngresoValor();
            cout<<" Ingrese valor de corriente "<<endl;
            dato2 = IngresoValor();
            tension_corriente = new MagnitudElectrica(dato1,dato2);
            tension_corriente->funcionM();
            cout<<" La potencia es: "<<tension_corriente->getDato4()<<" watt"<<endl;
            delete tension_corriente;
            break;

            case 2:
            cout<<" ########E3.coreSoftwarev1############### "<<endl;
            cout<<" Ingrese valor de la corriente "<<endl;
            dato1 = IngresoValor();
            dato1 = pow(dato1,2);
            cout<<" Ingrese valor de la resistencia "<<endl;
            dato2 = IngresoValor();
            corriente_resistencia = new MagnitudElectrica(dato1,dato2);
            corriente_resistencia->funcionM();
            cout<<" La potencia es: "<<tension_corriente->getDato4()<<" watt"<<endl;
            delete corriente_resistencia;
            break;

            case 3:
            cout<<" ########E3.coreSoftwarev1############### "<<endl;
            cout<<" Ingrese valor de la tension "<<endl;
            dato1 = IngresoValor();
            cout<<" Ingrese valor de la resistencia "<<endl;
            dato2 = IngresoValor();
            dato1 = pow(dato1,2);
            tension_resistencia = new MagnitudElectrica(dato1,dato2);
            tension_resistencia->funcionM();
            cout<<" La potencia es: "<<tension_corriente->getDato4()<<" watt"<<endl;
            delete tension_resistencia;


        }
        cin.ignore();
        cout<<"Desea continuar dentro de las Resistencias de un Conductor S/n -->  "; getline(cin,consulta);
        if (consulta == "s" || consulta == "S"){
            system("clear");
            continue;
        }else{
            cout<<endl;
            system("clear");
            break;
        }    
    }
    

 }

void trabajoElectrico(){
    float dato1,dato2;
    string texto,consulta;
    int indice;
    MagnitudElectrica* trabajo;
    MagnitudElectrica* determinacion;


    while(true){
        texto = " ########E3.coreSoftwarev1###############\n"
                " Calcular: \n"
                "1--> Trabajo eletrico\n"
                "2--> Determinacion de potencia con el contador\n"
                "3--> Salir\n ";
        indice = IngresoDigito(1,3,texto);
        switch(indice){
            case 1:
            cout<<" ########E3.coreSoftwarev1############### "<<endl;
            cout<<" Ingrese valor de la potencia electrica "<<endl;
            dato1 = IngresoValor();
            cout<<" Ingrese el valor del tiempo "<<endl;
            dato2 = IngresoValor();
            trabajo = new MagnitudElectrica(dato1,dato2);
            trabajo->funcionM();
            cout<<" el trabajo electrico es: "<<trabajo->getDato4()<<" Kw/H "<<endl;
            delete trabajo;
            break;

            case 2:
            cout<<" ########E3.coreSoftwarev1############### "<<endl;
            cout<<" Determinacion de potencia con el contador "<<endl;
            cout<<" Ingrese velocidad del giro del disco contador "<<endl;
            dato1 = IngresoValor();
            cout<<" Ingrese valor de la constante del contador "<<endl;
            dato2 = IngresoValor();
            determinacion = new MagnitudElectrica(dato1,dato2);
            determinacion->funcionD();
            cout<<" La potencia es: "<<determinacion->getDato4()<<endl;
            delete determinacion;
            break;
         
        cin.ignore();
        cout<<"Desea continuar dentro de las Resistencias de un Conductor S/n -->  "; getline(cin,consulta);
        if (consulta == "s" || consulta == "S"){
            system("clear");
            continue;
        }else{
            cout<<endl;
            system("clear");
            break;
        }    
        }
                
    }
}

void conversionEnergia(){
    float dato1,dato2;
    int indice,cantidad,indice2;
    string texto,texto2;
    string texto3[100];
    Magnitud* magnitud = nullptr;
    while(true){
        texto = " ########E3.coreSoftwarev1###############\n"
                " Calcular : \n"
                "1--> Rendimientos\n"
                "2--> La potencia de perdidad\n"
                "3--> Salir\n";
        indice = IngresoDigito(1,5,texto);
        switch(indice){
            case 1:
            texto = "Calcular el rendimiento\n"
                    "1--> Segun la potencia electrica\n"
                    "2--> Segun el trabajo eletrico\n"
                    "3--> Segun el rendimeinto parcial\n";
            indice2 = IngresoDigito(1,3,texto);        
            switch(indice2){
                case 1:
                cantidad = 2;
                texto3[0]="potencia util";
                texto3[1]="potencia de alimentacion";
                magnitud = datos(cantidad,texto3);
                magnitud->funcionD();
                cout<<" El valor del rendimiento es: "<<magnitud->getDato4()<<endl;
                delete magnitud;
                cout<<"Presione enter......";
                break;

                case 2:
                cantidad = 2;
                texto3[0] = "trabajo util";
                texto3[1] = "trabajo de alimentacion";
                magnitud = datos(cantidad,texto3);
                magnitud->funcionD();
                cout<<" El valor del rendimiento es: "<<magnitud->getDato4()<<endl;
                delete magnitud;
                cout<<"Presione enter......";
                break;

                case 3:
                cantidad = 2;
                texto3[0] = " Rendimiento parcial n1";
                texto3[1] = " Rendimiento parcial n2";
                magnitud = datos(cantidad,texto3);
                magnitud->funcionM();
                cout<<" El valor del rendimiento es: "<<magnitud->getDato4()<<endl;
                delete magnitud;
                cout<<"Presione enter......";
                break;
       
            }
            break;
            case 2:
            cantidad = 2;
            texto3[0]="potencia util";
            texto3[1]="potencia de alimentacion";
            magnitud = datos(cantidad,texto3);
            magnitud->funcionM();
            cout<<" El valor de la potencia perdida es: "<<magnitud->getDato4()<<endl;
            delete magnitud;
            cout<<"Presione enter......";
            break; 

            case 3:
            break;

        }        
            
        texto2 = "Desea continuar dentro de Conversion de energia y rendimiento S/n -->";
        if (mensajeFinal(texto2)){
            break;
        }
        
    }
}



