/* 
 * File:   8EjercicioClassSueldoNeto.cpp
 * Author: guija
 *
 * Created on 12 de marzo de 2021, 04:49 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*El sueldo de un empleado de la empresa “La Bodeguita” es de la suma de su 
sueldo mensual  más 4% de comisión sobre las ventas mensuales realizadas; 
 * después al total obtenido hay que descontarle un 16% de IVA. Realizar un T
 * AD e implementarlo (C++) para que permita sacar el sueldo neto al mes 
 * sabiendo que debe solicitar las ventas y el sueldo mensual.*/

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
// Definición de método de la clase class SueldoEmpleado
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
    
    cout << "El sueldo neto del Empleado es: " << Empleado1.SueldoNeto() << endl;

    return 0;
}

