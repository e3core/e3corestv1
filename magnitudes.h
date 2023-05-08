#ifndef MAGNITUDES_H
#define MAGNITUDES_H
#include<iostream>
using namespace std;


class MagnitudElectrica{
    private:
        float dato1,dato2,dato3,dato4,dato11,dato22;
    public:
        MagnitudElectrica(float dato1, float dato2, float dato3,float dato4, float dato11,float dato22){
            this->dato1 = dato1;
            this->dato2 = dato2;
            this->dato3 = dato3;
            this->dato4 = dato4;
            this->dato11 = dato11;
            this->dato22 = dato22; 
        
        }
        MagnitudElectrica(float dato1, float dato2, float dato3, float dato11,float dato22){
            this->dato1 = dato1;
            this->dato2 = dato2;
            this->dato3 = dato3;
            this->dato11 = dato11;
            this->dato22 = dato22; 
        
        }
        MagnitudElectrica(float dato1,float dato2,float dato3,float dato4){
            this->dato1 = dato1;
            this->dato2 = dato2;
            this->dato3 = dato3;
            this->dato4 = dato4;
        }
        MagnitudElectrica(float dato1,float dato2){
            this->dato1 = dato1;
            this->dato2 = dato2;
        }    
        MagnitudElectrica(float dato1,float dato2,float dato3){
            this->dato1 = dato1;
            this->dato2 = dato2;
            this->dato3 = dato3;
        }
        ~MagnitudElectrica(){

        }
         
         void funcionM(){
            dato4 = dato1 * dato2;
         } 
         void funcionD(){
            dato4 = dato1/dato2;
         }
         void funciondD(){
            dato4 = dato1/(dato2*dato3);
         }
         void funcionDd(){
            dato4 = (dato1*dato2)/dato3;
         }
        void funcionDr(){
            dato4 =(dato1-dato2)/dato3;
        }
        void funcionMr(){
            dato4 = (dato1-dato2)*dato3;
        }
        void funciondR(){
            dato4 = dato1/(dato2-dato3);
        }
        
        void funcionddr(){
            dato4 = (dato1/dato2)-dato3;
        }
        void funcionE1(){
            dato4 = dato1/(dato2/dato3)-(dato11/dato22);
        }
        void funcionMd(){
            dato4 = (dato1*dato2)/dato3;
        }
        void funcionE2(){
            dato4 = (dato1/(dato2+dato1))*dato3;
        }
        void funcionMdS(){
            dato4 = (dato1*dato2)/(dato1+dato2);
        }
        void funcionmmm(){
            dato4 = dato1*dato2*dato3;
        }
        void funcionDrm(){
            dato4 = (dato1-dato2)/(dato11*dato22);
        }
        void funcionS(){
            dato4 = dato1+dato2;
        }
        void funcionR(){
            dato4 = dato1-dato2;
        }
         float getDato4(){
            return dato4;
         }

         };

#endif