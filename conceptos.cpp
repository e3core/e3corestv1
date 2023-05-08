#include<iostream>
#include<stdlib.h>
using namespace std;
void concept(){
string pregunta;
cout<<"<<----------Conceptos------------->>"<<endl;

cout<<" Tension: es la diferencia que existe entre la carga electrica que sale "<<endl;
cout<<"  de la fuente y con la que finalmente llegan al final del circuito. "<<endl<<endl; 

cout<<" Resistencia: es la dificultad que opone un circuito al paso de la corriente. "<<endl<<endl;

cout<<" Corriente: es la magnitud fisica que expresa la cantidad de electricidad "<<endl;
cout<<"  que fluye por un conductor en la unidad de tiempo. "<<endl<<endl;

cout<<" Conductancia: es la determinacion de la rapidez con la que la corriente "<<endl;
cout<<"  puede fluir dentro del componente. "<<endl<<endl;

cout<<" Longitud del conductor: es la medida física de la distancia que existe"<<endl; 
cout<<"  entre sus extremos o terminales."<<endl<<endl;

cout<<" Seccion del conductor: es la medida transversal de su área, es decir,"<<endl; 
cout<<"  es la superficie que queda expuesta cuando se corta un conductor en un plano"<<endl; 
cout<<"  perpendicular a su eje longitudinal."<<endl<<endl;

cout<<" Conductibilidad: es una medida de la facilidad con que un material puede ser"<<endl; 
cout<<"  conducido por la corriente eléctrica, y se expresa en términos de su "<<endl; 
cout<<"  resistencia eléctrica. La conductibilidad es el inverso de la resistividad, "<<endl; 
cout<<"  y se expresa en siemens por metro al cuadrado (S/m²)."<<endl<<endl;

cout<<" Conductividad: es la medida de la capacidad de un material para conducir la "<<endl; 
cout<<"  corriente eléctrica, y se expresa en siemens por metro (S/m)" <<endl<<endl;

cout<<" Resistividad: es una propiedad intrínseca de los materiales que indica la "<<endl; 
cout<<"  capacidad que tienen para resistir el flujo de corriente eléctrica. "<<endl; 
cout<<"  Se expresa en ohmios por metro (Ω/m) y depende de las características físicas "<<endl; 
cout<<"  y químicas del material, como su composición, estructura, temperatura, presión, etc."<<endl<<endl;

cout<<" Resistencia especifica: es una medida de la resistividad de un material, "<<endl;
cout<<"  y se define como la resistencia eléctrica que presenta un material de "<<endl;
cout<<"  un metro de longitud y una sección transversal de un metro cuadrado. "<<endl;
cout<<"  Se expresa en ohmios-metros (Ω·m)." <<endl<<endl;

cout<<" Presione una tecla para salir "<<endl;
getline(cin,pregunta);
while(true){
    if (pregunta == "-"){
        continue;
    }else{
        break;
}
}




}

