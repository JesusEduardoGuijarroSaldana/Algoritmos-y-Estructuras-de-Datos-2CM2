/* 
 * File:   4Ejercicio4Class.cpp
 * Author: guija
 *
 * Created on 11 de marzo de 2021, 06:21 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Circulo{
private: 
    float radio;
public: 
    void obtenerradio();
    float area();
    float perimetro();
    float diametro();

};

void Circulo::obtenerradio(){
    cout << "Ingresa el radio del ciruculo " << endl;
    cin >> radio;
}

float Circulo::area(){
    float res=0;
    res = 3.1416*radio*radio;
    return res;
}
float Circulo::perimetro(){
    float res=0;
    res = 2*3.1416*radio;
    return res;
}
float Circulo::diametro(){
    float res=0;
    res = radio*2;
    return res;
}

int main(int argc, char** argv) {

    
    
    // agregar menu aqui
    
    Circulo Resultado; //objeto definido 
    
    Resultado.obtenerradio();
    
    cout << "El área del circulo es: " << Resultado.area() << endl;
    cout << "El perimetro del circulo es: " << Resultado.perimetro() << endl;
    cout << "El diametro del circulo es: " << Resultado.diametro() << endl;
    
    
    return 0;
}

