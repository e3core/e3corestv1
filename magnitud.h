#ifndef MAGNITUD_H
#define MAGNITUD_H
#include<iostream>
using namespace std;
class Magnitud{
 private:
        float* datos;
        int cantidades;
    public:
        Magnitud(float* datos,int cantidades){
            this->datos = datos;
            this->cantidades = cantidades;
            
        }
       
      
        ~Magnitud(){

        }

        Magnitud(){

        }
         
         void funcionM(){
            datos[100] = datos[0]*datos[1];
         } 
         void funcionD(){
            datos[100] = datos[0]/datos[1];
         }
         void funciondD(){
            datos[100] = datos[0]/(datos[1]*datos[2]);
         }
         void funcionDd(){
            datos[100] = (datos[0]*datos[1])/datos[2];
         }
        void funcionDr(){
            datos[100] =(datos[0]-datos[1])/datos[2];
        }
        void funcionMr(){
            datos[100] = (datos[0]-datos[1])*datos[2];
        }
        void funciondR(){
            datos[100] = datos[0]/(datos[1]-datos[2]);
        }
        
        void funcionddr(){
            datos[100] = (datos[0]/datos[1])-datos[2];
        }
        void funcionE1(){
            datos[100] = datos[0]/(datos[1]/datos[2])-(datos[3]/datos[4]);
        }
        void funcionMd(){
            datos[100] = (datos[0]*datos[1])/datos[2];
        }
        void funcionE2(){
            datos[100] = (datos[0]/(datos[1]+datos[0]))*datos[2];
        }
        void funcionMdS(){
            datos[100] = (datos[0]*datos[1])/(datos[0]+datos[1]);
        }
        void funcionmmm(){
            datos[100] = datos[0]*datos[1]*datos[2];
        }
        void funcionDrm(){
            datos[100] = (datos[0]-datos[1])/(datos[2]*datos[3]);
        }
        void funcionS(){
            datos[100] = datos[0]+datos[1];
        }
        void funcionR(){
            datos[100] = datos[0]-datos[1];
        }
         float getDato4(){
            return datos[100];
         }


};

#endif
