/* 
 * File:   6EjercicioClassTrianguloRec.cpp
 * Author: guija
 *
 * Created on 12 de marzo de 2021, 02:02 PM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

class TrianguloRectangulo{
private: 
    int base;
    int altura;
public:
    void obtener();
    float perimetro();
    float area();
    TrianguloRectangulo();
    ~TrianguloRectangulo();
};
//Constructor 
TrianguloRectangulo::TrianguloRectangulo(){

}
//Destructor
TrianguloRectangulo::~TrianguloRectangulo(){

}
void TrianguloRectangulo::obtener(){
    cout << "Ingrese la base del triángulo rectángulo: " << endl;
    cin >> base;
    cout << "Ingrese el altura del triángulo rectángulo: " << endl;
    cin >> altura;
}
float TrianguloRectangulo::perimetro(){
    float hip=0, p=0;
    hip=(base*base)+(altura*altura);
    p=base+altura+sqrt(hip);
    return p;
}
float TrianguloRectangulo::area(){
    float a=0;
    a=base*altura/2;
    return a;
}

int main(int argc, char** argv) {

    TrianguloRectangulo objeto1;
    
    objeto1.obtener();
    
    cout << "El perimetro del triángulo rectángulo es: " << objeto1.perimetro() << endl;
    cout << "El área del triángulo rectángulo es: " << objeto1.area() << endl;
    
    
    return 0;
}

