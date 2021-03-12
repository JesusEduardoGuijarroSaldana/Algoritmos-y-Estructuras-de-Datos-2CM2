/* 
 * File:   8EjercicioClassSueldoNeto.cpp
 * Author: guija
 *
 * Created on 12 de marzo de 2021, 04:49 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

class SueldoEmpleado{
private: 
    float SueldoMensual;
    int Ventas;
public:
    void Obtener();
    float SueldoNeto();
    SueldoEmpleado();
    ~SueldoEmpleado();
    
};
//Constructor 
SueldoEmpleado::SueldoEmpleado(){

}
//Destructor
SueldoEmpleado::~SueldoEmpleado(){

}
void SueldoEmpleado::Obtener(){
    cout <<"Ingrese la cantidad de su sueldo mensual del empleado: ";
    cin >> SueldoMensual;
    cout <<"Ingrese el número de ventas mesuales realizadas por el empleado: ";
    cin >> Ventas;
}
float SueldoEmpleado::SueldoNeto(){
    float resmasventas=0, iva=0, resfinal=0;
    resmasventas = (SueldoMensual*0.04*Ventas)+SueldoMensual;
    iva = resmasventas*0.16;
    resfinal = resmasventas-iva;
    return resfinal;
}
int main(int argc, char** argv) {
    
    SueldoEmpleado Empleado1;
    
    Empleado1.Obtener();
    
    cout << "Eñ sueldo neto del Empleado es: " << Empleado1.SueldoNeto() << endl;

    return 0;
}

