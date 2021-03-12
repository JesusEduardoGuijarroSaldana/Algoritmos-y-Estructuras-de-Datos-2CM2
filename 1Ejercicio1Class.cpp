/* 
 * File:   main.cpp
 * Author: guija
 *
 * Created on 11 de marzo de 2021, 01:05 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Persona {
private:
    char nombre[40];
public: 
    void dormir();
    void hablar();
    void contar();
    void decirnombre();
    void obtenernombre();
};
void Persona::dormir(){
    cout << "No molestar... estoy durmiendo, Atte. "<< nombre << endl;
}
void Persona::hablar(){
    cout << "Platicando por el gusto de convivir, Atte " << nombre << endl;
}
void Persona::contar(){
    cout << "Contando 1.. 2.. 3... 4... y ya no me los sé, Atte " << nombre << endl;
}
void Persona::obtenernombre(){
    cout << "Dame tu nombre" <<endl;
    cin >> nombre; 
}
void Persona::decirnombre(){
    cout << "Mi nombre es " <<nombre<< endl;
}
/*
 * 
 */
int main(int argc, char** argv) {
Persona Per1; // objeto definido
Persona Per2; // objeto definido

Per1.obtenernombre();
Per2.obtenernombre();

Per1.decirnombre();
Per2.decirnombre();

Per1.dormir();
Per2.dormir();

Per1.hablar();
Per2.hablar();


    return 0;
}

