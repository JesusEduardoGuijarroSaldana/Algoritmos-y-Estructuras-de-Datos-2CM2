/* 
 * File:   Ejercicio3Class.cpp
 * Author: guija
 *
 * Created on 11 de marzo de 2021, 05:56 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Operaciones {
private:
    float Num1;
    float Num2;
public:
    void obtenernums();
    int ressuma();
    int resresta();
    int resmult();
    float resdiv();
};

void Operaciones::obtenernums(){
    cout << "Dame el primer número" << endl;
    cin >> Num1;
    cout << "Dame el segundo número" << endl;
    cin >> Num2; 
}

int Operaciones::ressuma(){
    int res=0;
    res = Num1+Num2;
    return res;
}
int Operaciones::resresta(){
    int res=0;
    res = Num1-Num2;
    return res;
}
int Operaciones::resmult(){
    int res=0;
    res = Num1*Num2;
    return res;
}
float Operaciones::resdiv(){
    float res=0;
    res = Num1/Num2;
    return res;
}
int main(int argc, char** argv) {

Operaciones Res1; // objeto definido   

Res1.obtenernums();

cout << "El resultado de la suma es: " << Res1.ressuma() << endl;
cout << "El resultado de la resta es: " << Res1.resresta() << endl;
cout << "El resultado de la multiplicación es: " << Res1.resmult() << endl;
cout << "El resultado de la división es: " << Res1.resdiv() << endl;

    return 0;
}
