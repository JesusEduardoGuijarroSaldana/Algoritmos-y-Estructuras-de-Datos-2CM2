/* 
 * File:   7EjercicioClassHipTrianRec.cpp
 * Author: guija
 *
 * Created on 12 de marzo de 2021, 03:07 PM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/*Diseñar e implementar un TAD que lea los valores de los catetos de un 
triángulo rectángulo y calcule el valor de la hipotenusa, el área y el 
 * perímetro del triángulo*/

class TrianguloRectangulo{
private: 
    int base;
    int altura;
public:
    void obtener();
    float hipotenusa();
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
float TrianguloRectangulo::hipotenusa(){
    float hip=0, res=0;
    hip=(base*base)+(altura*altura);
    res= sqrt(hip);
    return res;
}
float TrianguloRectangulo::perimetro(){
    float hip=0, peri=0;
    hip=(base*base)+(altura*altura);
    peri=base+altura+sqrt(hip);
    return peri;
}
float TrianguloRectangulo::area(){
    float a=0;
    a=base*altura/2;
    return a;
}

int main(int argc, char** argv) {

    TrianguloRectangulo objeto1;
    
    objeto1.obtener();
    
    cout << "La hipotenusa del triángulo rectángulo es: " << objeto1.hipotenusa() << endl;
    cout << "El perimetro del triángulo rectángulo es: " << objeto1.perimetro() << endl;
    cout << "El área del triángulo rectángulo es: " << objeto1.area() << endl;
    
    
    return 0;
}

