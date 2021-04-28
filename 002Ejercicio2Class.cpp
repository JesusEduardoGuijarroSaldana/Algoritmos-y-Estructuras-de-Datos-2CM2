/* 
 * File:   Ejercicio2Class.cpp
 * Author: guija
 *
 * Created on 11 de marzo de 2021, 01:48 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Operaciones {
private:
    int Num1;
    int Num2;
public:
    void obtenernums();
    void ressuma();
    void resresta();
    void resmult();
    void resdiv();
};

void Operaciones::obtenernums(){
    cout << "Dame el primer número" << endl;
    cin >> Num1;
    cout << "Dame el segundo número" << endl;
    cin >> Num2; 
}

void Operaciones::ressuma(){
    cout << "La suma es: " << Num1+Num2 << endl;
}
void Operaciones::resresta(){
    cout << "La resta es: " << Num1-Num2 << endl;
}
void Operaciones::resmult(){
    cout << "La multiplicación es: " << Num1*Num2 << endl;
}
void Operaciones::resdiv(){
    cout << "La división es: " << Num1/Num2 << endl;
}
int main(int argc, char** argv) {

Operaciones Res1; // objeto definido   

Res1.obtenernums();

Res1.ressuma();        
Res1.resresta();
Res1.resmult();
Res1.resdiv();

    return 0;
}

