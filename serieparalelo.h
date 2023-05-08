#ifndef SERIEPARALELO_H
#define SERIEPARALELO_H
#include<iostream>
#include"funcioningreso.cpp"
using namespace std;
class SerieParalelo{
    private:
    float* cantidades;
    int cantidad;
    float totalR;
    public:
    SerieParalelo(int cantidad,float totalR){
        this-> cantidad = cantidad;
        this->totalR = totalR;
        cantidades = new float[cantidad];
    }
    SerieParalelo(int cantidad){
        this->cantidad = cantidad;
        cantidades = new float[cantidad];
    }
    SerieParalelo(){

    }

    ~SerieParalelo(){
        
    }
    void Serie(){
        float total1;
        for(int i=0;i<cantidad;i++){
            cout<<" Ingrese valor # "<<i+1<<": "<<endl; 
            cantidades[i]= IngresoValor();
        }
        for(int i=0;i<cantidad;i++){
            total1 = total1 + cantidades[i];
        }
        totalR = total1;
    }
    
    void Paralelo(){
        float total = 0;
        for(int i=0;i<cantidad;i++){
            cout<<" Ingrese valor # "<<i+1<<": "<<endl; 
            cantidades[i] = IngresoValor();
        }
        for(int i=0;i<cantidad;i++){
            
            total = total + (1/cantidades[i]);
        }
        totalR = total;
    }

    float getTotal(){
        return totalR;
    }
};
#endif