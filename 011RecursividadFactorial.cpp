/* 
 * File:   11RecursividadFactorial.cpp
 * Author: guija
 *
 * Created on 15 de abril de 2021, 01:27 PM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

class CFactorial{
    public: 
    double factorial (double);

};

double CFactorial::factorial(double n){
//Caso base
    if ((n==1)||(n==0))
        return 1;
    else 
        return n*factorial(n-1); // Caso recursivo 
}
int main(int argc, char** argv) {
    CFactorial Fa;
    double N;
    cout << "Número: " << endl;
    cin>> N;
    cout << "El factorial de " <<N<< " es: " << Fa.factorial(N) << endl;

    return 0;
}

