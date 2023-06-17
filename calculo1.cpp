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

    int indice;
    string texto,texto2;
    string texto3[100];

    while(true){
        texto = "########E3.coreSoftwarev1###############\n"
                "Ley de ohm\n"
                "Calcular: \n"
                "  1--> tension\n"
                "  2--> resistencia\n"
                "  3--> corriente \n"
                "  4--> conductancia\n"
                "  5--> salir \n";
    /* Aqui se llama a la funcion IngresoDigito donde ingresara 2 numeros enteros el cual son
    para indicarle al menu el rango de numeros permitidos ingresar en este caso es desde el 1 hasta el 5 
     y por ultimo la variable texto que tiene almacenado la lista del menu por numero de ingreso*/
        indice = IngresoDigito(1,5,texto);
        system("clear");  // borra la pantalla
        switch(indice){
            /* Aqui se crea el primer caso donde se ingresa el valor 2 a la variable cantidad ya que ese
            es el numero de datos a ingresar, luego en el arreglo texto se ingresan los teto a mostrar
             en el menu de ingreso de datos */
            case 1:
            texto3[0] = " Calcular tension :";
            texto3[1] = "la resistencia ";
            texto3[2] = "la corriente ";
            funcionDatos(2,texto3,&Magnitud::funcionM,"La tension es: "," voltios");
            break;

            case 2:
            texto3[0] = " Calcular resistencia :";
            texto3[1] = "la tension ";
            texto3[2] = "la corriente ";
            funcionDatos(2,texto3,&Magnitud::funcionD,"la resistencia es: "," ohmios");
            break;

            case 3:

            texto3[0] = " Calcular corriente :";
            texto3[1] = "la tension ";
            texto3[2] = "la resistencia ";
            funcionDatos(2,texto3,&Magnitud::funcionD,"la corriente es: "," amperios");
            break;

            case 4:
            texto3[0] = " Calcular conductancia :";
            texto3[1] = " 1 ";
            texto3[2] = "la resistencia ";
            funcionDatos(2,texto3,&Magnitud::funcionD,"La conductancia es: "," siemens");
            break;

            case 5:
            mensaje();
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
    int indice,indice2;
    string texto,texto2;
    string texto3[100];
    
    while (true){
        texto = "########E3.coreSoftwarev1###############\n"
                "Resistencia del conductor\n"
                "Calcular: \n"
                "  1--> Resistencia del conductor\n"
                "  2--> Conductividad electrica \n"
                "  3--> Densidad de corriente \n"
                "  4--> Salir\n ";
        
        indice = IngresoDigito(1,4,texto);    
        system("clear");
        switch(indice){

            case 1:
            texto =  " ########E3.coreSoftwarev1###############\n"
                    " Calcular resistencia de un conductor :\n"
                    "   1--> Si se tiene la conductibilidad \n"
                    "   2--> Si se tiene la resistencia especifica\n ";
                
            indice2 = IngresoDigito(1,2,texto);
            system("clear");
            
            switch(indice2){
                case 1: 
                texto3[0] = " Calcular resistencia de un conductor : ";
                texto3[1] = "la longitud ";
                texto3[2] = "la conductibilidad ";
                texto3[3] = "la seccion del conductor ";
                funcionDatos(3,texto3,&Magnitud::funciondD,"La resistencia es: "," ohmios");
                break;

                case 2:
                texto3[0] = " Calcular resistencia de un conductor : ";
                texto3[1] = "la resistencia especifica ";
                texto3[2] = "la longitud ";
                texto3[3] = "la seccion del conductor ";
                funcionDatos(3,texto3,&Magnitud::funcionDd,"La resistencia es: "," ohmios");
                break;

            }            
            break;

            case 2:
            texto3[0] = "Calcular la conductividad electrica ";
            texto3[1] = " 1 ";
            texto3[2] = "la resistencia especifica ";
            funcionDatos(2,texto3,&Magnitud::funcionD,"La conductividad es: "," ");
            break;

            case 3:
            texto3[0] = " Calcular la densidad de corriente :";
            texto3[1] = "la Corriente electrica ";
            texto3[2] = "la seccion del conductor ";
            funcionDatos(2,texto3,&Magnitud::funcionD,"La densidad electrica es: "," ");
            break;
             case 4:
             mensaje();
             break;
            
        }

        texto2 = "Desea continuar dentro de las Resistencias de un Conductor S/n -->  ";
        if (mensajeFinal(texto2)){
            break;
        }

    }
}
/* En esta funcion se calculara circuitos de resistencias en serie y paralelo en conjunto con sus tensiones y consumos*/
void resistenciasSerieParalelo(){
    int indice,indice2;
    string texto,texto2,pregunta;
    string texto3[100];
    SerieParalelo* magnitud = nullptr;
    while(true){
    texto = " ########E3.coreSoftwarev1###############\n"
            " Resistencias en serie y paralelo\n"
            " Calcular: \n"
            "1--> Magnitudes en resistencias en serie \n"
            "2--> Magnitudes en resistencias en paralelo\n"
            "3--> Salir \n";
   
        indice = IngresoDigito(1,3,texto);
        system("clear");

        switch (indice) {
            case 1: 
            texto3[0]= " Resistencias en serie:\n ";
            texto3[1]= " Indique la cantidad de resistencias :";
            texto3[2]= " Indique el valor de cada una de las resistencias:";
            magnitud = datosSP(texto3);
            magnitud->Serie();
            
            
            cout<<" El total de las resistencias es: "<<magnitud->getTotal()<<" ohm"<<endl;
            cout<<" Desea Calcular la tension y la corriente del circuito serie  S/n -->  ";  getline(cin,pregunta);
            if(pregunta == "s" || pregunta == "S"){
                system("clear");
                texto = " ########E3.coreSoftwarev1###############\n"
                        " Calcular: \n"
                        "1--> Tension total del circuito serie \n"
                        "2--> Tension de cada una de las resistencias \n"
                        "3--> Corriente total del circuito \n"
                        "4--> Salir \n";
                        while(true){
                            indice2 = IngresoDigito(1,4,texto);
                            system("clear");
                            switch(indice2){
                                case 1:
                                cout<<"Calcular la tension total del circuito"<<endl;
                                magnitud->productoTotal("la corriente total:");
                                cout<<" la tension total del circuito es de : "<<magnitud->getTotal()<<" V"<<endl<<endl;
                                break;
                                case 2:
                                cout<<" Calcular la tension de cada una de las resistencias del circuito "<<endl;
                                magnitud->productoIndividual1("V"," la corriente total");
                                break;
                                case 3:
                                cout<<" Calcular la corriente total del circuito "<<endl;                           
                                magnitud->derivadoTotal("la tension total");
                                cout<<" la corriente total del circuito es de : "<<magnitud->getTotal()<<" A"<<endl<<endl;
                                break;  
                                case 4:
                                break;
                            }
                            mensaje();
                            texto2 = "Desea continuar dentro de este menu S/n -->  ";
    
                            if (mensajeFinal(texto2)){
                                break;
                            }
                            
                        }
                     mensaje();   
            }else{
                mensaje();
            }
            
            delete magnitud;
            cin.ignore();
            mensaje();
            break;

            case 2:
            texto3[0]= " Resistencias en Paralelo: ";
            texto3[1]= " Indique la cantidad de resistencias :"; 
            texto3[2]= " Indique el valor de cada una de las resistencias:";
            magnitud = datosSP(texto3);
            magnitud->Paralelo();
            cout<<" el total de las resistencias es:  "<<magnitud->getTotal()<<" ohm"<<endl;
            cout<<" Desea Calcular la tension y la corriente del circuito serie  S/n -->  ";  getline(cin,pregunta);
            if (pregunta == "s" || pregunta == "S"){
                system("clear");
                texto = " ########E3.coreSoftwarev1###############\n"
                        " Calcular: \n"
                        "1--> Tension del circuito paralelo \n"
                        "2--> Corriente de cada una de las resistencias \n"
                        "3--> Corriente total del circuito \n"
                        "4--> salir \n";
                        while(true){
                            indice2 = IngresoDigito(1,4,texto);
                            system("clear");
                            switch(indice2){
                                case 1:
                                cout<<" Calcular la tension del circuito "<<endl;                           
                                magnitud->productoTotal("la corriente total");
                                cout<<" la tension del circuito es de : "<<magnitud->getTotal()<<" V"<<endl<<endl;
                                break;  
                                case 2:
                                cout<<" Calcular la tension de cada una de las resistencias del circuito "<<endl;
                                magnitud->derivadoIndividual("A"," la tension total");
                                break;
                                case 3:
                                cout<<" Calcular la corriente total del circuito "<<endl;                           
                                magnitud->derivadoTotal("la tension total");
                                cout<<" la corriente total del circuito es de : "<<magnitud->getTotal()<<" A"<<endl<<endl;
                                break;
                                
                                case 4:
                                break;
                            }
                            mensaje();
                            texto2 = "Desea continuar dentro de este menu S/n -->  ";
    
                            if (mensajeFinal(texto2)){
                                break;
        
                            }
                            
                        }
                      mensaje();  
            }else{
                mensaje();
            }
            delete magnitud;
            cin.ignore();
            mensaje();
            break;
   
            case 3:
            break;
        }
        
        texto2 = "Desea continuar dentro de la Resistencias Serie Paralelo S/n -->  ";
    
        if (mensajeFinal(texto2)){
            break;
        
        }
        

    }
    mensaje();
}

void ampliacionRangoMedicion(){
    int indice,indice2;
    string texto,texto2,pregunta;
    string texto3[100];


    while(true){
        texto = "########E3.coreSoftwarev1###############\n"
                "Ampliacion de rango y medicion\n"
                "Calcular: \n"
                "  1--> Voltimetro \n"
                "  2--> Amperimetro \n"
                "  3--> Determinacion indirecta de la resistencia \n"
                "  4--> Conexion de resistencia en puente \n"
                "  5--> salir \n";

        indice = IngresoDigito(1,5,texto);
        switch(indice){
            case 1:
            
            texto = "Calcular valores del voltimetro : \n"
                    "  1--> Resistor en serie teniendo la tension total y a tension de mecanismo de medicion \n"
                    "  2--> Resistor en serie teniendo la resistencia interna del mecanismo de medicion \n"
                    "  3--> Factor de ampliacion del rango de medicion ";
                        
                    indice2 = IngresoDigito(1,3,texto);
                    system("clear");
                    switch (indice2){
                        case 1:
                        texto3[0]= " Calcular el resistor en serie teniendo la tension total y a tension de mecanismo de medicion: ";
                        texto3[1]= "la tension total";
                        texto3[2]= "la tension del mecanismo de medicion";                       
                        texto3[3]= "la corriente del mecanismo de medicion";
                        funcionDatos(3,texto3,&Magnitud::funcionDr,"El resistor total en serie es: "," ");
                        break;

                        case 2:
                        texto3[0]= "Calcular el resistor en serie teniendo la resistencia interna del mecanismo de medicion";
                        texto3[1]= "factor de ampliacion del rango de medicion ";
                        texto3[2]= "1 ";
                        texto3[3]= "la resistencia interna del mecanismo de medicion ";
                        funcionDatos(3,texto3,&Magnitud::funcionMr,"El resistor total en serie es: "," ");
                        break;

                        case 3:
                        texto3[0]= " Calcular Factor de ampliacion del rango de medicion";
                        texto3[1]= "la tension total ";
                        texto3[2]= "la tension del mecanismo de medicion ";
                        funcionDatos(2,texto3,&Magnitud::funcionD,"El factor de ampliacion del voltimetro es: "," ");
                        break;                           
                    }
                    
            break;

            case 2:
            texto =  " Calcular valores del amperimetro : \n"
                    "1--> Resistor en paralelo teniendo la corriente total y la corriente de mecanismo de medicion \n"
                    "2--> Resistor en paralelo teniendo la resistencia interna del mecanismo de medicion \n"
                    "3--> Factor de ampliacion del rango de medicion ";
            indice2 = IngresoDigito(1,3,texto);
            system("clear");

            switch(indice2){
                case 1:
                texto3[0]= "Calcular resistor en paralelo teniendo la corriente total y la corriente de mecanismo de medicion";
                texto3[1]= "tension total ";
                texto3[2]= "la corriente total ";
                texto3[3]= "la corriente de mecanismo de medicion ";
                funcionDatos(3,texto3,&Magnitud::funciondR,"El resistor total en paralelo es: "," ");
                break;
            
                case 2:      
                texto3[0]= "Calcular resistor en paralelo teniendo la resistencia interna del mecanismo de medicion";
                texto3[1]= "la resistencia interna del mecanismo de medicion ";
                texto3[2]= "factor de ampliacion del rango de medicion ";
                texto3[3]= "1 ";
                funcionDatos(3,texto3,&Magnitud::funciondR,"El resistor total en paralelo es: "," ");
                break;

                case 3:
                texto3[0] = "Calcular el factor de ampliacion del rango de medicion";
                texto3[1]= "la corriente total ";
                texto3[2]= "la corriente de mecanismo de medicion ";
                funcionDatos(2,texto3,&Magnitud::funcionD,"El factor de ampilacion del amperimetro es: "," ");
                break;
            
            }
            break;

            case 3:
            texto = " Calcular la determinacion indirecta de la resistencia : \n"
                    "1--> Conexion con error en la tension  \n"
                    "2--> Conexion con error en la intensidad \n";
            indice2 = IngresoDigito(1,2,texto);
            system("clear");
            switch(indice2){
                case 1:
                texto3[0]= " Calcular la conexion con error en la tension";
                texto3[1]= "la tension ";
                texto3[2]= "la corriente ";
                texto3[3]= "la resistencia interna del amperimetro ";
                funcionDatos(3,texto3,&Magnitud::funcionddr,"El valor de la resistencia corregida es: "," ");
                break;

                case 2:
                texto3[0] = "Calcular conexion con error en la intensidad";
                texto3[1] = " 1 ";
                texto3[2] = " la corriente ";
                texto3[3] = " la tension ";
                texto3[4] = " 1 ";
                texto3[5] = " la resistencia interna del voltimetro ";
                funcionDatos(5,texto3,&Magnitud::funcionE1,"El valor de la resistencia corregida es: "," ");
                break;
            }
               
            break;

            case 4:
            texto3[0]= "Calcular la conexion de resistencia en puente ";
            texto3[1]= " la Resistencia 1 ";
            texto3[2]= " la Resistencia 2 ";
            texto3[3]= " la Resistencia 3 ";
            funcionDatos(3,texto3,&Magnitud::funcionMd,"El valor de la cuarta resistencia es: "," ohmios");
            break;

            case 5:
            mensaje();
            break;
        }
        mensaje();
        texto2 = "Desea continuar dentro de la Ampliacion del rango de medicion S/n -->  ";
        if (mensajeFinal(texto2)){
            break;
        }
       
    }        

}
/*calculos para division de tension segun la tension parcial sin carga,
tension de marcha en vacio, resistencia interna de la fuente de tension*/

void divisorTension(){
    string texto,texto2;
    string texto3[100];
    int indice;

    while(true){
        texto = " ########E3.coreSoftwarev1###############\n"
                " Calcular: \n"
                "1--> Tension parcial sin carga\n"
                "2--> Tension de marcha en vacio\n"
                "3--> Resistencia interna de la fuente de tension equivalente \n"
                "4--> Salir\n ";
        indice = IngresoDigito(1,4,texto);
        system("clear");
        switch(indice){
            case 1:
            texto3[0]= "Calcular la tension parcial sin carga";
            texto3[1]= "la resistencia parcial 1 ";
            texto3[2]= "la resistencia parcial 2 ";
            texto3[3]= "la tension total ";
            funcionDatos(3,texto3,&Magnitud::funcionE2,"La tension parcial sin carga es: "," V");
            break;

            case 2:
            texto3[0]= "Calcular la tension de marcha en vacio";
            texto3[1]= "la resistencia parcial 1 ";
            texto3[2]= "la resistencia parcial 2 ";
            texto3[3]= "la tension total ";
            funcionDatos(3,texto3,&Magnitud::funcionE2,"La tension de marcha en vacio: "," V");
            break;

            case 3:
            texto3[0]= "Calcular la  resistencia interna de la fuente de tension equivalente ";
            texto3[1]= "la resistencia parcial 1 ";
            texto3[2]= "la resistencia parcial 2 ";
            funcionDatos(2,texto3,&Magnitud::funcionMdS,"La resistencia interna es: "," ohmios");
            break;
        
        }
        mensaje();
        texto2 = "Desea continuar dentro del divisor de tension S/n -->  "; 
        if (mensajeFinal(texto2)){
            break;
        }
      

    }


}

/*Aqui se calcula la variacion de temperatura en las resistencias*/
void resistenciaTemperatura(){
    string texto,texto2;
    string texto3[100];
    int indice;

    while(true){
        texto = " ########E3.coreSoftwarev1###############\n"
                " Calcular: \n"
                "1--> Variacion de la resistencia\n"
                "2--> Resistencia en caliente\n"
                "3--> Variacion de la temperatura\n"
                "4--> Salir\n ";
        indice = IngresoDigito(1,4,texto);
        system("clear");
        switch(indice){
            case 1:
            texto3[0] = " Calcular la variacion de la resistencia";
            texto3[1] = "coeficiente de temperatura ";
            texto3[2] = "la variacion de la temperatura ";
            texto3[3] = "la resistencia en frio ";
            funcionDatos(3,texto3,&Magnitud::funcionmmm,"El valor de la variacion de la resistencia es: "," ");
            break;

            case 2:
            texto3[0] = " Calcular la resistencia en caliente";
            texto3[1] = "la resistencia en frio ";
            texto3[2] = "la variacion de la resistencia ";
            funcionDatos(2,texto3,&Magnitud::funcionS,"El valor de la resistencia en caliente es: "," ");
            break;

            case 3:
            texto3[0]= " Calcular la variacion de temperatura";
            texto3[1]= "la resistencia en caliente ";
            texto3[2]= "la resistencia en frio ";
            texto3[3]= "coeficiente de temperatura ";
            funcionDatos(3,texto3,&Magnitud::funcionDrm,"el valor de la variacion de temperatura es: "," ");
            break;

            case 4:
            mensaje();
            break;

        }
        mensaje();
        texto2 ="Desea continuar dentro de la Resistencia y Temperatura S/n -->  "; 
        if (mensajeFinal(texto2)){
            break;
        }
            
          
    }
}
 void potenciaElectrica(){
    string texto,texto2;
    string texto3[100];
    int indice;

    while(true){
        texto = " ########E3.coreSoftwarev1###############\n"
                " Calcular la potencia: \n"
                "1--> Teniendo tension y corriente\n"
                "2--> Teniendo corriente y resistencia\n"
                "3--> Teniendo tension y resistencia\n"
                "4--> Salir\n ";
        indice = IngresoDigito(1,4,texto);
        system("clear");
        switch(indice){
            case 1:
            texto3[0] = " Calcular la potencia teniendo la tension y corriente";
            texto3[1]= "la tension ";
            texto3[2]= "la corriente ";
            funcionDatos(2,texto3,&Magnitud::funcionM,"La potencia es: "," watt");
            break;

            case 2:
            texto3[0]= " Calcular la potencia teniendo corriente y resistencia";
            texto3[1]= "la corriente ";
            texto3[2]= "la resistencia ";
            funcionDatos(2,texto3,&Magnitud::funcionMP,"La potencia es: "," watt");
            break;

            case 3:
            texto3[0]= "Calcular la potencia teniendo la tension y la resistencia";
            texto3[1]= "la tension ";
            texto3[2]= "la resistencia ";
            funcionDatos(2,texto3,&Magnitud::funcionDP,"La potencia es: "," watt");
            break;

             case 4:
             mensaje();
             break;    
        }
        mensaje();
        texto2 = "Desea continuar dentro de la potencia electrica S/n -->  ";
        
        if (mensajeFinal(texto2)){
            break;
        }
            
    }
    

 }

void trabajoElectrico(){
     string texto,texto2;
    string texto3[100];
    int indice;

    while(true){
        texto = " ########E3.coreSoftwarev1###############\n"
                " Calcular: \n"
                "1--> Trabajo eletrico\n"
                "2--> Determinacion de potencia con el contador\n"
                "3--> Salir\n ";
        indice = IngresoDigito(1,3,texto);
        system("clear");
        switch(indice){
            case 1:
            texto3[0]= " Calcular el trabajo electrico";
            texto3[1]= "la potencia electrica ";
            texto3[2]=  "el tiempo ";
            funcionDatos(2,texto3,&Magnitud::funcionM,"El trabajo electrico es: "," Kw/H");
            break;

            case 2:
            texto3[0]= "Calcular la determinacion de potencia con el contador";
            texto3[1]= "la velocidad del giro del disco contador ";
            texto3[2]= "la constante del contador ";
            funcionDatos(2,texto3,&Magnitud::funcionD,"La determinacion de potencia es: "," ");
            break;
            
            case 3:
            mensaje();
            break;

        }         
        texto2 = "Desea continuar dentro del trabajo electrico S/n -->  ";
        if(mensajeFinal(texto2)){
         break;
        }        
    }
}

void conversionEnergia(){
    int indice,indice2;
    string texto,texto2;
    string texto3[100];
    while(true){
        texto = " ########E3.coreSoftwarev1###############\n"
                " Calcular : \n"
                "1--> Rendimientos\n"
                "2--> La potencia de perdidad\n"
                "3--> Salir\n";
        indice = IngresoDigito(1,5,texto);
        system("clear");
        switch(indice){
            case 1:
            texto = "Calcular el rendimiento\n"
                    "1--> Segun la potencia electrica\n"
                    "2--> Segun el trabajo eletrico\n"
                    "3--> Segun el rendimeinto parcial\n";
            indice2 = IngresoDigito(1,3,texto);
            system("clear");        
            switch(indice2){
                case 1:
                texto3[0]= " Calcular el rendimiento segun la potencia electrica";
                texto3[1]="potencia util";
                texto3[2]="potencia de alimentacion";
                funcionDatos(2,texto3,&Magnitud::funcionD,"El valor de rendimiento es: "," ");
                break;

                case 2:
                texto3[0]= " Calcular el rendimiento segun el trabajo electrico";
                texto3[1] = "trabajo util";
                texto3[2] = "trabajo de alimentacion";
                funcionDatos(2,texto3,&Magnitud::funcionD,"El valor del rendimiento es: "," ");
                break;

                case 3:
                texto3[0]= " Calcular el rendimiento segun el rendimiento parcial";
                texto3[1] = "rendimiento parcial n1";
                texto3[2] = "rendimiento parcial n2";
                funcionDatos(2,texto3,&Magnitud::funcionM,"El valor del rendimiento es: "," ");
                break;      
            }
            break;

            case 2:
            texto3[0]= " Calcular la potencia de perdida";
            texto3[1]="potencia util";
            texto3[2]="potencia de alimentacion";
            funcionDatos(2,texto3,&Magnitud::funcionM,"El valor de la potencia es: "," ");
            break; 

            case 3:
            mensaje();
            break;

        }        
        
        texto2 = "Desea continuar dentro de Conversion de energia y rendimiento S/n -->";
        if (mensajeFinal(texto2)){
            break;
        }
        
    }
}


